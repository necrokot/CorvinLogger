#include "corvinlogger.h"

#include <QDebug>
#include <QDateTime>
CorvinLogger::CorvinLogger()
{
    //qDebug() << "Alive!";
}

CorvinLogger &CorvinLogger::getInstance()
{
    static auto instance = CorvinLogger();
    return instance;
}

void CorvinLogger::logInfo(QString msg)
{
    qDebug() << msg;
}

void CorvinLogger::logDebug(QString msg)
{
    qDebug() << "123";
}

void CorvinLogger::logFatal(QString msg)
{

}

void CorvinLogger::logObject(std::shared_ptr<ILoggable> object)
{
    qDebug() << object->getLog();
}
