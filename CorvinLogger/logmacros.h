#ifndef LOGMACROS_H
#define LOGMACROS_H

#include "corvinlogger.h"

#define CL_DEBUG(msg) CorvinLogger::getInstance().logMsg(LogLevel::DEBUG, msg, __FILE__, __LINE__);
#define CL_INFO(msg) CorvinLogger::getInstance().logMsg(LogLevel::INFO, msg, __FILE__, __LINE__);
#define CL_WARNING(msg) CorvinLogger::getInstance().logMsg(LogLevel::WARNING, msg, __FILE__, __LINE__);
#define CL_CRITICAL(msg) CorvinLogger::getInstance().logMsg(LogLevel::CRITICAL, msg, __FILE__, __LINE__);
#define CL_FATAL(msg) CorvinLogger::getInstance().logMsg(LogLevel::FATAL, msg, __FILE__, __LINE__);

#endif // LOGMACROS_H
