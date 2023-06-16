#include "test.h"
#include "../../lib/func.cpp"

void test_check_byk_in_word(bool &flag_test, int &count) {
    flag_test = 0;
    int key = 1;

    char Bykva = 'а';
    string slovo = "паша";
    int len = slovo.length();
    bool flag = 0;
    check_byk_in_word(Bykva, slovo, len, flag);
    assert1(flag == 1, key, flag_test);

    flag = 0;
    Bykva = '-';
    check_byk_in_word(Bykva, slovo, len, flag);
    assert1(flag == 0, key, flag_test);

    flag = 0;
    Bykva = '3';
    check_byk_in_word(Bykva, slovo, len, flag);
    assert1(flag == 0, key, flag_test);

    flag = 0;
    Bykva = 'г';
    check_byk_in_word(Bykva, slovo, 0, flag);
    assert1(flag == 0, key, flag_test);

    if (flag_test == 0) {
        cout << "TEST " << key << "  CHECK_BYK_IN_WORD() - OK" << endl;
        count++;
    }

    
}

void test_create_textur(bool& flag_test, int& count) {
    flag_test = 0;
    int key = 2;
    textures Textures;
    //проверка, что текстуры не создаются без вызова функции
    assert1(Textures.head.getRadius() == 0.f, key, flag_test);
    assert1(Textures.body.getSize() == Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.rightHand.getSize() == Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.leftHand.getSize() == Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.rightLeg.getSize() == Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.leftLeg.getSize() == Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.line[0].getSize() == Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.line[1].getSize() == Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.line[2].getSize() == Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.line[3].getSize() == Vector2f(0.f, 0.f), key, flag_test);

    //проверка функции, что она задает размеры фигурам и создает их
    for (int i = 0; i < 14; i++) {
        create_textur(Textures, i);
    }
    assert1(Textures.head.getRadius() != 0.f, key, flag_test);
    assert1(Textures.body.getSize() != Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.rightHand.getSize() != Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.leftHand.getSize() != Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.rightLeg.getSize() != Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.leftLeg.getSize() != Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.line[0].getSize() != Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.line[1].getSize() != Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.line[2].getSize() != Vector2f(0.f, 0.f), key, flag_test);
    assert1(Textures.line[3].getSize() != Vector2f(0.f, 0.f), key, flag_test);

    if (flag_test == 0) {
        cout << "TEST " << key << "  CREATE_TEXTUR() - OK" << endl;
        count++;
    }
}


