#ifndef LOGLEVELS_H
#define LOGLEVELS_H

#include <QString>

enum class LogLevel
{
    INFO,
    DEBUG,
    FATAL
};

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
#endif // LOGLEVELS_H
