#ifndef LOGLEVELS_H
#define LOGLEVELS_H

#include <QString>

enum class LogLevel
{
    INFO,
    DEBUG,
    FATAL
};

QString logLevelToString(LogLevel level);
#endif // LOGLEVELS_H
