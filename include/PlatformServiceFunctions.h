

#ifndef PLATFORM_SERVICE_FUNCTIONS_H
#define PLATFORM_SERVICE_FUNCTIONS_H

#include "PlatformInterface.h"
#include  <string>
#include <functional>

class PlatformServiceFunctions
{
public:
    typedef enum StartModes {
        StartModeDisabled,
        StartModeManual,
        StartModeAuto,
        StartModeCount
    } StartMode;

    virtual std::wstring veyonServiceName() const = 0;

    virtual bool isRegistered( const std::wstring& name ) = 0;
    virtual bool isRunning( const std::wstring& name ) = 0;
    virtual bool start( const std::wstring& name ) = 0;
    virtual bool stop( const std::wstring& name ) = 0;
    virtual bool install( const std::wstring& name, const std::wstring& filePath,
                          StartMode startMode, const std::wstring& displayName ) = 0;
    virtual bool uninstall( const std::wstring& name ) = 0;
    virtual bool setStartMode( const std::wstring& name, StartMode startMode ) = 0;
    virtual bool runAsService( const std::wstring& name, const std::function<void(void)>& serviceMain ) = 0;
    virtual void manageServerInstances() = 0;

};

#endif // PLATFORM_SERVICE_FUNCTIONS_H
