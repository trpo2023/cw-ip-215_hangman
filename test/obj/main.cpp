#include "test.h"

int main() {
    test_check_byk_v_slove();
    test_create_textur();
    test_load_textur();
    test_check_byk_cord();
    test_draw_cross();
    test_draw_gallows();

    cout << "CHECK_BYK_V_SLOVE() - OK" << endl;
    cout << "CREATE_TEXTUR() - OK" << endl;
    cout << "LOAD_TEXTUR() - OK" << endl;
    cout << "CHECK_BYK_CORD() - OK" << endl;
    cout << "DRAW_CROSS() - OK" << endl;
    cout << "DRAW_GALLOWS() - OK" << endl;
    
}