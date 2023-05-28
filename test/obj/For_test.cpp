#include "test.h"

#ifdef NDEBUG

#define assert1(ignore) ((void)0)

#else

void __assert1_failure(const char* expr, const char* file, int line, const char* func, int error_code) {
    fprintf(stderr, "assertion failed: %s, file %s, line %d, function %s\n",
        expr, file, line, func);
    exit(error_code);
}

#define assert1(expr, error_code) ((void)((expr) || (__assert_failure(#expr, __FILE__, __LINE__, __func__, error_code), 0)))

#endif