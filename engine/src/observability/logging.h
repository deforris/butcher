#ifndef BUTCHER_LOGGING_H
#define BUTCHER_LOGGING_H

#include "general_definitions.h"

//Default for BUTCHER_BUILD_DEV 
#define LOG_WARN_ENABLED = 1
#define LOG_DEBUG_ENABLED = 1
#define LOG_INFO_ENABLED = 1
#define LOG_TRACE_ENABLED = 1

#if BUTCHER_BUILD_PROD == 1
  #define LOG_WARN_ENABLED = 0
  #define LOG_DEBUG_ENABLED = 0
  #define LOG_INFO_ENABLED = 1
  #define LOG_TRACE_ENABLED = 0
#elif BUTCHER_BUILD_TEST == 1
  #define LOG_WARN_ENABLED = 1
  #define LOG_DEBUG_ENABLED = 1
  #define LOG_INFO_ENABLED = 1
  #define LOG_TRACE_ENABLED = 0
#endif

typedef enum log_level{
    LOG_LEVEL_FATAL,
    LOG_LEVEL_ERROR, 
    LOG_LEVEL_WARN,
    LOG_LEVEL_DEBUG ,
    LOG_LEVEL_INFO,
    LOG_LEVEL_TRACE
} LogLevel;

bool initalize_logging();
bool reload_logging();
bool shutdown_logging();

#endif /* BUTCHER_LOGGING_H */


