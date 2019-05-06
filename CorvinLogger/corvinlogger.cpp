#include "corvinlogger.h"
#include "corvinlogger.h"

#include <QDebug>
#include <QDateTime>

CorvinLogger::CorvinLogger()
{
    // qDebug() << "Alive!";
}

CorvinLogger &CorvinLogger::getInstance()
{
    static auto instance = CorvinLogger();
    return instance;
}

/* Добавить к сообщению:
 *   Уровень логгирования
 *   Timestamp
 *   Строка
 *   Файл
 */
void CorvinLogger::logMsg(LogLevel level, const QString &msg, const QString &file, int line)
{
    qDebug() << msg;
    for (const auto &sink : qAsConst(sinks[level])) {
        sink->write(msg);
    }
}

void CorvinLogger::logMsg(LogLevel level, const std::shared_ptr<ILoggable> &object, const QString &file, int line)
{
    logMsg(level, object->getLog(), file, line);
}

void CorvinLogger::addSink(LogLevel level, const std::shared_ptr<ISink> &sink)
{
    sinks[level].append(sink);
}

void CorvinLogger::addSink(QList<LogLevel> levels, const std::shared_ptr<ISink> &sink)
{
    for (auto level: levels) {
        addSink(level, sink);
    }
}