void test_load_textur(bool& flag_test, int& count) {
    flag_test = 0;
    int key = 3;
    textures Textures;
    RenderWindow window;
    //проверяем, что до вызова функции все знацения позиции, цвета, угол поворота равны нулю или не существуют
    assert1(Textures.head.getPosition().x == 0, key, flag_test);
    assert1(Textures.head.getPosition().y == 0, key, flag_test);
    assert1(Textures.head.getOutlineColor() != Color::Black, key, flag_test);
    assert1(Textures.head.getOutlineThickness() == 0.f, key, flag_test);
    assert1(Textures.head.getFillColor() != Color(217, 217, 217), key, flag_test);

    assert1(Textures.body.getPosition().x == 0, key, flag_test);
    assert1(Textures.body.getPosition().y == 0, key, flag_test);
    assert1(Textures.body.getFillColor() != Color(217, 217, 217), key, flag_test);
    assert1(Textures.body.getRotation() == 0.f, key, flag_test);

    assert1(Textures.rightHand.getPosition().x == 0, key, flag_test);
    assert1(Textures.rightHand.getPosition().y == 0, key, flag_test);
    assert1(Textures.rightHand.getFillColor() != Color::Black, key, flag_test);
    assert1(Textures.rightHand.getRotation() == 0.f, key, flag_test);

    assert1(Textures.leftHand.getPosition().x == 0, key, flag_test);
    assert1(Textures.leftHand.getPosition().y == 0, key, flag_test);
    assert1(Textures.leftHand.getFillColor() != Color::Black, key, flag_test);
    assert1(Textures.leftHand.getRotation() == 0.f, key, flag_test);

    assert1(Textures.leftLeg.getPosition().x == 0, key, flag_test);
    assert1(Textures.leftLeg.getPosition().y == 0, key, flag_test);
    assert1(Textures.leftLeg.getFillColor() != Color::Black, key, flag_test);
    assert1(Textures.leftLeg.getRotation() == 0.f, key, flag_test);

    assert1(Textures.rightLeg.getPosition().x == 0, key, flag_test);
    assert1(Textures.rightLeg.getPosition().y == 0, key, flag_test);
    assert1(Textures.rightLeg.getFillColor() != Color::Black, key, flag_test);
    assert1(Textures.rightLeg.getRotation() == 0.f, key, flag_test);

    for (int i = 0; i < 7; i++){
        assert1(Textures.Texture[i].getSize() == Vector2u(0, 0), key, flag_test);
        assert1(Textures.Sprite[i].getTexture() == NULL, key, flag_test);
    }

    assert1(Textures.line[0].getFillColor() != Color::Black, key, flag_test);
    assert1(Textures.line[0].getPosition() == Vector2f(0, 0), key, flag_test);

    assert1(Textures.line[1].getFillColor() != Color::Black, key, flag_test);
    assert1(Textures.line[1].getPosition() == Vector2f(0, 0), key, flag_test);

    assert1(Textures.line[2].getFillColor() != Color::Black, key, flag_test);
    assert1(Textures.line[2].getPosition() == Vector2f(0, 0), key, flag_test);

    assert1(Textures.line[3].getFillColor() != Color::Black, key, flag_test);
    assert1(Textures.line[3].getPosition() == Vector2f(0, 0), key, flag_test);

    //Вызываем функцию и загружаем размеры
    load_textur(window, Textures);

    //Проверяем размеры и другое послее вызова
    assert1(Textures.head.getPosition() == Vector2f(459, 95), key, flag_test);
    assert1(Textures.head.getOutlineColor() == Color::Black, key, flag_test);
    assert1(Textures.head.getOutlineThickness() == 3.f, key, flag_test);
    assert1(Textures.head.getFillColor() == Color(217, 217, 217), key, flag_test);

    assert1(Textures.body.getPosition() == Vector2f(500, 178), key, flag_test);
    assert1(Textures.body.getFillColor() == Color::Black, key, flag_test);
    assert1(Textures.body.getRotation() == 90.f, key, flag_test);

    assert1(Textures.rightHand.getPosition() == Vector2f(500, 206), key, flag_test);
    assert1(Textures.rightHand.getFillColor() == Color::Black, key, flag_test);
    assert1(Textures.rightHand.getRotation() == 45.f, key, flag_test);

    assert1(Textures.rightHand.getPosition() == Vector2f(500, 206), key, flag_test);
    assert1(Textures.leftHand.getFillColor() == Color::Black, key, flag_test);
    assert1(Textures.leftHand.getRotation() == 135.f, key, flag_test);

    assert1(Textures.leftLeg.getPosition() == Vector2f(500, 306), key, flag_test);
    assert1(Textures.leftLeg.getFillColor() == Color::Black, key, flag_test);
    assert1(Textures.leftLeg.getRotation() == 135.f, key, flag_test);

    assert1(Textures.rightLeg.getPosition() == Vector2f(500, 306), key, flag_test);
    assert1(Textures.rightLeg.getFillColor() == Color::Black, key, flag_test);
    assert1(Textures.rightLeg.getRotation() == 45.f, key, flag_test);

    for (int i = 0; i < 7; i++) {
        assert1(Textures.Texture[i].getSize() != Vector2u(0, 0), key, flag_test);
        assert1(Textures.Sprite[i].getTexture() != NULL, key, flag_test);
    }
    
    assert1(Textures.line[0].getFillColor() == Color::Black, key, flag_test);
    assert1(Textures.line[0].getPosition() == Vector2f(663, 406), key, flag_test);

    assert1(Textures.line[1].getFillColor() == Color::Black, key, flag_test);
    assert1(Textures.line[1].getPosition() == Vector2f(745, 40), key, flag_test);

    assert1(Textures.line[2].getFillColor() == Color::Black, key, flag_test);
    assert1(Textures.line[2].getPosition() == Vector2f(450, 40), key, flag_test);

    assert1(Textures.line[3].getFillColor() == Color::Black, key, flag_test);
    assert1(Textures.line[3].getPosition() == Vector2f(500, 40), key, flag_test);

    if (flag_test == 0) {
        cout << "TEST " << key << "  LOAD_TEXTUR() - OK" << endl;
        count++;
    }
}

