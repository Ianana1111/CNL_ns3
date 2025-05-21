// vanet-simulation.cc
#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/mobility-module.h"
#include "ns3/wifi-module.h" // For Wi-Fi Ad Hoc [4]
#include "ns3/aodv-module.h" // AODV routing for Ad Hoc [4]
#include "ns3/applications-module.h"
#include "ns3/netanim-module.h" // For animation
#include "ns3/random-variable-stream.h" // 用於隨機變數
#include "ns3/rng-seed-manager.h"     // (可選但推薦) 用於種子管理

#include <iostream>
#include <fstream>
#include <sstream> // For string stream

// 使用 ns-3 命名空間
using namespace ns3;

// 日誌組件定義
NS_LOG_COMPONENT_DEFINE("VanetSimulation");
// NS_LOG_COMPONENT_DEFINE("VehicleApp");

// --- 1. 自訂 Packet Tag ---
// 用於攜帶車牌、時間、發送者 MAC 和三寶標記
class VehicleMessageTag : public Tag {
public:
    static TypeId GetTypeId(void);
    TypeId GetInstanceTypeId(void) const override;
    uint32_t GetSerializedSize(void) const override;
    void Serialize(TagBuffer i) const override;
    void Deserialize(TagBuffer i) override;
    void Print(std::ostream& os) const override;

    // Setter methods
    void SetTimestamp(Time time) { m_timestamp = time; }
    void SetVehiclePlate(const std::string& plate) { m_vehiclePlate = plate; }
    void SetSenderMac(Mac48Address mac) { m_senderMac = mac; }
    void SetIsSanbao(bool isSanbao) { m_isSanbao = isSanbao; }

    // Getter methods
    Time GetTimestamp(void) const { return m_timestamp; }
    std::string GetVehiclePlate(void) const { return m_vehiclePlate; }
    Mac48Address GetSenderMac(void) const { return m_senderMac; }
    bool IsSanbao(void) const { return m_isSanbao; }

private:
    Time m_timestamp;
    std::string m_vehiclePlate; // 假設車牌最多 15 字元
    Mac48Address m_senderMac;
    bool m_isSanbao;
    char m_vehiclePlateBuffer[16]; // 用於序列化字串
};

// 實作 Packet Tag 的方法 (GetTypeId, GetInstanceTypeId, etc.)
TypeId VehicleMessageTag::GetTypeId(void) {
    static TypeId tid = TypeId("ns3::VehicleMessageTag")
        .SetParent<Tag>()
        .SetGroupName("VanetSimulation")
        .AddConstructor<VehicleMessageTag>()
        .AddAttribute("Timestamp", "The time the message was sent",
                      TimeValue(Seconds(0)),
                      MakeTimeAccessor(&VehicleMessageTag::m_timestamp),
                      MakeTimeChecker())
        .AddAttribute("VehiclePlate", "The license plate of the sending vehicle",
                      StringValue(""),
                      MakeStringAccessor(&VehicleMessageTag::m_vehiclePlate),
                      MakeStringChecker())
        .AddAttribute("SenderMac", "The MAC address of the sender's device",
                      Mac48AddressValue(Mac48Address::GetBroadcast()),
                      MakeMac48AddressAccessor(&VehicleMessageTag::m_senderMac),
                      MakeMac48AddressChecker())
        .AddAttribute("IsSanbao", "Flag indicating if 'IAM_SANBAO' message",
                      BooleanValue(false),
                      MakeBooleanAccessor(&VehicleMessageTag::m_isSanbao),
                      MakeBooleanChecker());
    return tid;
}

TypeId VehicleMessageTag::GetInstanceTypeId(void) const { return GetTypeId(); }
// 序列化和反序列化需要仔細處理字串長度
uint32_t VehicleMessageTag::GetSerializedSize(void) const {
    return sizeof(m_timestamp) + sizeof(m_vehiclePlateBuffer) + sizeof(m_senderMac) + sizeof(m_isSanbao);
}

