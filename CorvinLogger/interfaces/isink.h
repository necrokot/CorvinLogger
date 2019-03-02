#ifndef ISINK_H
#define ISINK_H

#include <memory>
#include "iloggable.h"

class ISink {
public:
    ISink() = default;
    virtual ~ISink();

    virtual void write(std::shared_ptr<ILoggable>) = 0;
};
#endif // ISINK_H