void test_check_byk_cord(bool& flag_test, int& count) {
    flag_test = 0;
    int key = 4;
    //тестовые данные
    char Bykva = 'а';
    check_byk_cord(0, 0, Bykva);
    assert1(Bykva == 'а', key, flag_test);

    //обработка стандартных значений
    Bykva = '-';
    check_byk_cord(170, 590, Bykva);
    assert1(Bykva == 'а', key, flag_test);
    check_byk_cord(210, 590, Bykva);
    assert1(Bykva == 'б', key, flag_test);
    check_byk_cord(265, 590, Bykva);
    assert1(Bykva == 'в', key, flag_test);
    check_byk_cord(325, 590, Bykva);
    assert1(Bykva == 'г', key, flag_test);
    check_byk_cord(370, 590, Bykva);
    assert1(Bykva == 'д', key, flag_test);
    check_byk_cord(435, 590, Bykva);
    assert1(Bykva == 'е', key, flag_test);
    check_byk_cord(477, 590, Bykva);
    assert1(Bykva == 'ж', key, flag_test);
    check_byk_cord(540, 590, Bykva);
    assert1(Bykva == 'з', key, flag_test);
    check_byk_cord(595, 590, Bykva);
    assert1(Bykva == 'и', key, flag_test);
    check_byk_cord(650, 590, Bykva);
    assert1(Bykva == 'й', key, flag_test);
    check_byk_cord(708, 590, Bykva);
    assert1(Bykva == 'к', key, flag_test);
    check_byk_cord(758, 590, Bykva);
    assert1(Bykva == 'л', key, flag_test);
    check_byk_cord(812, 590, Bykva);
    assert1(Bykva == 'м', key, flag_test);

    check_byk_cord(155, 650, Bykva);
    assert1(Bykva == 'н', key, flag_test);
    check_byk_cord(205, 650, Bykva);
    assert1(Bykva == 'о', key, flag_test);
    check_byk_cord(265, 650, Bykva);
    assert1(Bykva == 'п', key, flag_test);
    check_byk_cord(320, 650, Bykva);
    assert1(Bykva == 'р', key, flag_test);
    check_byk_cord(372, 650, Bykva);
    assert1(Bykva == 'с', key, flag_test);
    check_byk_cord(430, 650, Bykva);
    assert1(Bykva == 'т', key, flag_test);
    check_byk_cord(483, 650, Bykva);
    assert1(Bykva == 'у', key, flag_test);
    check_byk_cord(535, 650, Bykva);
    assert1(Bykva == 'ф', key, flag_test);
    check_byk_cord(595, 650, Bykva);
    assert1(Bykva == 'х', key, flag_test);
    check_byk_cord(650, 650, Bykva);
    assert1(Bykva == 'ц', key, flag_test);
    check_byk_cord(702, 650, Bykva);
    assert1(Bykva == 'ч', key, flag_test);
    check_byk_cord(751, 650, Bykva);
    assert1(Bykva == 'ш', key, flag_test);
    check_byk_cord(807, 650, Bykva);
    assert1(Bykva == 'щ', key, flag_test);

    check_byk_cord(348, 720, Bykva);
    assert1(Bykva == 'ь', key, flag_test);
    check_byk_cord(395, 720, Bykva);
    assert1(Bykva == 'ы', key, flag_test);
    check_byk_cord(450, 720, Bykva);
    assert1(Bykva == 'ъ', key, flag_test);
    check_byk_cord(510, 720, Bykva);
    assert1(Bykva == 'э', key, flag_test);
    check_byk_cord(561, 720, Bykva);
    assert1(Bykva == 'ю', key, flag_test);
    check_byk_cord(623, 720, Bykva);
    assert1(Bykva == 'я', key, flag_test);

    //обработка, если границы  не попадают стандартные
    Bykva = '*';

    check_byk_cord(800, 0, Bykva);
    assert1(Bykva == '*', key, flag_test);
    check_byk_cord(0, 800, Bykva);
    assert1(Bykva == '*', key, flag_test);
    check_byk_cord(1000, 0, Bykva);
    assert1(Bykva == '*', key, flag_test);
    check_byk_cord(1000, 800, Bykva);
    assert1(Bykva == '*', key, flag_test);
    check_byk_cord(999999, 99999999, Bykva);
    assert1(Bykva == '*', key, flag_test);
    check_byk_cord(-100, -100, Bykva);
    assert1(Bykva == '*', key, flag_test);
    check_byk_cord(0, -100, Bykva);
    assert1(Bykva == '*', key, flag_test);
    check_byk_cord(-100, 0, Bykva);
    assert1(Bykva == '*', key, flag_test);
    check_byk_cord(0, 0, Bykva);
    assert1(Bykva == '*', key, flag_test);


    if (flag_test == 0) {
        cout << "TEST " << key << "  CHECK_BYK_CORD() - OK" << endl;
        count++;
    }
}

