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
#include "ns3/uinteger.h"

#include <iostream>
#include <fstream>
#include <sstream> // For string stream

using namespace ns3;

// 日誌組件定義
NS_LOG_COMPONENT_DEFINE("VanetSimulation");

// 這個有問題
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

    void SetSenderNodeId(uint32_t nodeId);
    uint32_t GetSenderNodeId(void) const;

private:
    Time m_timestamp;
    std::string m_vehiclePlate; // 假設車牌最多 15 字元
    Mac48Address m_senderMac;
    bool m_isSanbao;
    char m_vehiclePlateBuffer[16]; // 用於序列化字串
    uint32_t m_senderNodeId;

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
                      MakeBooleanChecker())
        .AddAttribute("SenderNodeId", "The Node ID of the sender",
                      UintegerValue(0xFFFFFFFF), // 使用一個特殊值表示未設定或無效
                      MakeUintegerAccessor(&VehicleMessageTag::m_senderNodeId),
                      MakeUintegerChecker<uint32_t>());
                      

    return tid;
}

TypeId VehicleMessageTag::GetInstanceTypeId(void) const { return GetTypeId(); }
// 序列化和反序列化需要仔細處理字串長度
uint32_t VehicleMessageTag::GetSerializedSize(void) const {
    // Mac48Address::GetSize() = 6
    // return sizeof(m_timestamp) + sizeof(m_vehiclePlateBuffer) + sizeof(m_senderMac) + sizeof(m_isSanbao);
    return sizeof(m_timestamp) + sizeof(m_vehiclePlateBuffer) + 6 + sizeof(uint8_t) + sizeof(uint32_t);
}

// origin
// void VehicleMessageTag::Serialize(TagBuffer i) const {
//     i.WriteU64(m_timestamp.GetNanoSeconds());
//     // 確保字串不超過緩衝區
//     strncpy(const_cast<char*>(m_vehiclePlateBuffer), m_vehiclePlate.c_str(), 15);
//     const_cast<char*>(m_vehiclePlateBuffer)[15] = '\0'; // Null-terminate
//     for(uint32_t j=0; j<16; ++j) i.WriteU8(m_vehiclePlateBuffer[j]);
//     uint8_t macBuffer[6];
//     m_senderMac.CopyTo(macBuffer);
//     for(int k=0; k<6; ++k) i.WriteU8(macBuffer[k]);
//     i.WriteU8(m_isSanbao ? 1 : 0);
// }
// now
void VehicleMessageTag::Serialize(TagBuffer i) const {
    i.WriteU64(m_timestamp.GetNanoSeconds());

    // 序列化車牌 (保持您現有的邏輯，但確保 m_vehiclePlateBuffer 被正確填充)
    // 您現有的邏輯是從 m_vehiclePlate 複製到 m_vehiclePlateBuffer
    // strncpy(const_cast<char*>(m_vehiclePlateBuffer), m_vehiclePlate.c_str(), 15);
    // const_cast<char*>(m_vehiclePlateBuffer)[15] = '\0'; // 確保 null 終止
    // for(uint32_t j=0; j<16; ++j) i.WriteU8(m_vehiclePlateBuffer[j]);
    // 更安全的做法是先序列化長度，再序列化內容
    uint8_t plateLen = m_vehiclePlate.length();
    i.WriteU8(plateLen);
    i.Write((const uint8_t*)m_vehiclePlate.c_str(), plateLen);


    uint8_t macBuffer[6];
    m_senderMac.CopyTo(macBuffer);
    i.Write(macBuffer, 6); // 使用 Write 而不是逐字節 WriteU8

    i.WriteU8(m_isSanbao ? 1 : 0);

    // +++ 序列化 SenderNodeId +++
    i.WriteU32(m_senderNodeId);
    // +++ 序列化結束 +++
}


