#include "test.h"
#include "../lib/header.h"

//тесты, вынести в отдельную папку и разбить на фаилы


void test_check_byk_v_slove() {
    char Bykva = 'а';
    string slovo = "паша";
    int len = slovo.length();
    bool flag = 0;

    check_byk_v_slove(Bykva, slovo, len, flag);
    assert(flag == 1);

    flag = 0;
    Bykva = '-';
    check_byk_v_slove(Bykva, slovo, len, flag);
    assert(flag == 0);

    flag = 0;
    Bykva = '3';
    check_byk_v_slove(Bykva, slovo, len, flag);
    assert(flag == 0);

    flag = 0;
    Bykva = 'ш';
    check_byk_v_slove(Bykva, slovo, 0, flag);
    assert(flag == 0);

    cout << "check_byk_v_slove() - OK" << endl;
}

void test_create_textur() {
    textures Textures;
    //проверка, что текстуры не создаются без вызова функции
    assert(Textures.head.getRadius() == 0.f);
    assert(Textures.body.getSize() == Vector2f(0.f, 0.f));
    assert(Textures.rightHand.getSize() == Vector2f(0.f, 0.f));
    assert(Textures.leftHand.getSize() == Vector2f(0.f, 0.f));
    assert(Textures.rightLeg.getSize() == Vector2f(0.f, 0.f));
    assert(Textures.leftLeg.getSize() == Vector2f(0.f, 0.f));
    assert(Textures.line[0].getSize() == Vector2f(0.f, 0.f));
    assert(Textures.line[1].getSize() == Vector2f(0.f, 0.f));
    assert(Textures.line[2].getSize() == Vector2f(0.f, 0.f));
    assert(Textures.line[3].getSize() == Vector2f(0.f, 0.f));

    //проверка функции, что она задает размеры фигурам и создает их
    for (int i = 0; i < 14; i++) {
        create_textur(Textures, i);
    }
    assert(Textures.head.getRadius() != 0.f);
    assert(Textures.body.getSize() != Vector2f(0.f, 0.f));
    assert(Textures.rightHand.getSize() != Vector2f(0.f, 0.f));
    assert(Textures.leftHand.getSize() != Vector2f(0.f, 0.f));
    assert(Textures.rightLeg.getSize() != Vector2f(0.f, 0.f));
    assert(Textures.leftLeg.getSize() != Vector2f(0.f, 0.f));
    assert(Textures.line[0].getSize() != Vector2f(0.f, 0.f));
    assert(Textures.line[1].getSize() != Vector2f(0.f, 0.f));
    assert(Textures.line[2].getSize() != Vector2f(0.f, 0.f));
    assert(Textures.line[3].getSize() != Vector2f(0.f, 0.f));

    cout << "create_textur() - OK" << endl;
}

