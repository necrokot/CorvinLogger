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
    static CorvinLogger& getInstance();

    void enableLogLevel(LogLevel level);
    void disableLogLevel(LogLevel level);

    void enableLogLevel(QList<LogLevel> levels);
    void disableLogLevel(QList<LogLevel> levels);

    //static void setSinkForLogLevel(LogLevel level, std::shared_ptr<ISink> sink);
    void setGlobalSink(std::shared_ptr<ISink> sink);


    void logObject(std::shared_ptr<ILoggable> object);

    void logInfo(QString msg);
    void logDebug(QString msg);
    void logFatal(QString msg);

private:
    explicit CorvinLogger();


    QMap<LogLevel, bool> m_enabledLogLevels;
};

#endif // CORVINLOGGER_H