// void VehicleMessageTag::Deserialize(TagBuffer i) {
//     m_timestamp = NanoSeconds(i.ReadU64());
//     for(uint32_t j=0; j<16; ++j) m_vehiclePlateBuffer[j] = i.ReadU8();
//     m_vehiclePlate = std::string(m_vehiclePlateBuffer);
//     uint8_t macBuffer[6];
//     for(int k=0; k<6; ++k) macBuffer[k] = i.ReadU8();
//     m_senderMac.CopyFrom(macBuffer);
//     m_isSanbao = (i.ReadU8() == 1);
// }
void VehicleMessageTag::Deserialize(TagBuffer i) {
    m_timestamp = NanoSeconds(i.ReadU64());

    // 反序列化車牌 (需要與 Serialize 對應)
    // for(uint32_t j=0; j<16; ++j) m_vehiclePlateBuffer[j] = i.ReadU8();
    // m_vehiclePlate = std::string(m_vehiclePlateBuffer); // 確保 null 終止和長度
    uint8_t plateLen = i.ReadU8();
    char plateBuffer[256]; // 假設最大長度
    if (plateLen < 256) {
        i.Read((uint8_t*)plateBuffer, plateLen);
        plateBuffer[plateLen] = '\0';
        m_vehiclePlate = plateBuffer;
    } else {
        // 處理錯誤或截斷
        NS_LOG_ERROR("Deserialized plate length too long: " << (int)plateLen);
        // 可以讀取並丟棄多餘數據以保持 TagBuffer 同步
        for(uint32_t j=0; j<plateLen; ++j) i.ReadU8();
        m_vehiclePlate = "ERROR_PLATE_TOO_LONG";
    }


    uint8_t macBuffer[6];
    i.Read(macBuffer, 6); // 使用 Read 而不是逐字節 ReadU8
    m_senderMac.CopyFrom(macBuffer);

    m_isSanbao = (i.ReadU8() == 1);

    // +++ 反序列化 SenderNodeId +++
    m_senderNodeId = i.ReadU32();
    // +++ 反序列化結束 +++
}


void VehicleMessageTag::Print(std::ostream& os) const {
    os << "Timestamp=" << m_timestamp
       << ", Plate=" << m_vehiclePlate
       << ", MAC=" << m_senderMac
       << ", IsSanbao=" << (m_isSanbao ? "Yes" : "No")
       << ", SenderNodeId=" << m_senderNodeId;
}

void VehicleMessageTag::SetSenderNodeId(uint32_t nodeId) { m_senderNodeId = nodeId; }

uint32_t VehicleMessageTag::GetSenderNodeId(void) const { return m_senderNodeId; }
// +++ 新增結束 +++





// --- 2. 自訂應用程式 ---
class VehicleApp : public Application {
public:
    VehicleApp();
    virtual ~VehicleApp();
    static TypeId GetTypeId(void);

    void Setup(Address sinkAddress, uint16_t sinkPort, uint32_t packetSize, Time dataInterval,
               std::string vehiclePlate, Mac48Address deviceMac, bool sendsSanbao, AnimationInterface* anim, bool shouldSend, Ipv4Address realServerIp, uint16_t realServerPort);

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

    // 用來和真實世界溝通
    Ptr<Socket> m_realServerSocket;  // 專門用於向真實伺服器發送的 socket
    Ipv4Address m_realServerIp;      // 您電腦的 IP 位址
    uint16_t m_realServerPort;       // 您電腦上 UDP 伺服器的埠號
    
