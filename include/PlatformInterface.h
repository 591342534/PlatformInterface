

#ifndef PLATFORM_INTERFACE_H
#define PLATFORM_INTERFACE_H



class PlatformCoreFunctions;
class PlatformFilesystemFunctions;
class PlatformInputDeviceFunctions;
class PlatformNetworkFunctions;
class PlatformServiceFunctions;
class PlatformUserFunctions;

class PlatformPluginInterface
{
public:
    virtual PlatformCoreFunctions& coreFunctions() = 0;
    virtual PlatformFilesystemFunctions& filesystemFunctions() = 0;
    virtual PlatformInputDeviceFunctions& inputDeviceFunctions() = 0;
    virtual PlatformNetworkFunctions& networkFunctions() = 0;
    virtual PlatformServiceFunctions& serviceFunctions() = 0;
    virtual PlatformUserFunctions& userFunctions() = 0;

};


#endif // PLATFORM_INTERFACE_H
