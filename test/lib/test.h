#include "../../lib/header.h"

#ifndef _ASSERT1_H
#define _ASSERT1_H

#ifdef __cplusplus
extern "C" {
#endif

    void __assert1_failure(const char* expr, const char* file, int line, const char* func, int error_code, bool &flag_test);

#ifdef NDEBUG
#define assert1(ignore) ((void)0)
#else
#define assert1(expr, error_code) ((void)((expr) || (__assert1_failure(#expr, __FILE__, __LINE__, __func__, error_code, flag_test), 0)))
#endif

#ifdef __cplusplus
}
#endif
    
#endif /* _ASSERT1_H */

void test_check_byk_in_word(bool& flag_test, int& count);
void test_create_textur(bool& flag_test, int& count);
void test_load_textur(bool& flag_test, int& count);
void test_check_byk_cord(bool& flag_test, int& count);
void test_draw_cross(bool& flag_test, int& count);
void test_draw_gallows(bool& flag_test, int& count);