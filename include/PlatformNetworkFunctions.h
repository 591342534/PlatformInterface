

#ifndef PLATFORM_NETWORK_FUNCTIONS_H
#define PLATFORM_NETWORK_FUNCTIONS_H

#include "PlatformInterface.h"
#include <string>


class PlatformNetworkFunctions
{
public:
    enum {
        PingTimeout = 1000,
        PingProcessTimeout = PingTimeout*2
    };

    virtual bool ping(const std::wstring& hostAddress) = 0;

    virtual bool configureFirewallException(const std::wstring& applicationPath, const std::wstring& description, bool enabled) = 0;

    virtual bool configureSocketKeepalive(int socket, bool enabled, int idleTime, int interval, int probes) = 0;

};

#endif // PLATFORM_NETWORK_FUNCTIONS_H
