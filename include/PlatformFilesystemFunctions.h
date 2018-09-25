

#ifndef PLATFORM_FILESYSTEM_FUNCTIONS_H
#define PLATFORM_FILESYSTEM_FUNCTIONS_H

#include "PlatformInterface.h"
#include <string>

class PlatformFilesystemFunctions
{
public:
    virtual std::wstring personalAppDataPath() const = 0;
    virtual std::wstring globalAppDataPath() const = 0;

    virtual std::wstring fileOwnerGroup( const std::wstring& filePath ) = 0;
    virtual bool setFileOwnerGroup( const std::wstring& filePath, const std::wstring& ownerGroup ) = 0;
    virtual bool setFileOwnerGroupPermissions( const std::wstring& filePath, unsigned long permissions ) = 0;
};

#endif // PLATFORM_FILESYSTEM_FUNCTIONS_H
