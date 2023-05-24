#include "header.h"

void check_byk_v_slove(char Bykva, string slovo, int len, bool& flag) {
    for (int i = 0; i < len; i++) {
        if (slovo[i] == Bykva) {
            flag = 1;
        }
    }
}

void create_textur(textures& struct_texture, int n)
{
    switch (n){
    case 0:{
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 1:{
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 2:{
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 3:{
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 4:{
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 5:{
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 6: {
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 7:{
        struct_texture.line[n - 7] = RectangleShape(Vector2f(157.f, 7.f));
        break;
    }
    case 8:{
        struct_texture.line[n - 7] = RectangleShape(Vector2f(366.f, 7.f));
        break;
    }
    case 9:{
        struct_texture.line[n - 7] = RectangleShape(Vector2f(295.f, 7.f));
        break;
    }
    case 10:{
        struct_texture.line[n - 7] = RectangleShape(Vector2f(55.f, 2.f));
        break;
    }
    case 11:{
        struct_texture.head = CircleShape(41.f);
        break;
    }
    case 12:{
        struct_texture.body = RectangleShape(Vector2f(130.f, 3.f));
        break;
    }
    case 13:{
        RectangleShape limb = RectangleShape(Vector2f(70.f, 3.f));
        struct_texture.rightHand = struct_texture.leftHand = struct_texture.rightLeg = struct_texture.leftLeg = limb;
        break;
    }
    default:
        break;
    }
}

void load_textur(RenderWindow& window, textures& struct_texture)
{
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);

    struct_texture.head.setPosition(459, 95);
    struct_texture.head.setFillColor(Color(217, 217, 217));
    struct_texture.head.setOutlineThickness(3.f);
    struct_texture.head.setOutlineColor(Color::Black);

    struct_texture.body.rotate(90.f);
    struct_texture.body.setPosition(500, 178);
    struct_texture.body.setFillColor(Color::Black);

    struct_texture.rightHand.rotate(45.f);
    struct_texture.rightHand.setPosition(500, 206);
    struct_texture.rightHand.setFillColor(Color::Black);

    struct_texture.leftHand.rotate(135.f);
    struct_texture.leftHand.setPosition(500, 206);
    struct_texture.leftHand.setFillColor(Color::Black);

    struct_texture.rightLeg.rotate(45.f);
    struct_texture.rightLeg.setPosition(500, 306);
    struct_texture.rightLeg.setFillColor(Color::Black);

    struct_texture.leftLeg.rotate(135.f);
    struct_texture.leftLeg.setPosition(500, 306);
    struct_texture.leftLeg.setFillColor(Color::Black);

    struct_texture.Texture[0].loadFromFile("img/Alphabet.png");
    struct_texture.Sprite[0].setTexture(struct_texture.Texture[0]);
    struct_texture.Sprite[0].setPosition(143, 570);

    struct_texture.Texture[1].loadFromFile("img/Cross.png");
    struct_texture.Sprite[1].setTexture(struct_texture.Texture[1]);

    struct_texture.Texture[2].loadFromFile("img/underline.png");
    struct_texture.Sprite[2].setTexture(struct_texture.Texture[2]);

    struct_texture.Texture[3].loadFromFile("img/You win.png");
    struct_texture.Sprite[3].setTexture(struct_texture.Texture[3]);
    struct_texture.Sprite[3].setPosition(10, 100);

    struct_texture.Texture[4].loadFromFile("img/game over.png");
    struct_texture.Sprite[4].setTexture(struct_texture.Texture[4]);
    struct_texture.Sprite[4].setPosition(10, 100);

    struct_texture.Texture[5].loadFromFile("img/menu.png");
    struct_texture.Sprite[5].setTexture(struct_texture.Texture[5]);
    struct_texture.Sprite[5].setPosition(0, 0);

    struct_texture.Texture[6].loadFromFile("img/background.png");
    struct_texture.Sprite[6].setTexture(struct_texture.Texture[6]);
    struct_texture.Sprite[6].setPosition(0, 0);

    for (int i = 0; i < 4; i++)
    {
        struct_texture.line[i].setFillColor(Color::Black);
        switch (i)
        {
        case 0:
            struct_texture.line[i].setPosition(663, 406);
            break;
        case 1:
            struct_texture.line[i].rotate(90.f);
            struct_texture.line[i].setPosition(745, 40);
            break;
        case 2:
            struct_texture.line[i].setPosition(450, 40);
            break;
        case 3:
            struct_texture.line[i].rotate(90.f);
            struct_texture.line[i].setPosition(500, 40);
            break;
        default:
            break;
        }
    }
}

void check_byk_cord(int pos_x, int pos_y, char& Bykva)
{
    if (pos_y >= 580 && pos_y <= 615){
        if (pos_x >= 155 && pos_x <= 185)
            Bykva = 'а';
        else if (pos_x >= 210 && pos_x <= 240)
            Bykva = 'б';
        else if (pos_x >= 265 && pos_x <= 295)
            Bykva = 'в';
        else if (pos_x >= 325 && pos_x <= 350)
            Bykva = 'г';
        else if (pos_x >= 370 && pos_x <= 410)
            Bykva = 'д';
        else if (pos_x >= 435 && pos_x <= 460)
            Bykva = 'е';
        else if (pos_x >= 477 && pos_x <= 522)
            Bykva = 'ж';
        else if (pos_x >= 540 && pos_x <= 566)
            Bykva = 'з';
        else if (pos_x >= 595 && pos_x <= 624)
            Bykva = 'и';
        else if (pos_x >= 650 && pos_x <= 678)
            Bykva = 'й';
        else if (pos_x >= 708 && pos_x <= 735)
            Bykva = 'к';
        else if (pos_x >= 758 && pos_x <= 790)
            Bykva = 'л';
        else if (pos_x >= 812 && pos_x <= 848)
            Bykva = 'м';
    }
    else if (pos_y >= 640 && pos_y <= 677){
        if (pos_x >= 155 && pos_x <= 185)
            Bykva = 'н';
        else if (pos_x >= 205 && pos_x <= 240)
            Bykva = 'о';
        else if (pos_x >= 265 && pos_x <= 295)
            Bykva = 'п';
        else if (pos_x >= 320 && pos_x <= 350)
            Bykva = 'р';
        else if (pos_x >= 372 && pos_x <= 405)
            Bykva = 'с';
        else if (pos_x >= 430 && pos_x <= 460)
            Bykva = 'т';
        else if (pos_x >= 483 && pos_x <= 512)
            Bykva = 'у';
        else if (pos_x >= 535 && pos_x <= 573)
            Bykva = 'ф';
        else if (pos_x >= 595 && pos_x <= 623)
            Bykva = 'х';
        else if (pos_x >= 650 && pos_x <= 680)
            Bykva = 'ц';
        else if (pos_x >= 702 && pos_x <= 731)
            Bykva = 'ч';
        else if (pos_x >= 751 && pos_x <= 793)
            Bykva = 'ш';
        else if (pos_x >= 807 && pos_x <= 853)
            Bykva = 'щ';
    }
    else if (pos_y >= 700 && pos_y <= 736){
        if (pos_x >= 348 && pos_x <= 376)
            Bykva = 'ь';
        else if (pos_x >= 395 && pos_x <= 435)
            Bykva = 'ы';
        else if (pos_x >= 450 && pos_x <= 490)
            Bykva = 'ъ';
        else if (pos_x >= 510 && pos_x <= 541)
            Bykva = 'э';
        else if (pos_x >= 561 && pos_x <= 606)
            Bykva = 'ю';
        else if (pos_x >= 623 && pos_x <= 648)
            Bykva = 'я';
    }
}

void draw_cross(int i, RenderWindow& window, Sprite& cross) {
    unordered_map<int, Vector2f> positions = {
        {0, Vector2f(152, 580)},  // а
        {1, Vector2f(210, 580)},  // б
        {2, Vector2f(262, 580)},  // в
        {3, Vector2f(315, 580)},  // г
        {4, Vector2f(372, 580)},  // д
        {5, Vector2f(427, 580)},  // е
        {6, Vector2f(482, 580)},  // ж
        {7, Vector2f(539, 580)},  // з
        {8, Vector2f(593, 580)},  // и
        {9, Vector2f(647, 580)},  // й
        {10, Vector2f(700, 580)}, // к
        {11, Vector2f(757, 580)}, // л
        {12, Vector2f(812, 580)}, // м
        {13, Vector2f(150, 642)}, // н
        {14, Vector2f(207, 642)}, // о
        {15, Vector2f(260, 642)}, // п
        {16, Vector2f(315, 642)}, // р
        {17, Vector2f(372, 642)}, // с
        {18, Vector2f(425, 642)}, // т
        {19, Vector2f(480, 642)}, // у
        {20, Vector2f(536, 642)}, // ф
        {21, Vector2f(590, 642)}, // х
        {22, Vector2f(645, 642)}, // ц
        {23, Vector2f(700, 642)}, // ч
        {24, Vector2f(757, 642)}, // ш
        {25, Vector2f(812, 642)}, // щ
        {26, Vector2f(343, 700)}, // ь
        {27, Vector2f(397, 700)}, // ы
        {28, Vector2f(455, 700)}, // ъ
        {29, Vector2f(507, 700)}, // э
        {30, Vector2f(560, 700)}, // ю
        {31, Vector2f(618, 700)}  // я
    };

    auto it = positions.find(i);
    if (it != positions.end()) {
        cross.setPosition(it->second);
        window.draw(cross);
    }
}

void draw_gallows(int attempt, RenderWindow& window, textures& struct_texture)
{
    //рисуем виселицу в зависимости от попытки
    if (attempt >= 1) {
        window.draw(struct_texture.line[0]);
        window.draw(struct_texture.line[1]);
        window.draw(struct_texture.line[2]);
    }
    if (attempt >= 2) {
        window.draw(struct_texture.head);
        window.draw(struct_texture.line[3]);
    }
    if (attempt >= 3) {
        window.draw(struct_texture.body);
    }
    if (attempt >= 4) {
        window.draw(struct_texture.rightHand);
    }
    if (attempt >= 5) {
        window.draw(struct_texture.leftHand);
    }
    if (attempt >= 6) {
        window.draw(struct_texture.rightLeg);
    }
    if (attempt >= 7) {
        window.draw(struct_texture.leftLeg);
        window.draw(struct_texture.Sprite[4]); //рисуем geme over
    }

    //рисуем алфавит
    window.draw(struct_texture.Sprite[0]);
}


//тесты, вынести в отдельную папку и разбить на фаилы
void test() {
    test_check_byk_v_slove();
    test_create_textur();
    test_load_textur();
    test_check_byk_cord();
}

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