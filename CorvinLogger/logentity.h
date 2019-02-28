#ifndef LOGENTITY_H
#define LOGENTITY_H

#include "interfaces/iloggable.h"
#include "loglevels.h"

#include <QDateTime>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

class LogEntity : public ILoggable
{
public:
    LogEntity(QString message, LogLevel logLevel, QDateTime timestamp);
    LogEntity(QString message, LogLevel logLevel);

    QString getLog() override;

protected:
    QString m_message;
    LogLevel m_logLevel;

    QString m_timestamp; //Или лучше хранить QDateTime? Надо подумать. Пока предполагается, что m_timestamp имеет формат, поддерживаемый QDateTime
};

#endif // LOGENTITY_H
