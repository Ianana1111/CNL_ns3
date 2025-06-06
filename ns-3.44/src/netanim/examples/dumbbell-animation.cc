/*
 * SPDX-License-Identifier: GPL-2.0-only
 *
 * Author: George F. Riley<riley@ece.gatech.edu>
 */

#include "ns3/applications-module.h"
#include "ns3/core-module.h"
#include "ns3/internet-module.h"
#include "ns3/netanim-module.h"
#include "ns3/network-module.h"
#include "ns3/point-to-point-layout-module.h"
#include "ns3/point-to-point-module.h"

#include <iostream>

using namespace ns3;
using namespace std;

int
main(int argc, char* argv[])
{
    Config::SetDefault("ns3::OnOffApplication::PacketSize", UintegerValue(512));
    Config::SetDefault("ns3::OnOffApplication::DataRate", StringValue("500kb/s"));

    uint32_t nLeftLeaf = 5;
    uint32_t nRightLeaf = 5;
    uint32_t nLeaf = 0;                              // If non-zero, number of both left and right
    std::string animFile = "dumbbell-animation.xml"; // Name of file for animation output

    CommandLine cmd(__FILE__);
    cmd.AddValue("nLeftLeaf", "Number of left side leaf nodes", nLeftLeaf);
    cmd.AddValue("nRightLeaf", "Number of right side leaf nodes", nRightLeaf);
    cmd.AddValue("nLeaf", "Number of left and right side leaf nodes", nLeaf);
    cmd.AddValue("animFile", "File Name for Animation Output", animFile);

    cmd.Parse(argc, argv);
    if (nLeaf > 0)
    {
        nLeftLeaf = nLeaf;
        nRightLeaf = nLeaf;
    }

    // Create the point-to-point link helpers
    PointToPointHelper pointToPointRouter;
    pointToPointRouter.SetDeviceAttribute("DataRate", StringValue("10Mbps"));
    pointToPointRouter.SetChannelAttribute("Delay", StringValue("1ms"));
    PointToPointHelper pointToPointLeaf;
    pointToPointLeaf.SetDeviceAttribute("DataRate", StringValue("10Mbps"));
    pointToPointLeaf.SetChannelAttribute("Delay", StringValue("1ms"));

    PointToPointDumbbellHelper d(nLeftLeaf,
                                 pointToPointLeaf,
                                 nRightLeaf,
                                 pointToPointLeaf,
                                 pointToPointRouter);

    // Install Stack
    InternetStackHelper stack;
    d.InstallStack(stack);

    // Assign IP Addresses
    d.AssignIpv4Addresses(Ipv4AddressHelper("10.1.1.0", "255.255.255.0"),
                          Ipv4AddressHelper("10.2.1.0", "255.255.255.0"),
                          Ipv4AddressHelper("10.3.1.0", "255.255.255.0"));

    // Install on/off app on all right side nodes
    OnOffHelper clientHelper("ns3::UdpSocketFactory", Address());
    clientHelper.SetAttribute("OnTime", StringValue("ns3::UniformRandomVariable"));
    clientHelper.SetAttribute("OffTime", StringValue("ns3::UniformRandomVariable"));
    ApplicationContainer clientApps;

    for (uint32_t i = 0; i < ((d.RightCount() < d.LeftCount()) ? d.RightCount() : d.LeftCount());
         ++i)
    {
        // Create an on/off app sending packets to the same leaf right side
        AddressValue remoteAddress(InetSocketAddress(d.GetLeftIpv4Address(i), 1000));
        clientHelper.SetAttribute("Remote", remoteAddress);
        clientApps.Add(clientHelper.Install(d.GetRight(i)));
    }

    clientApps.Start(Seconds(0));
    clientApps.Stop(Seconds(10));

    // Set the bounding box for animation
    d.BoundingBox(1, 1, 100, 100);

    // Create the animation object and configure for specified output
    AnimationInterface anim(animFile);
    anim.EnablePacketMetadata();                                // Optional
    anim.EnableIpv4L3ProtocolCounters(Seconds(0), Seconds(10)); // Optional

    // Set up the actual simulation
    Ipv4GlobalRoutingHelper::PopulateRoutingTables();

    Simulator::Run();
    std::cout << "Animation Trace file created:" << animFile << std::endl;
    Simulator::Destroy();
    return 0;
}
