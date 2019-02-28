#ifndef CORVINLOGGER_H
#define CORVINLOGGER_H

#include <memory>
#include <QVector>

#include "corvinlogger_global.h"
#include "interfaces/iloggable.h"
#include "loglevels.h"

class CORVINLOGGERSHARED_EXPORT CorvinLogger
{

public:
    static CorvinLogger& getInstance();
    static void log(QString msg);

    static void logInfo(QString msg);
    static void logDebug(QString msg);
    static void logFatal(QString msg);
    static void logObject(std::shared_ptr<ILoggable> object);



private:
    explicit CorvinLogger();

    QVector<LogLevel> m_enabledLogLevels;
};

#endif // CORVINLOGGER_H
