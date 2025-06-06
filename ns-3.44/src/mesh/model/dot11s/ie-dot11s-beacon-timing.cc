/*
 * Copyright (c) 2008,2009 IITP RAS
 *
 * SPDX-License-Identifier: GPL-2.0-only
 *
 * Author: Kirill Andreev <andreev@iitp.ru>
 */

#include "ie-dot11s-beacon-timing.h"

#include "ns3/packet.h"

namespace ns3
{
namespace dot11s
{
/*******************************************
 * IeBeaconTimingUnit
 *******************************************/
IeBeaconTimingUnit::IeBeaconTimingUnit()
    : m_aid(0),
      m_lastBeacon(0),
      m_beaconInterval(0)
{
}

void
IeBeaconTimingUnit::SetAid(uint8_t aid)
{
    m_aid = aid;
}

void
IeBeaconTimingUnit::SetLastBeacon(uint16_t lastBeacon)
{
    m_lastBeacon = lastBeacon;
}

void
IeBeaconTimingUnit::SetBeaconInterval(uint16_t beaconInterval)
{
    m_beaconInterval = beaconInterval;
}

uint8_t
IeBeaconTimingUnit::GetAid() const
{
    return m_aid;
}

uint16_t
IeBeaconTimingUnit::GetLastBeacon() const
{
    return m_lastBeacon;
}

uint16_t
IeBeaconTimingUnit::GetBeaconInterval() const
{
    return m_beaconInterval;
}

/*******************************************
 * IeBeaconTiming
 *******************************************/
WifiInformationElementId
IeBeaconTiming::ElementId() const
{
    return IE_BEACON_TIMING;
}

IeBeaconTiming::IeBeaconTiming()
    : m_numOfUnits(0)
{
}

IeBeaconTiming::NeighboursTimingUnitsList
IeBeaconTiming::GetNeighboursTimingElementsList()
{
    return m_neighbours;
}

void
IeBeaconTiming::AddNeighboursTimingElementUnit(uint16_t aid, Time last_beacon, Time beacon_interval)
{
    if (m_numOfUnits == 50)
    {
        return;
    }
    // First we lookup if this element already exists
    for (auto i = m_neighbours.begin(); i != m_neighbours.end(); i++)
    {
        if (((*i)->GetAid() == AidToU8(aid)) &&
            ((*i)->GetLastBeacon() == TimestampToU16(last_beacon)) &&
            ((*i)->GetBeaconInterval() == BeaconIntervalToU16(beacon_interval)))
        {
            return;
        }
    }
    Ptr<IeBeaconTimingUnit> new_element = Create<IeBeaconTimingUnit>();
    new_element->SetAid(AidToU8(aid));
    new_element->SetLastBeacon(TimestampToU16(last_beacon));
    new_element->SetBeaconInterval(BeaconIntervalToU16(beacon_interval));
    m_neighbours.push_back(new_element);
    m_numOfUnits++;
}

void
IeBeaconTiming::DelNeighboursTimingElementUnit(uint16_t aid, Time last_beacon, Time beacon_interval)
{
    for (auto i = m_neighbours.begin(); i != m_neighbours.end(); i++)
    {
        if (((*i)->GetAid() == AidToU8(aid)) &&
            ((*i)->GetLastBeacon() == TimestampToU16(last_beacon)) &&
            ((*i)->GetBeaconInterval() == BeaconIntervalToU16(beacon_interval)))
        {
            m_neighbours.erase(i);
            m_numOfUnits--;
            break;
        }
    }
}

void
IeBeaconTiming::ClearTimingElement()
{
    for (auto j = m_neighbours.begin(); j != m_neighbours.end(); j++)
    {
        (*j) = nullptr;
    }
    m_neighbours.clear();
}

uint16_t
IeBeaconTiming::GetInformationFieldSize() const
{
    return (5 * m_numOfUnits);
}

void
IeBeaconTiming::Print(std::ostream& os) const
{
    os << "BeaconTiming=(Number of units=" << (uint16_t)m_numOfUnits;
    for (auto j = m_neighbours.begin(); j != m_neighbours.end(); j++)
    {
        os << "(AID=" << (uint16_t)(*j)->GetAid() << ", Last beacon at=" << (*j)->GetLastBeacon()
           << ", with beacon interval=" << (*j)->GetBeaconInterval() << ")";
    }
    os << ")";
}

void
IeBeaconTiming::SerializeInformationField(Buffer::Iterator i) const
{
    for (auto j = m_neighbours.begin(); j != m_neighbours.end(); j++)
    {
        i.WriteU8((*j)->GetAid());
        i.WriteHtolsbU16((*j)->GetLastBeacon());
        i.WriteHtolsbU16((*j)->GetBeaconInterval());
    }
}

uint16_t
IeBeaconTiming::DeserializeInformationField(Buffer::Iterator start, uint16_t length)
{
    Buffer::Iterator i = start;
    m_numOfUnits = length / 5;
    for (int j = 0; j < m_numOfUnits; j++)
    {
        Ptr<IeBeaconTimingUnit> new_element = Create<IeBeaconTimingUnit>();
        new_element->SetAid(i.ReadU8());
        new_element->SetLastBeacon(i.ReadLsbtohU16());
        new_element->SetBeaconInterval(i.ReadLsbtohU16());
        m_neighbours.push_back(new_element);
    }
    return i.GetDistanceFrom(start);
}

uint16_t
IeBeaconTiming::TimestampToU16(Time t)
{
    return ((uint16_t)((t.GetMicroSeconds() >> 8) & 0xffff));
}

uint16_t
IeBeaconTiming::BeaconIntervalToU16(Time t)
{
    return ((uint16_t)(t.GetMicroSeconds() >> 10) & 0xffff);
}

uint8_t
IeBeaconTiming::AidToU8(uint16_t x)
{
    return (uint8_t)(x & 0xff);
}

bool
operator==(const IeBeaconTimingUnit& a, const IeBeaconTimingUnit& b)
{
    return ((a.GetAid() == b.GetAid()) && (a.GetLastBeacon() == b.GetLastBeacon()) &&
            (a.GetBeaconInterval() == b.GetBeaconInterval()));
}

bool
IeBeaconTiming::operator==(const WifiInformationElement& a) const
{
    try
    {
        const auto& aa = dynamic_cast<const IeBeaconTiming&>(a);

        if (m_numOfUnits != aa.m_numOfUnits)
        {
            return false;
        }
        for (unsigned int i = 0; i < m_neighbours.size(); i++)
        {
            if (!(*PeekPointer(m_neighbours[i]) == *PeekPointer(aa.m_neighbours[i])))
            {
                return false;
            }
        }
        return true;
    }
    catch (std::bad_cast&)
    {
        return false;
    }
}

std::ostream&
operator<<(std::ostream& os, const IeBeaconTiming& a)
{
    a.Print(os);
    return os;
}
} // namespace dot11s
} // namespace ns3