void VehicleMessageTag::Serialize(TagBuffer i) const {
    i.WriteU64(m_timestamp.GetNanoSeconds());
    // 確保字串不超過緩衝區
    strncpy(const_cast<char*>(m_vehiclePlateBuffer), m_vehiclePlate.c_str(), 15);
    const_cast<char*>(m_vehiclePlateBuffer)[15] = '\0'; // Null-terminate
    for(uint32_t j=0; j<16; ++j) i.WriteU8(m_vehiclePlateBuffer[j]);
    uint8_t macBuffer[6];
    m_senderMac.CopyTo(macBuffer);
    for(int k=0; k<6; ++k) i.WriteU8(macBuffer[k]);
    i.WriteU8(m_isSanbao ? 1 : 0);
}

void VehicleMessageTag::Deserialize(TagBuffer i) {
    m_timestamp = NanoSeconds(i.ReadU64());
    for(uint32_t j=0; j<16; ++j) m_vehiclePlateBuffer[j] = i.ReadU8();
    m_vehiclePlate = std::string(m_vehiclePlateBuffer);
    uint8_t macBuffer[6];
    for(int k=0; k<6; ++k) macBuffer[k] = i.ReadU8();
    m_senderMac.CopyFrom(macBuffer);
    m_isSanbao = (i.ReadU8() == 1);
}

void VehicleMessageTag::Print(std::ostream& os) const {
    os << "Timestamp=" << m_timestamp
       << ", Plate=" << m_vehiclePlate
       << ", MAC=" << m_senderMac
       << ", IsSanbao=" << (m_isSanbao ? "Yes" : "No");
}



// --- 2. 自訂應用程式 ---
class VehicleApp : public Application {
public:
    VehicleApp();
    virtual ~VehicleApp();
    static TypeId GetTypeId(void);

    void Setup(Address sinkAddress, uint16_t sinkPort, uint32_t packetSize, Time dataInterval,
               std::string vehiclePlate, Mac48Address deviceMac, bool sendsSanbao, AnimationInterface* anim, bool shouldSend);

protected:
    virtual void DoDispose(void);

private:
    virtual void StartApplication(void);
    virtual void StopApplication(void);

    void ScheduleTx(void);
    void SendPacket(void);
    void ReceivePacket(Ptr<Socket> socket);

    Ptr<Socket> m_socket;       // 用於發送和接收的 UDP socket
    Address     m_peerAddress;  // 廣播位址
    uint16_t    m_peerPort;     // 廣播埠
    uint32_t    m_packetSize;   // 封包大小 (payload)
    Time        m_interval;     // 發送間隔
    EventId     m_sendEvent;    // 下一次發送事件
    bool        m_running;      // 應用程式是否在運行
    uint32_t    m_packetsSent;

    // Device specific info
    std::string  m_vehiclePlate;
    Mac48Address m_deviceMac;
    bool         m_sendsSanbao; // 這個 device 是否發送 "我是三寶" 訊息
    AnimationInterface* m_anim; 
    bool m_shouldSend;
};

// 實作 VehicleApp
NS_OBJECT_ENSURE_REGISTERED(VehicleApp);

TypeId VehicleApp::GetTypeId(void) {
    static TypeId tid = TypeId("ns3::VehicleApp")
        .SetParent<Application>()
        .SetGroupName("VanetSimulation")
        .AddConstructor<VehicleApp>();
    return tid;
}

VehicleApp::VehicleApp() : m_socket(0), m_peerPort(0), m_packetSize(0), m_interval(0), m_running(false), m_packetsSent(0), m_sendsSanbao(false) {}
VehicleApp::~VehicleApp() { m_socket = 0; }
void VehicleApp::DoDispose(void) { Application::DoDispose(); }

void VehicleApp::Setup(Address sinkAddress, uint16_t sinkPort, uint32_t packetSize, Time dataInterval,
                       std::string vehiclePlate, Mac48Address deviceMac, bool sendsSanbao, AnimationInterface* anim, bool shouldSend) {
    m_peerAddress = sinkAddress;
    m_peerPort = sinkPort;
    m_packetSize = packetSize;
    m_interval = dataInterval;
    m_vehiclePlate = vehiclePlate;
    m_deviceMac = deviceMac;
    m_sendsSanbao = sendsSanbao;
    m_anim = anim; 
    m_shouldSend = shouldSend;

}

