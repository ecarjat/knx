#include "knx_ip_tunnel_connection.h"

KnxIpTunnelConnection::KnxIpTunnelConnection()
{

}

void KnxIpTunnelConnection::Reset()
{
    print("Close Tunnel-Connection[");
    print("?");
    print("], Channel: 0x");
    println(ChannelId, 16);

    ChannelId = 0;
    IpAddress = 0;
    PortData = 0;
    PortCtrl = 0;
    lastHeartbeat = 0;
    SequenceCounter_S = 0;
    SequenceCounter_R = 255;
    IndividualAddress = 0;
    IsConfig = false;
}
