#include "test.h"

void check_byk_v_slove(char Bykva, string slovo, int len, bool& flag) {
    for (int i = 0; i < len; i++) {
        if (slovo[i] == Bykva) {
            flag = 1;
        }
    }
}

void create_textur(textures& struct_texture, int n)
{
    switch (n) {
    case 0: {
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 1: {
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 2: {
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 3: {
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 4: {
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 5: {
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 6: {
        struct_texture.Texture[n] = Texture();
        struct_texture.Sprite[n] = Sprite();
        break;
    }
    case 7: {
        struct_texture.line[n - 7] = RectangleShape(Vector2f(157.f, 7.f));
        break;
    }
    case 8: {
        struct_texture.line[n - 7] = RectangleShape(Vector2f(366.f, 7.f));
        break;
    }
    case 9: {
        struct_texture.line[n - 7] = RectangleShape(Vector2f(295.f, 7.f));
        break;
    }
    case 10: {
        struct_texture.line[n - 7] = RectangleShape(Vector2f(55.f, 2.f));
        break;
    }
    case 11: {
        struct_texture.head = CircleShape(41.f);
        break;
    }
    case 12: {
        struct_texture.body = RectangleShape(Vector2f(130.f, 3.f));
        break;
    }
    case 13: {
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

    struct_texture.Texture[0].loadFromFile("../img/Alphabet.png");
    struct_texture.Sprite[0].setTexture(struct_texture.Texture[0]);
    struct_texture.Sprite[0].setPosition(143, 570);

    struct_texture.Texture[1].loadFromFile("../img/Cross.png");
    struct_texture.Sprite[1].setTexture(struct_texture.Texture[1]);

    struct_texture.Texture[2].loadFromFile("../img/underline.png");
    struct_texture.Sprite[2].setTexture(struct_texture.Texture[2]);

    struct_texture.Texture[3].loadFromFile("../img/You win.png");
    struct_texture.Sprite[3].setTexture(struct_texture.Texture[3]);
    struct_texture.Sprite[3].setPosition(10, 100);

    struct_texture.Texture[4].loadFromFile("../img/game over.png");
    struct_texture.Sprite[4].setTexture(struct_texture.Texture[4]);
    struct_texture.Sprite[4].setPosition(10, 100);

    struct_texture.Texture[5].loadFromFile("../img/menu.png");
    struct_texture.Sprite[5].setTexture(struct_texture.Texture[5]);
    struct_texture.Sprite[5].setPosition(0, 0);

    struct_texture.Texture[6].loadFromFile("../img/background.png");
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
    if (pos_y >= 580 && pos_y <= 615) {
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
    else if (pos_y >= 640 && pos_y <= 677) {
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
    else if (pos_y >= 700 && pos_y <= 736) {
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

void draw_gallows(int attempt, RenderWindow& window, textures& struct_texture, int& testDrawCount)
{
    //рисуем виселицу в зависимости от попытки
    if (attempt >= 1) {
        window.draw(struct_texture.line[0]);
        window.draw(struct_texture.line[1]);
        window.draw(struct_texture.line[2]);
        testDrawCount += 3;
    }
    if (attempt >= 2) {
        window.draw(struct_texture.head);
        window.draw(struct_texture.line[3]);
        testDrawCount += 2;
    }
    if (attempt >= 3) {
        window.draw(struct_texture.body);
        testDrawCount += 1;
    }
    if (attempt >= 4) {
        window.draw(struct_texture.rightHand);
        testDrawCount += 1;
    }
    if (attempt >= 5) {
        window.draw(struct_texture.leftHand);
        testDrawCount += 1;
    }
    if (attempt >= 6) {
        window.draw(struct_texture.rightLeg);
        testDrawCount += 1;
    }
    if (attempt >= 7) {
        window.draw(struct_texture.leftLeg);
        window.draw(struct_texture.Sprite[4]); //рисуем geme over
        testDrawCount += 2;
    }

    //рисуем алфавит
    window.draw(struct_texture.Sprite[0]);
    testDrawCount += 1;
}


