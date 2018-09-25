 
#ifndef _COMMON_LOGGER_H
#define _COMMON_LOGGER_H

#include <string>

namespace lpp
{
    class Logger
    {
    public:
        enum LogLevels
        {
            LogLevelNothing,
            LogLevelCritical,
            LogLevelError,
            LogLevelWarning,
            LogLevelInfo,
            LogLevelDebug,
            NumLogLevels,
            LogLevelMin = LogLevelNothing + 1,
            LogLevelMax = NumLogLevels - 1,
            LogLevelDefault = LogLevelInfo
        };

        typedef LogLevels LogLevel;

        Logger(const std::string &strAppName)
        {

        }

        ~Logger()
        {

        }

        static const char* logLevelEnvironmentVariable()
        {
            return "LPP_LOG_LEVEL";
        }

        LogLevel logLevel() const
        {
            return m_logLevel;
        }


    private:        
        LogLevel m_logLevel;
    };
}


#endif // _COMMON_LOGGER_H
