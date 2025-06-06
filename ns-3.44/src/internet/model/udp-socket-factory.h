/*
 * Copyright (c) 2007 INRIA
 *
 * SPDX-License-Identifier: GPL-2.0-only
 *
 * Author: Mathieu Lacage <mathieu.lacage@sophia.inria.fr>
 */
#ifndef UDP_SOCKET_FACTORY_H
#define UDP_SOCKET_FACTORY_H

#include "ns3/socket-factory.h"

namespace ns3
{

class Socket;

/**
 * @ingroup socket
 * @ingroup udp
 *
 * @brief API to create UDP socket instances
 *
 * This abstract class defines the API for UDP socket factory.
 * All UDP implementations must provide an implementation of CreateSocket
 * below.
 *
 * @see UdpSocketFactoryImpl
 */
class UdpSocketFactory : public SocketFactory
{
  public:
    /**
     * @brief Get the type ID.
     * @return the object TypeId
     */
    static TypeId GetTypeId();
};

} // namespace ns3

#endif /* UDP_SOCKET_FACTORY_H */
