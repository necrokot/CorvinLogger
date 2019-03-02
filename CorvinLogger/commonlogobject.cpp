#include "commonlogobject.h"


CommonLogObject::CommonLogObject(QString message, LogLevel logLevel, QDateTime timestamp)
    : m_message(message)
    , m_logLevel(logLevel)
    , m_timestamp(timestamp.toString(Qt::DateFormat::ISODate))
{
}

CommonLogObject::CommonLogObject(QString message, LogLevel logLevel)
    : CommonLogObject(message, logLevel, QDateTime::currentDateTime())
{
}

QString CommonLogObject::getLog()
{
    QJsonDocument doc;
    QJsonObject obj;
    obj.insert("Message", QJsonValue(m_message));
    obj.insert("LogLevel", QJsonValue(logLevelToString(m_logLevel)));
    obj.insert("message", QJsonValue(m_message));
    doc.setObject(obj);

    return QString::fromUtf8(doc.toJson(QJsonDocument::JsonFormat::Indented));
}
