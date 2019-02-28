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

void CorvinLogger::log(QString msg)
{
    qDebug() << QDateTime::currentDateTime() << msg;
}

void CorvinLogger::logInfo(QString msg)
{
}

void CorvinLogger::logDebug(QString msg)
{
    qDebug() << "123";
}

void CorvinLogger::logFatal(QString msg)
{

}