// ok
void VehicleApp::StartApplication(void) {
    m_running = true;
    m_packetsSent = 0;
    if (m_socket == nullptr) {
        TypeId tid = TypeId::LookupByName("ns3::UdpSocketFactory");
        m_socket = Socket::CreateSocket(GetNode(), tid);
        // 設定 socket 允許廣播
        m_socket->SetAllowBroadcast(true);
        // 綁定到本地的接收埠 (廣播發送不需要綁定到特定源位址，但接收需要綁定埠)
        InetSocketAddress local = InetSocketAddress(Ipv4Address::GetAny(), m_peerPort);
        if (m_socket->Bind(local) == -1) {
            NS_FATAL_ERROR("Failed to bind socket");
        }
    }

    NS_LOG_INFO("Node " << GetNode()->GetId() << " (" << m_vehiclePlate << ") attempting to set RecvCallback.");
    m_socket->SetRecvCallback(MakeCallback(&VehicleApp::ReceivePacket, this));
    NS_LOG_INFO("Node " << GetNode()->GetId() << " (" << m_vehiclePlate << ") RecvCallback set.");


    if (m_socket != nullptr) { // 先確保 m_socket 不是空的
        // 注意：UdpSocketImpl 可能沒有公開的 GetSocketState() 方法
        // 或者其狀態枚舉值可能不直接是 UdpSocketImpl::CLOSED
        // 需要查閱 UdpSocketImpl 或其基類 Socket 的 API
        // 以下是一個概念性的檢查，實際的 API 可能不同

        // 嘗試獲取 Socket 錯誤碼，如果 Bind 失敗，GetErrno 可能返回非零值
        Socket::SocketErrno err = m_socket->GetErrno();
        if (err != Socket::ERROR_NOTERROR) {
            NS_LOG_WARN("Node " << GetNode()->GetId() << " (" << m_vehiclePlate
                        << ") Socket has an error after Bind/SetRecvCallback: " << m_socket->GetErrno());
        }

        // 更通用的檢查可能是看它是否能被用於發送 (如果不能，說明有問題)
        // 或者，如果 ns-3 的 Socket 提供了明確的 "IsBound" 或 "IsListening" (對於UDP，更像是 "IsReadyToReceive")
        // 方法，可以使用那些。

        // **對於 UdpSocketImpl，一個更實際的檢查是確認它是否已綁定，
        // 並且是否可以獲取其本地綁定的端點 (SockName)**
        Address localAddress;
        if (m_socket->GetSockName(localAddress) == 0) { // GetSockName 成功返回 0
            InetSocketAddress boundAddr = InetSocketAddress::ConvertFrom(localAddress);
            NS_LOG_INFO("Node " << GetNode()->GetId() << " (" << m_vehiclePlate
                        << ") Socket is bound to: " << boundAddr.GetIpv4()
                        << ":" << boundAddr.GetPort());
            if (boundAddr.GetPort() != m_peerPort) {
                NS_LOG_WARN("Node " << GetNode()->GetId() << " (" << m_vehiclePlate
                            << ") Socket bound to unexpected port: " << boundAddr.GetPort()
                            << ", expected: " << m_peerPort);
            }
        } else {
            NS_LOG_WARN("Node " << GetNode()->GetId() << " (" << m_vehiclePlate
                        << ") Failed to get socket name after bind, socket might not be properly bound or ready.");
        }
    }
    ScheduleTx();
    
    NS_LOG_INFO("Node " << GetNode()->GetId() << " (" << m_vehiclePlate << ") App Started at " << Simulator::Now().GetSeconds() << "s");
}

void VehicleApp::StopApplication(void) {
    m_running = false;
    if (m_sendEvent.IsRunning()) {
        Simulator::Cancel(m_sendEvent);
    }
    if (m_socket) {
        m_socket->Close();
    }
    NS_LOG_INFO("Node " << GetNode()->GetId() << " (" << m_vehiclePlate << ") App Stopped at " << Simulator::Now().GetSeconds() << "s");
}

