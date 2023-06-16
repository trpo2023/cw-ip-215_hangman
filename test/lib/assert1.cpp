#include "test.h"

#ifdef NDEBUG

#define assert1(ignore) ((void)0)

#else

void __assert1_failure(const char* expr, const char* file, int line, const char* func, int error_code, bool &flag_test) {
    fprintf(stderr, "TEST %d NOT OK \n assertion failed: %s, file %s, line %d, function %s\n",
        error_code, expr, file, line, func);
    flag_test = 1;
}

#define assert1(expr, error_code) ((void)((expr) || (__assert_failure(#expr, FILE, LINE, func, error_code, flag_test), 0)))

#endif