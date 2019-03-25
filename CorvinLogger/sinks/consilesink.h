#ifndef CONSILESINK_H
#define CONSILESINK_H

#include "interfaces/isink.h"
#include "interfaces/iloggable.h"

class ConsoleSink : public ISink
{
public:
    ConsoleSink();
    ~ConsoleSink() override;

    void write(std::shared_ptr<ILoggable> logObject) override;

};

#endif // CONSILESINK_H
