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
            Bykva = '�';
        else if (pos_x >= 210 && pos_x <= 240)
            Bykva = '�';
        else if (pos_x >= 265 && pos_x <= 295)
            Bykva = '�';
        else if (pos_x >= 325 && pos_x <= 350)
            Bykva = '�';
        else if (pos_x >= 370 && pos_x <= 410)
            Bykva = '�';
        else if (pos_x >= 435 && pos_x <= 460)
            Bykva = '�';
        else if (pos_x >= 477 && pos_x <= 522)
            Bykva = '�';
        else if (pos_x >= 540 && pos_x <= 566)
            Bykva = '�';
        else if (pos_x >= 595 && pos_x <= 624)
            Bykva = '�';
        else if (pos_x >= 650 && pos_x <= 678)
            Bykva = '�';
        else if (pos_x >= 708 && pos_x <= 735)
            Bykva = '�';
        else if (pos_x >= 758 && pos_x <= 790)
            Bykva = '�';
        else if (pos_x >= 812 && pos_x <= 848)
            Bykva = '�';
    }
    else if (pos_y >= 640 && pos_y <= 677){
        if (pos_x >= 155 && pos_x <= 185)
            Bykva = '�';
        else if (pos_x >= 205 && pos_x <= 240)
            Bykva = '�';
        else if (pos_x >= 265 && pos_x <= 295)
            Bykva = '�';
        else if (pos_x >= 320 && pos_x <= 350)
            Bykva = '�';
        else if (pos_x >= 372 && pos_x <= 405)
            Bykva = '�';
        else if (pos_x >= 430 && pos_x <= 460)
            Bykva = '�';
        else if (pos_x >= 483 && pos_x <= 512)
            Bykva = '�';
        else if (pos_x >= 535 && pos_x <= 573)
            Bykva = '�';
        else if (pos_x >= 595 && pos_x <= 623)
            Bykva = '�';
        else if (pos_x >= 650 && pos_x <= 680)
            Bykva = '�';
        else if (pos_x >= 702 && pos_x <= 731)
            Bykva = '�';
        else if (pos_x >= 751 && pos_x <= 793)
            Bykva = '�';
        else if (pos_x >= 807 && pos_x <= 853)
            Bykva = '�';
    }
    else if (pos_y >= 700 && pos_y <= 736){
        if (pos_x >= 348 && pos_x <= 376)
            Bykva = '�';
        else if (pos_x >= 395 && pos_x <= 435)
            Bykva = '�';
        else if (pos_x >= 450 && pos_x <= 490)
            Bykva = '�';
        else if (pos_x >= 510 && pos_x <= 541)
            Bykva = '�';
        else if (pos_x >= 561 && pos_x <= 606)
            Bykva = '�';
        else if (pos_x >= 623 && pos_x <= 648)
            Bykva = '�';
    }
}

void draw_cross(int i, RenderWindow& window, Sprite& cross) {
    unordered_map<int, Vector2f> positions = {
        {0, Vector2f(152, 580)},  // �
        {1, Vector2f(210, 580)},  // �
        {2, Vector2f(262, 580)},  // �
        {3, Vector2f(315, 580)},  // �
        {4, Vector2f(372, 580)},  // �
        {5, Vector2f(427, 580)},  // �
        {6, Vector2f(482, 580)},  // �
        {7, Vector2f(539, 580)},  // �
        {8, Vector2f(593, 580)},  // �
        {9, Vector2f(647, 580)},  // �
        {10, Vector2f(700, 580)}, // �
        {11, Vector2f(757, 580)}, // �
        {12, Vector2f(812, 580)}, // �
        {13, Vector2f(150, 642)}, // �
        {14, Vector2f(207, 642)}, // �
        {15, Vector2f(260, 642)}, // �
        {16, Vector2f(315, 642)}, // �
        {17, Vector2f(372, 642)}, // �
        {18, Vector2f(425, 642)}, // �
        {19, Vector2f(480, 642)}, // �
        {20, Vector2f(536, 642)}, // �
        {21, Vector2f(590, 642)}, // �
        {22, Vector2f(645, 642)}, // �
        {23, Vector2f(700, 642)}, // �
        {24, Vector2f(757, 642)}, // �
        {25, Vector2f(812, 642)}, // �
        {26, Vector2f(343, 700)}, // �
        {27, Vector2f(397, 700)}, // �
        {28, Vector2f(455, 700)}, // �
        {29, Vector2f(507, 700)}, // �
        {30, Vector2f(560, 700)}, // �
        {31, Vector2f(618, 700)}  // �
    };

    auto it = positions.find(i);
    if (it != positions.end()) {
        cross.setPosition(it->second);
        window.draw(cross);
    }
}

void draw_gallows(int attempt, RenderWindow& window, textures& struct_texture)
{
    //������ �������� � ����������� �� �������
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
        window.draw(struct_texture.Sprite[4]); //������ geme over
    }

    //������ �������
    window.draw(struct_texture.Sprite[0]);
}


//�����, ������� � ��������� ����� � ������� �� �����
void test() {
    test_check_byk_v_slove();
    test_create_textur();
    test_load_textur();
    test_check_byk_cord();
}

void test_check_byk_v_slove() {
    char Bykva = '�';
    string slovo = "����";
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
    Bykva = '�';
    check_byk_v_slove(Bykva, slovo, 0, flag);
    assert(flag == 0);

    cout << "check_byk_v_slove() - OK" << endl;
}

void test_create_textur() {
    textures Textures;
    //��������, ��� �������� �� ��������� ��� ������ �������
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

    //�������� �������, ��� ��� ������ ������� ������� � ������� ��
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
    //���������, ��� �� ������ ������� ��� �������� �������, �����, ���� �������� ����� ���� ��� �� ����������
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

    //�������� ������� � ��������� �������
    load_textur(window, Textures);

    //��������� ������� � ������ ������ ������
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
    //�������� ������
    char Bykva = '�';
    check_byk_cord(0, 0, Bykva);
    assert(Bykva == '�');

    //��������� ����������� ��������
    Bykva = '-';
    check_byk_cord(170, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(210, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(265, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(325, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(370, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(435, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(477, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(540, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(595, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(650, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(708, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(758, 590, Bykva);
    assert(Bykva == '�');
    check_byk_cord(812, 590, Bykva);
    assert(Bykva == '�');

    check_byk_cord(155, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(205, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(265, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(320, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(372, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(430, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(483, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(535, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(595, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(650, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(702, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(751, 650, Bykva);
    assert(Bykva == '�');
    check_byk_cord(807, 650, Bykva);
    assert(Bykva == '�');

    check_byk_cord(348, 720, Bykva);
    assert(Bykva == '�');
    check_byk_cord(395, 720, Bykva);
    assert(Bykva == '�');
    check_byk_cord(450, 720, Bykva);
    assert(Bykva == '�');
    check_byk_cord(510, 720, Bykva);
    assert(Bykva == '�');
    check_byk_cord(561, 720, Bykva);
    assert(Bykva == '�');
    check_byk_cord(623, 720, Bykva);
    assert(Bykva == '�');

    //���������, ���� �������  �� �������� �����������
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