#include "test.h"

// test_check_byk_v_slove
void test_check_byk_v_slove() {
    int key = 1;

    char Bykva = 'а';
    string slovo = "паша";
    int len = slovo.length();
    bool flag = 0;
    check_byk_v_slove(Bykva, slovo, len, flag);
    assert1(flag == 1, key);

    flag = 0;
    Bykva = '-';
    check_byk_v_slove(Bykva, slovo, len, flag);
    assert1(flag == 0, key);

    flag = 0;
    Bykva = '3';
    check_byk_v_slove(Bykva, slovo, len, flag);
    assert1(flag == 0, key);

    flag = 0;
    Bykva = 'г';
    check_byk_v_slove(Bykva, slovo, 0, flag);
    assert1(flag == 0, key);

    cout << "check_byk_v_slove() - OK" << endl;
}