void test_draw_cross(bool& flag_test, int& count) {
    flag_test = 0;
    int key = 5;
    Sprite cross;
    RenderWindow window;
    // Проверка начальной позиции спрайта
    assert1(cross.getPosition() == Vector2f(0, 0), key, flag_test);

    // Проверка для каждой позиции из positions
    draw_cross(0, window, cross);
    assert1(cross.getPosition() == Vector2f(152, 580), key, flag_test);
    draw_cross(1, window, cross);
    assert1(cross.getPosition() == Vector2f(210, 580), key, flag_test);
    draw_cross(2, window, cross);
    assert1(cross.getPosition() == Vector2f(262, 580), key, flag_test);
    draw_cross(3, window, cross);
    assert1(cross.getPosition() == Vector2f(315, 580), key, flag_test);
    draw_cross(4, window, cross);
    assert1(cross.getPosition() == Vector2f(372, 580), key, flag_test);
    draw_cross(5, window, cross);
    assert1(cross.getPosition() == Vector2f(427, 580), key, flag_test);
    draw_cross(6, window, cross);
    assert1(cross.getPosition() == Vector2f(482, 580), key, flag_test);
    draw_cross(7, window, cross);
    assert1(cross.getPosition() == Vector2f(539, 580), key, flag_test);
    draw_cross(8, window, cross);
    assert1(cross.getPosition() == Vector2f(593, 580), key, flag_test);
    draw_cross(9, window, cross);
    assert1(cross.getPosition() == Vector2f(647, 580), key, flag_test);
    draw_cross(10, window, cross);
    assert1(cross.getPosition() == Vector2f(700, 580), key, flag_test);
    draw_cross(11, window, cross);
    assert1(cross.getPosition() == Vector2f(757, 580), key, flag_test);
    draw_cross(12, window, cross);
    assert1(cross.getPosition() == Vector2f(812, 580), key, flag_test);
    draw_cross(13, window, cross);
    assert1(cross.getPosition() == Vector2f(150, 642), key, flag_test);
    draw_cross(14, window, cross);
    assert1(cross.getPosition() == Vector2f(207, 642), key, flag_test);
    draw_cross(15, window, cross);
    assert1(cross.getPosition() == Vector2f(260, 642), key, flag_test);
    draw_cross(16, window, cross);
    assert1(cross.getPosition() == Vector2f(315, 642), key, flag_test);
    draw_cross(17, window, cross);
    assert1(cross.getPosition() == Vector2f(372, 642), key, flag_test);
    draw_cross(18, window, cross);
    assert1(cross.getPosition() == Vector2f(425, 642), key, flag_test);
    draw_cross(19, window, cross);
    assert1(cross.getPosition() == Vector2f(480, 642), key, flag_test);
    draw_cross(20, window, cross);
    assert1(cross.getPosition() == Vector2f(536, 642), key, flag_test);
    draw_cross(21, window, cross);
    assert1(cross.getPosition() == Vector2f(590, 642), key, flag_test);
    draw_cross(22, window, cross);
    assert1(cross.getPosition() == Vector2f(645, 642), key, flag_test);
    draw_cross(23, window, cross);
    assert1(cross.getPosition() == Vector2f(700, 642), key, flag_test);
    draw_cross(24, window, cross);
    assert1(cross.getPosition() == Vector2f(757, 642), key, flag_test);
    draw_cross(25, window, cross);
    assert1(cross.getPosition() == Vector2f(812, 642), key, flag_test);
    draw_cross(26, window, cross);
    assert1(cross.getPosition() == Vector2f(343, 700), key, flag_test);
    draw_cross(27, window, cross);
    assert1(cross.getPosition() == Vector2f(397, 700), key, flag_test);
    draw_cross(28, window, cross);
    assert1(cross.getPosition() == Vector2f(455, 700), key, flag_test);
    draw_cross(29, window, cross);
    assert1(cross.getPosition() == Vector2f(507, 700), key, flag_test);
    draw_cross(30, window, cross);
    assert1(cross.getPosition() == Vector2f(560, 700), key, flag_test);
    draw_cross(31, window, cross);
    assert1(cross.getPosition() == Vector2f(618, 700), key, flag_test);

    //обработка не стандартных значений i
    cross.setPosition(0, 0);
    draw_cross(99, window, cross);
    assert1(cross.getPosition() == Vector2f(0, 0), key, flag_test);

    draw_cross(-10, window, cross);
    assert1(cross.getPosition() == Vector2f(0, 0), key, flag_test);

    //обработка других спрайтов
    Sprite test;
    test.setPosition(10, 10);
    cross.setPosition(0, 0);
    draw_cross(4, window, cross);
    assert1(cross.getPosition() == Vector2f(372, 580), key, flag_test);
    assert1(test.getPosition() == Vector2f(10, 10), key, flag_test);

    if (flag_test == 0) {
        cout << "TEST " << key << "  DRAW_CROSS() - OK" << endl;
        count++;
    }
}

