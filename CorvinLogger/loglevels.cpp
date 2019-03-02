#include "loglevels.h"

QString logLevelToString(LogLevel level)
{
    switch (level) {
    case LogLevel::INFO:
        return QStringLiteral("INFO");
    case LogLevel::DEBUG:
        return QStringLiteral("DEBUG");
    case LogLevel::FATAL:
        return QStringLiteral("FATAL");
    }
}