void test_load_textur() {
    textures Textures;
    RenderWindow window;
    //проверяем, что до вызова функции все знацения позиции, цвета, угол поворота равны нулю или не существуют
    assert(Textures.head.getPosition().x == 0);
    assert(Textures.head.getPosition().y == 0);
    assert(Textures.head.getOutlineColor() != Color::Black);
    assert(Textures.head.getOutlineThickness() == 0.f);
    assert(Textures.head.getFillColor() != Color(217, 217, 217));

    assert(Textures.body.getPosition().x == 0);
    assert(Textures.body.getPosition().y == 0);
    assert(Textures.body.getFillColor() != Color(217, 217, 217));
    assert(Textures.body.getRotation() == 0.f);

    assert(Textures.rightHand.getPosition().x == 0);
    assert(Textures.rightHand.getPosition().y == 0);
    assert(Textures.rightHand.getFillColor() != Color::Black);
    assert(Textures.rightHand.getRotation() == 0.f);

    assert(Textures.leftHand.getPosition().x == 0);
    assert(Textures.leftHand.getPosition().y == 0);
    assert(Textures.leftHand.getFillColor() != Color::Black);
    assert(Textures.leftHand.getRotation() == 0.f);

    assert(Textures.leftLeg.getPosition().x == 0);
    assert(Textures.leftLeg.getPosition().y == 0);
    assert(Textures.leftLeg.getFillColor() != Color::Black);
    assert(Textures.leftLeg.getRotation() == 0.f);

    assert(Textures.rightLeg.getPosition().x == 0);
    assert(Textures.rightLeg.getPosition().y == 0);
    assert(Textures.rightLeg.getFillColor() != Color::Black);
    assert(Textures.rightLeg.getRotation() == 0.f);

    assert(Textures.Texture[0].getSize() == Vector2u(0, 0));
    assert(Textures.Sprite[0].getTexture() == NULL);

    assert(Textures.Texture[1].getSize() == Vector2u(0, 0));
    assert(Textures.Sprite[1].getTexture() == NULL);

    assert(Textures.Texture[2].getSize() == Vector2u(0, 0));
    assert(Textures.Sprite[2].getTexture() == NULL);

    assert(Textures.Texture[3].getSize() == Vector2u(0, 0));
    assert(Textures.Sprite[3].getTexture() == NULL);

    assert(Textures.Texture[4].getSize() == Vector2u(0, 0));
    assert(Textures.Sprite[4].getTexture() == NULL);

    assert(Textures.Texture[5].getSize() == Vector2u(0, 0));
    assert(Textures.Sprite[5].getTexture() == NULL);

    assert(Textures.Texture[6].getSize() == Vector2u(0, 0));
    assert(Textures.Sprite[6].getTexture() == NULL);

    assert(Textures.line[0].getFillColor() != Color::Black);
    assert(Textures.line[0].getPosition() == Vector2f(0, 0));

    assert(Textures.line[1].getFillColor() != Color::Black);
    assert(Textures.line[1].getPosition() == Vector2f(0, 0));

    assert(Textures.line[2].getFillColor() != Color::Black);
    assert(Textures.line[2].getPosition() == Vector2f(0, 0));

    assert(Textures.line[3].getFillColor() != Color::Black);
    assert(Textures.line[3].getPosition() == Vector2f(0, 0));

    //Вызываем функцию и загружаем размеры
    load_textur(window, Textures);

    //Проверяем размеры и другое послее вызова
    assert(Textures.head.getPosition() == Vector2f(459, 95));
    assert(Textures.head.getOutlineColor() == Color::Black);
    assert(Textures.head.getOutlineThickness() == 3.f);
    assert(Textures.head.getFillColor() == Color(217, 217, 217));

    assert(Textures.body.getPosition() == Vector2f(500, 178));
    assert(Textures.body.getFillColor() == Color::Black);
    assert(Textures.body.getRotation() == 90.f);

    assert(Textures.rightHand.getPosition() == Vector2f(500, 206));
    assert(Textures.rightHand.getFillColor() == Color::Black);
    assert(Textures.rightHand.getRotation() == 45.f);

    assert(Textures.rightHand.getPosition() == Vector2f(500, 206));
    assert(Textures.leftHand.getFillColor() == Color::Black);
    assert(Textures.leftHand.getRotation() == 135.f);

    assert(Textures.leftLeg.getPosition() == Vector2f(500, 306));
    assert(Textures.leftLeg.getFillColor() == Color::Black);
    assert(Textures.leftLeg.getRotation() == 135.f);

    assert(Textures.rightLeg.getPosition() == Vector2f(500, 306));
    assert(Textures.rightLeg.getFillColor() == Color::Black);
    assert(Textures.rightLeg.getRotation() == 45.f);

    assert(Textures.Texture[0].getSize() != Vector2u(0, 0));
    assert(Textures.Sprite[0].getTexture() != NULL);

    assert(Textures.Texture[1].getSize() != Vector2u(0, 0));
    assert(Textures.Sprite[1].getTexture() != NULL);

    assert(Textures.Texture[2].getSize() != Vector2u(0, 0));
    assert(Textures.Sprite[2].getTexture() != NULL);

    assert(Textures.Texture[3].getSize() != Vector2u(0, 0));
    assert(Textures.Sprite[3].getTexture() != NULL);

    assert(Textures.Texture[4].getSize() != Vector2u(0, 0));
    assert(Textures.Sprite[4].getTexture() != NULL);

    assert(Textures.Texture[5].getSize() != Vector2u(0, 0));
    assert(Textures.Sprite[5].getTexture() != NULL);

    assert(Textures.Texture[6].getSize() != Vector2u(0, 0));
    assert(Textures.Sprite[6].getTexture() != NULL);

    assert(Textures.line[0].getFillColor() == Color::Black);
    assert(Textures.line[0].getPosition() == Vector2f(663, 406));

    assert(Textures.line[1].getFillColor() == Color::Black);
    assert(Textures.line[1].getPosition() == Vector2f(745, 40));

    assert(Textures.line[2].getFillColor() == Color::Black);
    assert(Textures.line[2].getPosition() == Vector2f(450, 40));

    assert(Textures.line[3].getFillColor() == Color::Black);
    assert(Textures.line[3].getPosition() == Vector2f(500, 40));

    cout << "load_textur() - OK" << endl;
}

