

#ifndef PLATFORM_SERVICE_CORE_H
#define PLATFORM_SERVICE_CORE_H

#include <map>
#include "Variant.hpp"

class PlatformServiceCore
{
public:
    typedef int SessionId;

    enum {
        SessionIdInvalid = -1,
        SessionIdMax = 99
    };

    SessionId openSession(const Variant<int>& sessionData);
    void closeSession(SessionId sessionId);

    Variant<int> sessionDataFromId(SessionId sessionId) const;
    SessionId sessionIdFromData(const Variant<int>& data) const;

private:
    std::map<SessionId, Variant<int>> m_sessions;
};

#endif // PLATFORM_SERVICE_CORE_H