    // 新增方法
    void SendSanbaoAlertToRealServer(const VehicleMessageTag& tag, const Address& senderAddress, const Vector& relativePosition);
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
                       std::string vehiclePlate, Mac48Address deviceMac, bool sendsSanbao, AnimationInterface* anim, bool shouldSend, Ipv4Address realServerIp, uint16_t realServerPort) {
    m_peerAddress = sinkAddress;
    m_peerPort = sinkPort;
    m_packetSize = packetSize;
    m_interval = dataInterval;
    m_vehiclePlate = vehiclePlate;
    m_deviceMac = deviceMac;
    m_sendsSanbao = sendsSanbao;
    m_anim = anim; 
    m_shouldSend = shouldSend;
    m_realServerIp = realServerIp;
    m_realServerPort = realServerPort;
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
    if (m_realServerSocket == nullptr) {
        TypeId tid = TypeId::LookupByName("ns3::UdpSocketFactory");
        m_realServerSocket = Socket::CreateSocket(GetNode(), tid);
        // 注意：這個 socket 不需要綁定，只用於發送
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
    tag.SetSenderNodeId(GetNode()->GetId()); 
    packet->AddPacketTag(tag); // 附加自訂 Tag 到封包

    // 發送到廣播位址和指定埠
    m_socket->SendTo(packet, 0, InetSocketAddress(Ipv4Address::GetBroadcast(), m_peerPort));
    m_packetsSent++;
    NS_LOG_INFO("Node " << GetNode()->GetId() << " (" << m_vehiclePlate << ") sent packet " << m_packetsSent
                << " at " << Simulator::Now().GetSeconds() << "s. Sanbao: " << (m_sendsSanbao ? "Yes" : "No")
                << ", MyNodeId: " << GetNode()->GetId());

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


            Ptr<Node> receiverNode = GetNode();
            Ptr<MobilityModel> receiverMobility = receiverNode->GetObject<MobilityModel>();

            if (!receiverMobility) {
                NS_LOG_WARN("Receiver Node " << receiverNode->GetId() << " has no MobilityModel!");
                continue; // 處理下一個封包
            }
            Vector receiverPosition = receiverMobility->GetPosition();
            NS_LOG_INFO("  Receiver (" << m_vehiclePlate << ", Node " << receiverNode->GetId()
                        << ") Position: " << receiverPosition.x << "," << receiverPosition.y << "," << receiverPosition.z);

            // +++ 使用 Tag 中的 SenderNodeId 獲取發送節點 +++
            uint32_t senderNodeIdFromTag = tag.GetSenderNodeId();
            Ptr<Node> senderNode = nullptr;

            if (senderNodeIdFromTag != 0xFFFFFFFF && senderNodeIdFromTag < NodeList::GetNNodes()) { // 0xFFFFFFFF 是無效ID
                senderNode = NodeList::GetNode(senderNodeIdFromTag);
            }
            // +++ 獲取結束 +++

            if (senderNode && senderNode != receiverNode) { // 確保發送者存在且不是自己
                Ptr<MobilityModel> senderMobility = senderNode->GetObject<MobilityModel>();
                if (senderMobility) {
                    Vector senderPosition = senderMobility->GetPosition();
                    NS_LOG_INFO("  Sender   (Plate: " << tag.GetVehiclePlate() << ", Node " << senderNode->GetId()
                                << ") Position: " << senderPosition.x << "," << senderPosition.y << "," << senderPosition.z);

                    // 計算相對位置向量 (從發送者指向接收者)
                    Vector relativePositionVector = senderPosition receiverPosition - senderPosition;
                    // 計算直線距離
                    double distance = receiverMobility->GetDistanceFrom(senderMobility);

                    NS_LOG_INFO("  Relative Pos of Me (" << receiverNode->GetId() << ") to Sender (" << senderNode->GetId() << "): "
                                << "X=" << relativePositionVector.x
                                << ", Y=" << relativePositionVector.y
                                << ", Z=" << relativePositionVector.z
                                << " (Distance: " << distance << "m)");

                    // 檢查是否來自 CAR-001 (假設 CAR-001 是 Node 0)
                    if (senderNode->GetId() == 0) { // 假設 CAR-001 在 main() 中是 devices.Get(0)
                         NS_LOG_INFO("    ----> This message IS from CAR-001 (Node 0). My relative position to it is logged above.");
                    }

                    // 檢查是否為三寶訊息
                    if (tag.IsSanbao()) {
                        NS_LOG_WARN("!!! Node " << GetNode()->GetId() << " (" << m_vehiclePlate
                                    << ") DETECTED 'IAM_SANBAO' from Plate: " << tag.GetVehiclePlate()
                                    << " (MAC: " << tag.GetSenderMac() << ", NodeID: " << tag.GetSenderNodeId() // 可以加入 NodeID
                                    << ") at " << Simulator::Now().GetSeconds()
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
                        SendSanbaoAlertToRealServer(tag, from, relativePositionVector); // 傳送三寶警告到真實伺服器
                    }


                } else {
                    NS_LOG_WARN("  Sender Node " << senderNode->GetId() << " has no MobilityModel!");
                }
            } else if (senderNode == receiverNode) {
                // 處理來自自己的封包（例如廣播時）
            } else {
                 NS_LOG_WARN("  Could not get sender Node object for SenderNodeId: " << senderNodeIdFromTag << " from Tag.");
            }

            
        } else {
            NS_LOG_INFO("Node " << GetNode()->GetId() << " (" << m_vehiclePlate
                        << ") received a packet at " << Simulator::Now().GetSeconds() << "s from "
                        << InetSocketAddress::ConvertFrom(from).GetIpv4()
                        << " (No VehicleMessageTag found)");
        }
    }
}

