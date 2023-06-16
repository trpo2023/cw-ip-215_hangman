#include "test.h"

int main() {
    bool flag_test = 0;
    int count = 0;

    test_check_byk_in_word(flag_test, count);
    test_create_textur(flag_test, count);
    test_load_textur(flag_test, count);
    test_check_byk_cord(flag_test, count);
    test_draw_cross(flag_test, count);
    test_draw_gallows(flag_test, count);

    cout << "TEST[" << count << " / 6] OK" << endl;
    
}