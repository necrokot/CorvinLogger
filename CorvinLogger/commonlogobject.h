#ifndef COMMONLOGOBJECT_H
#define COMMONLOGOBJECT_H

#include "interfaces/iloggable.h"
#include "loglevels.h"

#include <QDateTime>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

class CommonLogObject : public ILoggable
{
public:
    CommonLogObject(QString message, LogLevel logLevel, QDateTime timestamp);
    CommonLogObject(QString message, LogLevel logLevel);

    QString getLog() override;

protected:
    QString m_message;
    LogLevel m_logLevel;

    QString m_timestamp; //Пока предполагается, что m_timestamp имеет формат, поддерживаемый QDateTime. Возможно лучше хранить QDateTime, но тогда нужно кастомизировать формат преобразования даты в строку.
};

#endif // COMMONLOGOBJECT_H