void test_check_byk_cord() {
    //тестовые данные
    char Bykva = 'а';
    check_byk_cord(0, 0, Bykva);
    assert(Bykva == 'а');

    //обработка стандартных значений
    Bykva = '-';
    check_byk_cord(170, 590, Bykva);
    assert(Bykva == 'а');
    check_byk_cord(210, 590, Bykva);
    assert(Bykva == 'б');
    check_byk_cord(265, 590, Bykva);
    assert(Bykva == 'в');
    check_byk_cord(325, 590, Bykva);
    assert(Bykva == 'г');
    check_byk_cord(370, 590, Bykva);
    assert(Bykva == 'д');
    check_byk_cord(435, 590, Bykva);
    assert(Bykva == 'е');
    check_byk_cord(477, 590, Bykva);
    assert(Bykva == 'ж');
    check_byk_cord(540, 590, Bykva);
    assert(Bykva == 'з');
    check_byk_cord(595, 590, Bykva);
    assert(Bykva == 'и');
    check_byk_cord(650, 590, Bykva);
    assert(Bykva == 'й');
    check_byk_cord(708, 590, Bykva);
    assert(Bykva == 'к');
    check_byk_cord(758, 590, Bykva);
    assert(Bykva == 'л');
    check_byk_cord(812, 590, Bykva);
    assert(Bykva == 'м');

    check_byk_cord(155, 650, Bykva);
    assert(Bykva == 'н');
    check_byk_cord(205, 650, Bykva);
    assert(Bykva == 'о');
    check_byk_cord(265, 650, Bykva);
    assert(Bykva == 'п');
    check_byk_cord(320, 650, Bykva);
    assert(Bykva == 'р');
    check_byk_cord(372, 650, Bykva);
    assert(Bykva == 'с');
    check_byk_cord(430, 650, Bykva);
    assert(Bykva == 'т');
    check_byk_cord(483, 650, Bykva);
    assert(Bykva == 'у');
    check_byk_cord(535, 650, Bykva);
    assert(Bykva == 'ф');
    check_byk_cord(595, 650, Bykva);
    assert(Bykva == 'х');
    check_byk_cord(650, 650, Bykva);
    assert(Bykva == 'ц');
    check_byk_cord(702, 650, Bykva);
    assert(Bykva == 'ч');
    check_byk_cord(751, 650, Bykva);
    assert(Bykva == 'ш');
    check_byk_cord(807, 650, Bykva);
    assert(Bykva == 'щ');

    check_byk_cord(348, 720, Bykva);
    assert(Bykva == 'ь');
    check_byk_cord(395, 720, Bykva);
    assert(Bykva == 'ы');
    check_byk_cord(450, 720, Bykva);
    assert(Bykva == 'ъ');
    check_byk_cord(510, 720, Bykva);
    assert(Bykva == 'э');
    check_byk_cord(561, 720, Bykva);
    assert(Bykva == 'ю');
    check_byk_cord(623, 720, Bykva);
    assert(Bykva == 'я');

    //обработка, если границы  не попадают стандартные
    Bykva = '*';

    check_byk_cord(800, 0, Bykva);
    assert(Bykva == '*');
    check_byk_cord(0, 800, Bykva);
    assert(Bykva == '*');
    check_byk_cord(1000, 0, Bykva);
    assert(Bykva == '*');
    check_byk_cord(1000, 800, Bykva);
    assert(Bykva == '*');
    check_byk_cord(999999, 99999999, Bykva);
    assert(Bykva == '*');
    check_byk_cord(-100, -100, Bykva);
    assert(Bykva == '*');
    check_byk_cord(0, -100, Bykva);
    assert(Bykva == '*');
    check_byk_cord(-100, 0, Bykva);
    assert(Bykva == '*');
    check_byk_cord(0, 0, Bykva);
    assert(Bykva == '*');


    cout << "check_byk_cord() - OK" << endl;
}