void VehicleApp::ScheduleTx(void) {
    if (m_running) {
        Ptr<UniformRandomVariable> randomDelayGenerator = CreateObject<UniformRandomVariable>();
        double randomDelayInSeconds = randomDelayGenerator->GetValue();
        Time tNextRandomDelay = Seconds(randomDelayInSeconds);
        m_sendEvent = Simulator::Schedule(tNextRandomDelay, &VehicleApp::SendPacket, this);
    }
}

void VehicleApp::SendPacket(void) {
    if (!m_shouldSend) { // 如果不應該發送，則直接返回並不排程下一次
        if (m_running) { // 如果仍在運行，但只是不發送，可以排程一個空的檢查
            ScheduleTx(); // 這樣 StopApplication 仍然可以正確取消 m_sendEvent
        }
        return;
    }
    Ptr<Packet> packet = Create<Packet>(m_packetSize); // 創建一個空 payload 的封包

    VehicleMessageTag tag;
    tag.SetTimestamp(Simulator::Now());
    tag.SetVehiclePlate(m_vehiclePlate);
    tag.SetSenderMac(m_deviceMac); // 設定這個 device 的 MAC
    tag.SetIsSanbao(m_sendsSanbao); // 設定是否為三寶訊息

    packet->AddPacketTag(tag); // 附加自訂 Tag 到封包

    // 發送到廣播位址和指定埠
    m_socket->SendTo(packet, 0, InetSocketAddress(Ipv4Address::GetBroadcast(), m_peerPort));
    m_packetsSent++;
    NS_LOG_INFO("Node " << GetNode()->GetId() << " (" << m_vehiclePlate << ") sent packet " << m_packetsSent
                << " at " << Simulator::Now().GetSeconds() << "s. Sanbao: " << (m_sendsSanbao ? "Yes" : "No"));

    ScheduleTx(); // 排程下一次發送
}

void VehicleApp::ReceivePacket(Ptr<Socket> socket) {
    Ptr<Packet> packet;
    Address from;
    while ((packet = socket->RecvFrom(from))) {
        NS_LOG_INFO("jesus");
        if (packet->GetSize() == 0) {
            break;
        }
        VehicleMessageTag tag;
        if (packet->PeekPacketTag(tag)) {
            NS_LOG_INFO("Node " << GetNode()->GetId() << " (" << m_vehiclePlate
                        << ") received a packet at " << Simulator::Now().GetSeconds() << "s from "
                        << InetSocketAddress::ConvertFrom(from).GetIpv4()
                        << " with Tag: ");
            std::ostringstream tagStream;
            tag.Print(tagStream);
            NS_LOG_INFO(tagStream.str());

            if (tag.IsSanbao()) {
                NS_LOG_WARN("!!! Node " << GetNode()->GetId() << " (" << m_vehiclePlate
                            << ") DETECTED 'IAM_SANBAO' from Plate: " << tag.GetVehiclePlate()
                            << " (MAC: " << tag.GetSenderMac() << ") at " << Simulator::Now().GetSeconds()
                            << "s. Displaying on recorder. !!!");

                // **直接使用 m_anim 成員變數**
                if (m_anim != nullptr) { // **仍然檢查指標是否有效**
                    m_anim->UpdateNodeColor(GetNode(), 255, 0, 0); // Red

                    Simulator::Schedule(Seconds(0.5), [this]() {
                        if (m_anim != nullptr) {
                        m_anim->UpdateNodeColor(GetNode(), 0, 0, 255); // Blue
                        }
                    });
                } else {
                    NS_LOG_DEBUG("AnimationInterface pointer (m_anim) is null. Cannot update node color.");
                }
            }
        } else {
            NS_LOG_INFO("Node " << GetNode()->GetId() << " (" << m_vehiclePlate
                        << ") received a packet at " << Simulator::Now().GetSeconds() << "s from "
                        << InetSocketAddress::ConvertFrom(from).GetIpv4()
                        << " (No VehicleMessageTag found)");
        }
    }
}



