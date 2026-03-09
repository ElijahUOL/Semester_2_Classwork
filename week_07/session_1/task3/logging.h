/* Logging macros for Task 3 */

#ifndef _LOGGING_H_
#define _LOGGING_H_

#ifdef VERBOSE
  #define LOG_MSG(msg) fprintf(stderr, "%s", msg)
  #define LOG_FMT(fmt, ...) fprintf(stderr, fmt, __VA_ARGS__)
#else
  #define LOG_MSG(msg)
  #define LOG_FMT(fmt, ...)
#endif

#endif  // _LOGGING_H_