void test_draw_cross() {
    Sprite cross;
    RenderWindow window;
    // Проверка начальной позиции спрайта
    assert(cross.getPosition() == Vector2f(0, 0));

    // Проверка для каждой позиции из positions
    draw_cross(0, window, cross);
    assert(cross.getPosition() == Vector2f(152, 580));
    draw_cross(1, window, cross);
    assert(cross.getPosition() == Vector2f(210, 580));
    draw_cross(2, window, cross);
    assert(cross.getPosition() == Vector2f(262, 580));
    draw_cross(3, window, cross);
    assert(cross.getPosition() == Vector2f(315, 580));
    draw_cross(4, window, cross);
    assert(cross.getPosition() == Vector2f(372, 580));
    draw_cross(5, window, cross);
    assert(cross.getPosition() == Vector2f(427, 580));
    draw_cross(6, window, cross);
    assert(cross.getPosition() == Vector2f(482, 580));
    draw_cross(7, window, cross);
    assert(cross.getPosition() == Vector2f(539, 580));
    draw_cross(8, window, cross);
    assert(cross.getPosition() == Vector2f(593, 580));
    draw_cross(9, window, cross);
    assert(cross.getPosition() == Vector2f(647, 580));
    draw_cross(10, window, cross);
    assert(cross.getPosition() == Vector2f(700, 580));
    draw_cross(11, window, cross);
    assert(cross.getPosition() == Vector2f(757, 580));
    draw_cross(12, window, cross);
    assert(cross.getPosition() == Vector2f(812, 580));
    draw_cross(13, window, cross);
    assert(cross.getPosition() == Vector2f(150, 642));
    draw_cross(14, window, cross);
    assert(cross.getPosition() == Vector2f(207, 642));
    draw_cross(15, window, cross);
    assert(cross.getPosition() == Vector2f(260, 642));
    draw_cross(16, window, cross);
    assert(cross.getPosition() == Vector2f(315, 642));
    draw_cross(17, window, cross);
    assert(cross.getPosition() == Vector2f(372, 642));
    draw_cross(18, window, cross);
    assert(cross.getPosition() == Vector2f(425, 642));
    draw_cross(19, window, cross);
    assert(cross.getPosition() == Vector2f(480, 642));
    draw_cross(20, window, cross);
    assert(cross.getPosition() == Vector2f(536, 642));
    draw_cross(21, window, cross);
    assert(cross.getPosition() == Vector2f(590, 642));
    draw_cross(22, window, cross);
    assert(cross.getPosition() == Vector2f(645, 642));
    draw_cross(23, window, cross);
    assert(cross.getPosition() == Vector2f(700, 642));
    draw_cross(24, window, cross);
    assert(cross.getPosition() == Vector2f(757, 642));
    draw_cross(25, window, cross);
    assert(cross.getPosition() == Vector2f(812, 642));
    draw_cross(26, window, cross);
    assert(cross.getPosition() == Vector2f(343, 700));
    draw_cross(27, window, cross);
    assert(cross.getPosition() == Vector2f(397, 700));
    draw_cross(28, window, cross);
    assert(cross.getPosition() == Vector2f(455, 700));
    draw_cross(29, window, cross);
    assert(cross.getPosition() == Vector2f(507, 700));
    draw_cross(30, window, cross);
    assert(cross.getPosition() == Vector2f(560, 700));
    draw_cross(31, window, cross);
    assert(cross.getPosition() == Vector2f(618, 700));

    //обработка не стандартных значений i
    cross.setPosition(0, 0);
    draw_cross(99, window, cross);
    assert(cross.getPosition() == Vector2f(0, 0));

    draw_cross(-10, window, cross);
    assert(cross.getPosition() == Vector2f(0, 0));

    //обработка других спрайтов
    Sprite test;
    test.setPosition(10, 10);
    cross.setPosition(0, 0);
    draw_cross(4, window, cross);
    assert(cross.getPosition() == Vector2f(372, 580));
    assert(test.getPosition() == Vector2f(10, 10));

    cout << "draw_cross() - OK" << endl;
}

void test_draw_gallows() {
    textures Textures;
    RenderWindow window;
    int DrawCount = 0;

    //проверка количества отрисованных элементов
    draw_gallows(0, window, Textures, DrawCount);
    assert(DrawCount == 1);

    DrawCount = 0;
    draw_gallows(1, window, Textures, DrawCount);
    assert(DrawCount == 4);

    DrawCount = 0;
    draw_gallows(2, window, Textures, DrawCount);
    assert(DrawCount == 6);

    DrawCount = 0;
    draw_gallows(3, window, Textures, DrawCount);
    assert(DrawCount == 7);

    DrawCount = 0;
    draw_gallows(4, window, Textures, DrawCount);
    assert(DrawCount == 8);

    DrawCount = 0;
    draw_gallows(5, window, Textures, DrawCount);
    assert(DrawCount == 9);

    DrawCount = 0;
    draw_gallows(6, window, Textures, DrawCount);
    assert(DrawCount == 10);

    DrawCount = 0;
    draw_gallows(7, window, Textures, DrawCount);
    assert(DrawCount == 12);

    //обработка значений, которые выходят за пределы
    DrawCount = 0;
    draw_gallows(99, window, Textures, DrawCount);
    assert(DrawCount == 12);

    DrawCount = 0;
    draw_gallows(-1, window, Textures, DrawCount);
    assert(DrawCount == 1);

    cout << "draw_gallows() - OK" << endl;
}