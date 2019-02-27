#ifndef CORVINLOGGER_H
#define CORVINLOGGER_H

#include <memory>

#include "corvinlogger_global.h"

class CORVINLOGGERSHARED_EXPORT CorvinLogger
{

public:
    static CorvinLogger& getInstance();

private:
    explicit CorvinLogger();
};

#endif // CORVINLOGGER_H