// --- 3. 主模擬函數 ---
int main(int argc, char* argv[]) {
    // 啟用日誌 (可選)
    NS_LOG_INFO("fuck1");
    LogComponentEnable("VanetSimulation", LOG_LEVEL_INFO);
    // LogComponentEnable("VehicleApp", LOG_LEVEL_INFO);
    LogComponentEnable("UdpSocketImpl", LOG_LEVEL_LOGIC); // 看更詳細的 UDP 操作

    uint32_t numNodes = 3;
    double simTime = 7.0; // seconds
    std::string phyMode("OfdmRate6Mbps"); // Wi-Fi 速率
    double rss = -110; // dBm, 用於設定感知範圍 (近似)

    // 命令列參數處理 (可選)
    CommandLine cmd(__FILE__);
    cmd.AddValue("numNodes", "Number of Wi-Fi STA devices", numNodes);
    cmd.AddValue("simTime", "Simulation time in seconds", simTime);
    cmd.Parse(argc, argv);

    // --- 節點創建和 Wi-Fi 配置 ---
    NodeContainer devices;
    devices.Create(numNodes);

    // 配置 Wi-Fi Ad Hoc 模式 [4]
    WifiHelper wifi;
    wifi.SetStandard(WIFI_STANDARD_80211a); // or 80211g, 80211n, 80211p for VANETs

    YansWifiPhyHelper wifiPhy;
    wifiPhy.Set("RxGain", DoubleValue(0)); 
    wifiPhy.SetPcapDataLinkType(YansWifiPhyHelper::DLT_IEEE802_11_RADIO);
    // 設定一個最小的能量偵測門檻，模擬接收範圍
    // wifiPhy.Set("EnergyDetectionThreshold", DoubleValue(rss + 3.0)); // 稍微高於 RxSensitivity
    // wifiPhy.Set("CcaMode1Threshold", DoubleValue(rss + 6.0));      //
    wifiPhy.Set("RxSensitivity", DoubleValue(rss + 3.0)); // -110 dBm

    YansWifiChannelHelper wifiChannel;
    wifiChannel.SetPropagationDelay("ns3::ConstantSpeedPropagationDelayModel");

    // 選擇一個傳播損耗模型，例如 TwoRayGround for VANET-like scenarios or LogDistance
    // wifiChannel.AddPropagationLoss("ns3::LogDistancePropagationLossModel",
    //                                "Exponent", DoubleValue(2.0), // 路徑損耗指數
    //                                "ReferenceDistance", DoubleValue(1.0),
    //                                "ReferenceLoss", DoubleValue(30.0)); // 1m 處的參考損耗 (dB)
    
    
    wifiChannel.AddPropagationLoss("ns3::FriisPropagationLossModel",
                               "Frequency", DoubleValue(5.15e9), // 假設 802.11a, 5GHz
                               "SystemLoss", DoubleValue(1.0),
                               "MinLoss", DoubleValue(0.0));

    wifiPhy.SetChannel(wifiChannel.Create());

    // 設定 Ad Hoc MAC (很重要，不是 AP/STA 模式)
    WifiMacHelper wifiMac;
    wifiMac.SetType("ns3::AdhocWifiMac"); // 設置為 Ad Hoc 模式
    NetDeviceContainer deviceNetDevices = wifi.Install(wifiPhy, wifiMac, devices);

    // --- 移動性配置 ---
    MobilityHelper mobility;
    // 使用 ListPositionAllocator 來精確設定初始位置 (前中後)
    Ptr<ListPositionAllocator> positionAlloc = CreateObject<ListPositionAllocator>();
    positionAlloc->Add(Vector(0.0, 50.0, 0.0));  // 前車 (Node 0)
    positionAlloc->Add(Vector(50.0, 50.0, 2.0)); // 中車 (Node 1)
    positionAlloc->Add(Vector(100.0, 50.0, 4.0)); // 後車 (Node 2)
    mobility.SetPositionAllocator(positionAlloc);
    // 讓它們保持靜止
    mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
    mobility.Install(devices);

    // --- 網路協定棧和 IP 位址 ---
    InternetStackHelper internet;
    // 在 Ad Hoc 模式下，AODV 是常用的路由協定
    AodvHelper aodv;
    internet.SetRoutingHelper(aodv); // 將 AODV 設定為路由協定
    internet.Install(devices);

    Ipv4AddressHelper ipv4;
    NS_LOG_INFO("Assign IP Addresses.");
    ipv4.SetBase("10.1.1.0", "255.255.255.0"); // 所有節點在同一個 Ad Hoc 子網路
    Ipv4InterfaceContainer deviceInterfaces = ipv4.Assign(deviceNetDevices); // [3]


    // 車牌號碼和 MAC 位址 (從網路設備獲取)
    std::string plates[] = {"CAR-001", "CAR-002", "CAR-003"};
    // --- (可選) NetAnim 動畫 ---
    AnimationInterface anim("vanet-animation.xml");
    // 設定節點描述 (車牌)
    for(uint32_t i=0; i<numNodes; ++i) {
        anim.UpdateNodeDescription(devices.Get(i), plates[i]);
        anim.UpdateNodeColor(devices.Get(i), 0, 0, 255); // 初始為藍色
    }
    anim.EnablePacketMetadata(true);
    // anim.SetMobilityPollInterval(Seconds(0.1)); // 如果有移動，設定輪詢間隔

    uint16_t broadcastPort = 8080; // 應用程式監聽和發送的埠
    Address sinkAddress = InetSocketAddress(Ipv4Address::GetBroadcast(), broadcastPort); // 目標是廣播

    Mac48Address macs[numNodes];
    for(uint32_t i=0; i<numNodes; ++i) {
        Ptr<NetDevice> nd = devices.Get(i)->GetDevice(0); // 假設只有一個網路設備 (Wi-Fi)
        Ptr<WifiNetDevice> wifiNd = DynamicCast<WifiNetDevice>(nd);
        macs[i] = wifiNd->GetMac()->GetAddress();
        NS_LOG_INFO("Node " << i << " MAC: " << macs[i] << " Plate: " << plates[i]);
    }


    ApplicationContainer apps;
    // Device 0 (前車): 發送 "我是三寶"
    Ptr<VehicleApp> app0 = CreateObject<VehicleApp>();
    app0->Setup(sinkAddress, broadcastPort, 100, Seconds(1.0), plates[0], macs[0], true, &anim, true);
    devices.Get(0)->AddApplication(app0);
    apps.Add(app0);
    // app0->SetStartTime(Seconds(1.0));
    

    // Device 1 (中車): 發送 "我是三寶"
    Ptr<VehicleApp> app1 = CreateObject<VehicleApp>();
    app1->Setup(sinkAddress, broadcastPort, 100, Seconds(1.0), plates[1], macs[1], true, &anim, true);
    devices.Get(1)->AddApplication(app1);
    apps.Add(app1);
    // app1->SetStartTime(Seconds(1.00001));  // 10 微秒不會碰撞

    // Device 2 (後車): 只發送基本訊息
    Ptr<VehicleApp> app2 = CreateObject<VehicleApp>();
    app2->Setup(sinkAddress, broadcastPort, 80, Seconds(1.0), plates[2], macs[2], false, &anim, true);
    devices.Get(2)->AddApplication(app2);
    apps.Add(app2);
    // app2->SetStartTime(Seconds(1));

    // 設定應用程式啟動和停止時間 (所有應用程式同時啟動，每秒發送)
    apps.Start(Seconds(1.0)); // 稍微延遲啟動
    apps.Stop(Seconds(simTime));

    // --- (可選) PCAP 追蹤 ---
    wifiPhy.EnablePcapAll("vanet-broadcast");

    

    // --- 運行模擬 ---
    Simulator::Stop(Seconds(simTime + 1.0)); // 給最後的事件一點時間
    NS_LOG_INFO("Starting simulation for " << simTime << " seconds...");
    Simulator::Run();
    NS_LOG_INFO("Simulation finished.");
    Simulator::Destroy();

    return 0;
}
