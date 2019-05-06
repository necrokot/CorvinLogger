#include "loglevels.h"

QString logLevelToString(LogLevel level)
{
    switch (level) {
        case LogLevel::DEBUG:
            return QStringLiteral("DEBUG");

        case LogLevel::INFO:
            return QStringLiteral("INFO");

        case LogLevel::WARNING:
            return QStringLiteral("WARNING");

        case LogLevel::CRITICAL:
            return QStringLiteral("CRITICAL");

        case LogLevel::FATAL:
            return QStringLiteral("FATAL");
    }
}
