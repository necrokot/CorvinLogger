#include "corvinlogger.h"

#include <QDebug>

CorvinLogger::CorvinLogger()
{
    qDebug() << "Alive!";
}

CorvinLogger &CorvinLogger::getInstance()
{
    static auto instance = CorvinLogger();
    return instance;
}
