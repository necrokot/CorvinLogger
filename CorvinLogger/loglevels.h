#ifndef LOGLEVELS_H
#define LOGLEVELS_H

#include <QString>

enum class LogLevel
{
    DEBUG,
    INFO,
    WARNING,
    CRITICAL,
    FATAL
};

QString logLevelToString(LogLevel level);
#endif // LOGLEVELS_H
