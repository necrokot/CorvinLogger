#ifndef ILOGGABLE_H
#define ILOGGABLE_H

#include <QString>

class ILoggable {
public:
    ILoggable() = default;
    virtual ~ILoggable() = default;
    virtual QString getLog() = 0;
};

#endif // ILOGGABLE_H
