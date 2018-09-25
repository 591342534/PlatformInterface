#ifndef PLATFORM_INPUT_DEVICE_FUNCTIONS_H
#define PLATFORM_INPUT_DEVICE_FUNCTIONS_H

#include "PlatformInterface.h"

class KeyboardShortcutTrapper;

class PlatformInputDeviceFunctions
{
public:
    virtual void enableInputDevices() = 0;
    virtual void disableInputDevices() = 0;

    virtual KeyboardShortcutTrapper* createKeyboardShortcutTrapper( void* parent ) = 0;

    virtual bool configureSoftwareSAS( bool enabled ) = 0;

};

#endif // PLATFORM_INPUT_DEVICE_FUNCTIONS_H
