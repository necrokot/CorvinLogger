#ifndef CORVINLOGGER_H
#define CORVINLOGGER_H

#include "corvinlogger_global.h"

#include <memory>
#include <QMap>

#include "interfaces/iloggable.h"
#include "interfaces/isink.h"

#include "loglevels.h"

class CORVINLOGGERSHARED_EXPORT CorvinLogger
{
public:
    static CorvinLogger &getInstance();

    void addSink(LogLevel level, const std::shared_ptr<ISink> &sink);
    void addSink(QList<LogLevel> levels, const std::shared_ptr<ISink> &sink);

    // static void setSinkForLogLevel(LogLevel level, std::shared_ptr<ISink> sink);
    void setGlobalSink(std::shared_ptr<ISink> sink);

    void logMsg(LogLevel level, const QString &msg, const QString &file, int line);
    void logMsg(LogLevel level, const std::shared_ptr<ILoggable> &object, const QString &file, int line);

//    void logDebug(const QString &msg);
//    void logInfo(const QString &msg, QString file, int line);
//    void logWarning(const QString &msg);
//    void logCritical(const QString &msg);
//    void logFatal(const QString &msg);

private:
    explicit CorvinLogger();

    QMap<LogLevel, QList<std::shared_ptr<ISink>>> sinks;
};

#endif // CORVINLOGGER_H