void test_draw_gallows(bool& flag_test, int& count) {
    flag_test = 0;
    int key = 6;
    textures Textures;
    RenderWindow window;
    int DrawCount = 0;

    //проверка количества отрисованных элементов
    draw_gallows(0, window, Textures, DrawCount);
    assert1(DrawCount == 1, key, flag_test);

    DrawCount = 0;
    draw_gallows(1, window, Textures, DrawCount);
    assert1(DrawCount == 4, key, flag_test);

    DrawCount = 0;
    draw_gallows(2, window, Textures, DrawCount);
    assert1(DrawCount == 6, key, flag_test);

    DrawCount = 0;
    draw_gallows(3, window, Textures, DrawCount);
    assert1(DrawCount == 7, key, flag_test);

    DrawCount = 0;
    draw_gallows(4, window, Textures, DrawCount);
    assert1(DrawCount == 8, key, flag_test);

    DrawCount = 0;
    draw_gallows(5, window, Textures, DrawCount);
    assert1(DrawCount == 9, key, flag_test);

    DrawCount = 0;
    draw_gallows(6, window, Textures, DrawCount);
    assert1(DrawCount == 10, key, flag_test);

    DrawCount = 0;
    draw_gallows(7, window, Textures, DrawCount);
    assert1(DrawCount == 12, key, flag_test);

    //обработка значений, которые выходят за пределы
    DrawCount = 0;
    draw_gallows(99, window, Textures, DrawCount);
    assert1(DrawCount == 12, key, flag_test);

    DrawCount = 0;
    draw_gallows(-1, window, Textures, DrawCount);
    assert1(DrawCount == 1, key, flag_test);

    if (flag_test == 0) {
        cout << "TEST " << key << "  DRAW_GALLOWS() - OK" << endl;
        count++;
    }
}
