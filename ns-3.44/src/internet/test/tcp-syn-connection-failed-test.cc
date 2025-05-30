/*
 * Copyright (c) 2019 Alexander Krotov <krotov@iitp.ru>
 *
 * SPDX-License-Identifier: GPL-2.0-only
 *
 */

#include "ns3/core-module.h"
#include "ns3/internet-module.h"
#include "ns3/network-module.h"
#include "ns3/test.h"

#include <iostream>

using namespace ns3;

/**
 * @ingroup internet-test
 *
 * @brief Test that connection failed callback is called when
 * SYN retransmission number is exceeded.
 */
class TcpSynConnectionFailedTest : public TestCase
{
  public:
    /**
     * Constructor.
     * @param desc Test description.
     * @param useEcn Whether to enable ECN.
     */
    TcpSynConnectionFailedTest(std::string desc, bool useEcn);

    /**
     * @brief Handle a connection failure.
     * @param socket The receiving socket.
     */
    void HandleConnectionFailed(Ptr<Socket> socket);
    void DoRun() override;

  private:
    bool m_connectionFailed{false}; //!< Connection failure indicator
    bool m_useEcn{false};           //!< Use ECN (true or false)
};

TcpSynConnectionFailedTest::TcpSynConnectionFailedTest(std::string desc, bool useEcn)
    : TestCase(desc),
      m_useEcn(useEcn)
{
}

void
TcpSynConnectionFailedTest::HandleConnectionFailed(Ptr<Socket> socket)
{
    m_connectionFailed = true;
}

void
TcpSynConnectionFailedTest::DoRun()
{
    Ptr<Node> node = CreateObject<Node>();

    InternetStackHelper internet;
    internet.Install(node);

    TypeId tid = TcpSocketFactory::GetTypeId();

    Ptr<Socket> socket = Socket::CreateSocket(node, tid);
    if (m_useEcn)
    {
        Ptr<TcpSocketBase> tcpSocket = DynamicCast<TcpSocketBase>(socket);
        tcpSocket->SetUseEcn(TcpSocketState::On);
    }
    socket->Bind();
    socket->SetConnectCallback(
        MakeNullCallback<void, Ptr<Socket>>(),
        MakeCallback(&TcpSynConnectionFailedTest::HandleConnectionFailed, this));
    socket->Connect(InetSocketAddress(Ipv4Address::GetLoopback(), 9));

    Simulator::Run();
    Simulator::Destroy();

    NS_TEST_ASSERT_MSG_EQ(m_connectionFailed, true, "Connection failed callback was not called");
}

/**
 * @ingroup internet-test
 *
 * @brief TestSuite
 */
class TcpSynConnectionFailedTestSuite : public TestSuite
{
  public:
    TcpSynConnectionFailedTestSuite()
        : TestSuite("tcp-syn-connection-failed-test", Type::UNIT)
    {
        AddTestCase(new TcpSynConnectionFailedTest("TCP SYN connection failed test no ECN", false),
                    TestCase::Duration::QUICK);
        AddTestCase(new TcpSynConnectionFailedTest("TCP SYN connection failed test with ECN", true),
                    TestCase::Duration::QUICK);
    }
};

static TcpSynConnectionFailedTestSuite
    g_TcpSynConnectionFailedTestSuite; //!< Static variable for test initialization
