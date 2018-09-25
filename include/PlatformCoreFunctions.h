
#ifndef PLATFORM_CORE_FUNCTIONS_H
#define PLATFORM_CORE_FUNCTIONS_H

#include "Logger.h"
#include "PlatformInterface.h"
#include <string>
#include <list>

class PlatformCoreFunctions
{
public:
    virtual void initNativeLoggingSystem(const std::wstring& strAppName) = 0;
    virtual void writeToNativeLoggingSystem(const std::wstring& strMessage, lpp::Logger::LogLevel loglevel) = 0;

    virtual void reboot() = 0;
    virtual void powerDown() = 0;

    //virtual void raiseWindow( QWidget* widget ) = 0;

    virtual void disableScreenSaver() = 0;
    virtual void restoreScreenSaverSettings() = 0;

    virtual std::wstring activeDesktopName() = 0;

    virtual bool isRunningAsAdmin() const = 0;
    virtual bool runProgramAsAdmin(const std::wstring& strProgram, const std::list<std::wstring>& lstParameters) = 0;

    virtual bool runProgramAsUser(const std::wstring& strProgram,
                                  const std::list<std::wstring>& lstPrameters,
                                  const std::wstring& strUsername,
                                  const std::wstring& strDesktop) = 0;

    virtual std::wstring genericUrlHandler() const = 0;
};

#endif // PLATFORM_CORE_FUNCTIONS_H
