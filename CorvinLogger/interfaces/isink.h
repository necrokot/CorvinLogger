#ifndef ISINK_H
#define ISINK_H

#include <memory>

#include "corvinlogger_global.h"
#include "iloggable.h"


class CORVINLOGGERSHARED_EXPORT ISink {
public:
    ISink() = default;
    virtual ~ISink() = default;

    virtual void write(const std::shared_ptr<ILoggable> &) = 0;
    virtual void write(QString) = 0;
};
#endif // ISINK_H
