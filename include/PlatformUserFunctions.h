
#ifndef PLATFORM_USER_FUNCTIONS_H
#define PLATFORM_USER_FUNCTIONS_H

#include "PlatformInterface.h"
#include <string>
#include <list>

class PlatformUserFunctions
{
public:
    virtual std::wstring fullName( const std::wstring& username ) = 0;

    virtual std::list<std::wstring> userGroups( bool queryDomainGroups ) = 0;
    virtual std::list<std::wstring> groupsOfUser( const std::wstring& username, bool queryDomainGroups ) = 0;

    virtual std::wstring currentUser() = 0;
    virtual std::list<std::wstring> loggedOnUsers() = 0;

    virtual void logon( const std::wstring& username, const std::wstring& password ) = 0;
    virtual void logout() = 0;

    virtual bool authenticate( const std::wstring& username, const std::wstring& password ) = 0;

};

#endif // PLATFORM_USER_FUNCTIONS_H