// 在 VehicleApp 類別中

void VehicleApp::SendSanbaoAlertToRealServer(const VehicleMessageTag& tag, const Address& senderAddress, const Vector& relativePosition) {
    // 創建包含三寶警告資訊的 JSON 訊息 (這部分是共用的)
    std::ostringstream alertMessageJson;
    alertMessageJson << "{"
                     << "\"alert_type\":\"SANBAO_DETECTED\","
                     << "\"simulation_time\":\"" << Simulator::Now().GetSeconds() << "\"," // 使用 simulation_time 避免與真實時間混淆
                     << "\"detector_node_id\":" << GetNode()->GetId() << ","
                     << "\"detector_vehicle_plate\":\"" << m_vehiclePlate << "\","
                     << "\"sanbao_vehicle_plate\":\"" << tag.GetVehiclePlate() << "\","
                     << "\"sanbao_mac_address\":\"" << tag.GetSenderMac() << "\","
                     << "\"sanbao_original_timestamp\":\"" << tag.GetTimestamp().GetSeconds() << "\"," // 原始三寶訊息的時間戳
                     << "\"sanbao_sender_ip\":\"" << InetSocketAddress::ConvertFrom(senderAddress).GetIpv4() << "\","
                     // detection_time 與 simulation_time 相同，可以省略一個或明確標註
                     << "\"relative_position_to_sanbao\":{"
                     << "\"x\":" << relativePosition.x << ","
                     << "\"y\":" << relativePosition.y << ","
                     << "\"z\":" << relativePosition.z
                     << "}"
                     << "}";
    std::string message = alertMessageJson.str();

    // --- 嘗試通過網路發送到真實伺服器 (如果配置了) ---
    if (m_realServerSocket != nullptr && m_realServerPort != 0) {
        // 創建包含訊息的封包
        Ptr<Packet> packet = Create<Packet>((uint8_t*)message.c_str(), message.length());

        // 發送到真實伺服器
        InetSocketAddress serverAddr(m_realServerIp, m_realServerPort);
        NS_LOG_INFO("Attempting to send SANBAO alert via network to server: "
                    << serverAddr.GetIpv4() << ":" << serverAddr.GetPort());

        int result = m_realServerSocket->SendTo(packet, 0, serverAddr);

        if (result >= 0) {
            NS_LOG_WARN("✅ Network SANBAO ALERT sent to real server " << serverAddr.GetIpv4() << ":" << serverAddr.GetPort()
                        << " from Node " << GetNode()->GetId()
                        << " (Sanbao Vehicle: " << tag.GetVehiclePlate() << ")");
        } else {
            NS_LOG_ERROR("❌ Failed to send SANBAO alert via network from Node " << GetNode()->GetId()
                         << ". Error code: " << result << " (Errno: " << m_realServerSocket->GetErrno() << ")");
        }
    } else {
        NS_LOG_INFO("Network send to real server skipped: Socket is null, IP is unspecified, or port is 0.");
        if (m_realServerSocket == nullptr) NS_LOG_DEBUG("m_realServerSocket is null");
        if (m_realServerPort == 0) NS_LOG_DEBUG("m_realServerPort is 0");
    }

    // --- 無論網路發送是否成功/配置，都將警報記錄到檔案中 ---
    std::ofstream alertFile("/Users/liyichen/Desktop/tmp/sanbao_alerts_from_ns3.log", std::ios::app); // 使用追加模式
    if (alertFile.is_open()) {
        // 可以在檔案中記錄更完整的資訊，或者直接記錄 JSON
        alertFile << message << std::endl; // 直接寫入 JSON 字串
        alertFile.close();
        NS_LOG_WARN("📝 SANBAO ALERT logged to file (sanbao_alerts_from_ns3.log) for Sanbao Vehicle: "
                    << tag.GetVehiclePlate() << " by Node " << GetNode()->GetId());
    } else {
        NS_LOG_ERROR("Failed to open sanbao_alerts_from_ns3.log for writing!");
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
    double simTime = 15.0; // seconds
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

    wifiPhy.Set("TxPowerStart", DoubleValue(20.0)); // 增加發射功率
    wifiPhy.Set("TxPowerEnd", DoubleValue(20.0));
    wifiPhy.Set("RxSensitivity", DoubleValue(-95.0)); // 提高接收靈敏度
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
    positionAlloc->Add(Vector(0.0, 0.0, 0.0));  // 前車 (Node 0)
    positionAlloc->Add(Vector(50.0, 0.0, 0.0)); // 中車 (Node 1)
    positionAlloc->Add(Vector(100.0, 0.0, 0.0)); // 後車 (Node 2)
    mobility.SetPositionAllocator(positionAlloc);
    // 等速前進
    mobility.SetMobilityModel("ns3::ConstantVelocityMobilityModel");
    mobility.Install(devices);
    Ptr<ConstantVelocityMobilityModel> mob0 = devices.Get(0)->GetObject<ConstantVelocityMobilityModel>();
    mob0->SetVelocity(Vector(0.0, 5.0, 0.0));  // X=0, Y=5m/s, Z=0

    // Node 1: 中等速度移動 (10 m/s)  
    Ptr<ConstantVelocityMobilityModel> mob1 = devices.Get(1)->GetObject<ConstantVelocityMobilityModel>();
    mob1->SetVelocity(Vector(0.0, 10, 0.0)); // X=0, Y=10m/s, Z=0

    // Node 2: 快速移動 (15 m/s)
    Ptr<ConstantVelocityMobilityModel> mob2 = devices.Get(2)->GetObject<ConstantVelocityMobilityModel>();
    mob2->SetVelocity(Vector(0.0, 7.5, 0.0)); // X=0, Y=15m/s, Z=0

    NS_LOG_INFO("Node velocities set:");
    NS_LOG_INFO("Node 0: " << mob0->GetVelocity());
    NS_LOG_INFO("Node 1: " << mob1->GetVelocity()); 
    NS_LOG_INFO("Node 2: " << mob2->GetVelocity()); 


    // 要傳資料過去的真實伺服器 IP 和埠號（不確定自己這邊的 ip 需不需要改）
    Ipv4Address realServerIp("127.0.0.1");  // 替換為您電腦的實際 IP
    uint16_t realServerPort = 9999;         // 您可以選擇任何可用的埠號

    // --- 網路協定棧和 IP 位址 ---
    InternetStackHelper internet;
    // 在 Ad Hoc 模式下，AODV 是常用的路由協定
    AodvHelper aodv;
    internet.SetRoutingHelper(aodv); // 將 AODV 設定為路由協定
    internet.Install(devices);

    Ipv4AddressHelper ipv4;
    NS_LOG_INFO("Assign IP Addresses.");
    // ipv4.SetBase("10.1.1.0", "255.255.255.0"); // 所有節點在同一個 Ad Hoc 子網路

    // 學校的網路可能需要不同的 IP 位址範圍，這裡假設使用
    // ipv4.SetBase("10.5.6.0", "255.255.255.0", "0.0.0.10"); 

    // 我家的
    ipv4.SetBase("192.168.1.0", "255.255.255.0", "0.0.0.160"); 
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
    anim.SetMobilityPollInterval(Seconds(0.1)); // 如果有移動，設定輪詢間隔

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
    app0->Setup(sinkAddress, broadcastPort, 100, Seconds(1.0), plates[0], macs[0], true, &anim, true, realServerIp, realServerPort);
    devices.Get(0)->AddApplication(app0);
    apps.Add(app0);
    // app0->SetStartTime(Seconds(1.0));
    

    // Device 1 (中車): 發送 "我是三寶"
    Ptr<VehicleApp> app1 = CreateObject<VehicleApp>();
    app1->Setup(sinkAddress, broadcastPort, 100, Seconds(1.0), plates[1], macs[1], true, &anim, true, realServerIp, realServerPort);
    devices.Get(1)->AddApplication(app1);
    apps.Add(app1);
    // app1->SetStartTime(Seconds(1.00001));  // 10 微秒不會碰撞

    // Device 2 (後車): 只發送基本訊息
    Ptr<VehicleApp> app2 = CreateObject<VehicleApp>();
    app2->Setup(sinkAddress, broadcastPort, 80, Seconds(1.0), plates[2], macs[2], false, &anim, true, realServerIp, realServerPort);
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
