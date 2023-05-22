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
    switch (n)
    {
    case(0):
    {
        Texture alphabetTexture;
        Sprite alphabet;
        struct_texture.Texture[n] = alphabetTexture;
        struct_texture.Sprite[n] = alphabet;
        break;
    }
    case(1):
    {
        Texture cross_texture;
        Sprite cross;
        struct_texture.Texture[n] = cross_texture;
        struct_texture.Sprite[n] = cross;
        break;
    }
    case(2):
    {
        Texture underline_texture;
        Sprite underline;
        struct_texture.Texture[n] = underline_texture;
        struct_texture.Sprite[n] = underline;
        break;
    }
    case(3):
    {
        Texture win_texture;
        Sprite win;
        struct_texture.Texture[n] = win_texture;
        struct_texture.Sprite[n] = win;
        break;
    }
    case(4):
    {
        Texture lose_texture;
        Sprite lose;
        struct_texture.Texture[n] = lose_texture;
        struct_texture.Sprite[n] = lose;
        break;
    }
    case(5):
    {
        Texture menu_texture;
        Sprite menu;
        struct_texture.Texture[n] = menu_texture;
        struct_texture.Sprite[n] = menu;
        break;
    }
    case(6):
    {
        RectangleShape line(Vector2f(157.f, 7.f));
        struct_texture.line[n - 6] = line;
        break;
    }
    case(7):
    {
        RectangleShape line(Vector2f(366.f, 7.f));
        struct_texture.line[n - 6] = line;
        break;
    }
    case(8):
    {
        RectangleShape line(Vector2f(295.f, 7.f));
        struct_texture.line[n - 6] = line;
        break;
    }
    case(9):
    {
        RectangleShape line(Vector2f(55.f, 2.f));
        struct_texture.line[n - 6] = line;
        break;
    }
    case(10):
    {
        CircleShape head(41.f);
        struct_texture.head = head;
        break;
    }
    case(11):
    {
        RectangleShape body(Vector2f(130.f, 3.f));
        struct_texture.body = body;
        break;
    }
    case(12):
    {
        RectangleShape righthand(Vector2f(70.f, 3.f));
        RectangleShape lefthand;
        RectangleShape rightleg;
        RectangleShape leftleg;
        lefthand = rightleg = leftleg = righthand;
        struct_texture.rightHand = righthand;
        struct_texture.leftHand = lefthand;
        struct_texture.rightLeg = rightleg;
        struct_texture.leftLeg = leftleg;
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

    for (int i = 0; i < 10; i++)
    {
        switch (i)
        {
        case(0):
        {
            struct_texture.Texture[i].loadFromFile("img/Alphabet.png");
            struct_texture.Sprite[i].setTexture(struct_texture.Texture[i]);
            struct_texture.Sprite[i].setPosition(143, 570);
            break;
        }
        case(1):
        {
            struct_texture.Texture[i].loadFromFile("img/Cross.png");
            struct_texture.Sprite[i].setTexture(struct_texture.Texture[i]);
            break;
        }
        case(2):
        {
            struct_texture.Texture[i].loadFromFile("img/underline.png");
            struct_texture.Sprite[i].setTexture(struct_texture.Texture[i]);
            break;
        }
        case(3):
        {
            struct_texture.Texture[i].loadFromFile("img/You win.png");
            struct_texture.Sprite[i].setTexture(struct_texture.Texture[i]);
            struct_texture.Sprite[i].setPosition(10, 100);
            break;
        }
        case(4):
        {
            struct_texture.Texture[i].loadFromFile("img/game over.png");
            struct_texture.Sprite[i].setTexture(struct_texture.Texture[i]);
            struct_texture.Sprite[i].setPosition(10, 100);
            break;
        }
        case(5):
        {
            struct_texture.Texture[i].loadFromFile("img/menu.png");
            struct_texture.Sprite[i].setTexture(struct_texture.Texture[i]);
            struct_texture.Sprite[i].setPosition(0, 0); // kuimgfbvcs
            break;
        }
        case(6):
        {
            struct_texture.line[i - 6].setFillColor(Color::Black);
            struct_texture.line[i - 6].setPosition(663, 406);
            break;
        };
        case(7):
        {
            struct_texture.line[i - 6].rotate(90.f);
            struct_texture.line[i - 6].setFillColor(Color::Black);
            struct_texture.line[i - 6].setPosition(745, 40);
            break;
        };
        case(8):
        {
            struct_texture.line[i - 6].setFillColor(Color::Black);
            struct_texture.line[i - 6].setPosition(450, 40);
            break;
        };
        case(9):
        {
            struct_texture.line[i - 6].rotate(90.f);
            struct_texture.line[i - 6].setFillColor(Color::Black);
            struct_texture.line[i - 6].setPosition(500, 40);
            break;
        };
        default:
            break;
        }
    }

}

void check_byk_cord(int pos_x, int pos_y, char& Bykva) {
    if (pos_y >= 580 && pos_y <= 615) {
        if (pos_x >= 155 && pos_x <= 185) {
            Bykva = '�';
        }
        else if (pos_x >= 210 && pos_x <= 240) {
            Bykva = '�';
        }
        else if (pos_x >= 265 && pos_x <= 295) {
            Bykva = '�';
        }
        else if (pos_x >= 325 && pos_x <= 350) {
            Bykva = '�';
        }
        else if (pos_x >= 370 && pos_x <= 410) {
            Bykva = '�';
        }
        else if (pos_x >= 435 && pos_x <= 460) {
            Bykva = '�';
        }
        else if (pos_x >= 477 && pos_x <= 522) {
            Bykva = '�';
        }
        else if (pos_x >= 540 && pos_x <= 566) {
            Bykva = '�';
        }
        else if (pos_x >= 595 && pos_x <= 624) {
            Bykva = '�';
        }
        else if (pos_x >= 650 && pos_x <= 678) {
            Bykva = '�';
        }
        else if (pos_x >= 708 && pos_x <= 735) {
            Bykva = '�';
        }
        else if (pos_x >= 758 && pos_x <= 790) {
            Bykva = '�';
        }
        else if (pos_x >= 812 && pos_x <= 848) {
            Bykva = '�';
        }
    }
    else if (pos_y >= 640 && pos_y <= 677) {
        if (pos_x >= 155 && pos_x <= 185) {
            Bykva = '�';
        }
        else if (pos_x >= 205 && pos_x <= 240) {
            Bykva = '�';
        }
        else if (pos_x >= 265 && pos_x <= 295) {
            Bykva = '�';
        }
        else if (pos_x >= 320 && pos_x <= 350) {
            Bykva = '�';
        }
        else if (pos_x >= 372 && pos_x <= 405) {
            Bykva = '�';
        }
        else if (pos_x >= 430 && pos_x <= 460) {
            Bykva = '�';
        }
        else if (pos_x >= 483 && pos_x <= 512) {
            Bykva = '�';
        }
        else if (pos_x >= 535 && pos_x <= 573) {
            Bykva = '�';
        }
        else if (pos_x >= 595 && pos_x <= 623) {
            Bykva = '�';
        }
        else if (pos_x >= 650 && pos_x <= 680) {
            Bykva = '�';
        }
        else if (pos_x >= 702 && pos_x <= 731) {
            Bykva = '�';
        }
        else if (pos_x >= 751 && pos_x <= 793) {
            Bykva = '�';
        }
        else if (pos_x >= 807 && pos_x <= 853) {
            Bykva = '�';
        }
    }
    else if (pos_y >= 700 && pos_y <= 736) {
        if (pos_x >= 348 && pos_x <= 376) {
            Bykva = '�';
        }
        else if (pos_x >= 395 && pos_x <= 435) {
            Bykva = '�';
        }
        else if (pos_x >= 450 && pos_x <= 490) {
            Bykva = '�';
        }
        else if (pos_x >= 510 && pos_x <= 541) {
            Bykva = '�';
        }
        else if (pos_x >= 561 && pos_x <= 606) {
            Bykva = '�';
        }
        else if (pos_x >= 623 && pos_x <= 648) {
            Bykva = '�';
        }
    }
}

void draw_cross(int i, RenderWindow& window, Sprite& cross) {
    switch (i) {
    case(0): //�
        cross.setPosition(152, 580);
        break;
    case(1): //�
        cross.setPosition(210, 580);
        break;
    case(2): //�
        cross.setPosition(262, 580);
        break;
    case(3): //�
        cross.setPosition(315, 580);
        break;
    case(4): //�
        cross.setPosition(372, 580);
        break;
    case(5): //�
        cross.setPosition(427, 580);
        break;
    case(6): //�
        cross.setPosition(482, 580);
        break;
    case(7): //�
        cross.setPosition(539, 580);
        break;
    case(8): //�
        cross.setPosition(593, 580);
        break;
    case(9): //�
        cross.setPosition(647, 580);
        break;
    case(10): //�
        cross.setPosition(700, 580);
        break;
    case(11): //�
        cross.setPosition(757, 580);
        break;
    case(12): //�
        cross.setPosition(812, 580);
        break;
        //////
    case(13): //�
        cross.setPosition(150, 642);
        break;
    case(14): //�
        cross.setPosition(207, 642);
        break;
    case(15): //�
        cross.setPosition(260, 642);
        break;
    case(16): //�
        cross.setPosition(315, 642);
        break;
    case(17): //�
        cross.setPosition(372, 642);
        break;
    case(18): //�
        cross.setPosition(425, 642);
        break;
    case(19): //�
        cross.setPosition(480, 642);
        break;
    case(20): //�
        cross.setPosition(536, 642);
        break;
    case(21): //�
        cross.setPosition(590, 642);
        break;
    case(22): //�
        cross.setPosition(645, 642);
        break;
    case(23): //�
        cross.setPosition(700, 642);
        break;
    case(24): //�
        cross.setPosition(757, 642);
        break;
    case(25): //�
        cross.setPosition(812, 642);
        break;
        ////////
    case(26): //�
        cross.setPosition(343, 700);
        break;
    case(27): //�
        cross.setPosition(397, 700);
        break;
    case(28): //�
        cross.setPosition(455, 700);
        break;
    case(29): //�
        cross.setPosition(507, 700);
        break;
    case(30): //�
        cross.setPosition(560, 700);
        break;
    case(31): //�
        cross.setPosition(618, 700);
        break;
    default:
        break;
    }
    window.draw(cross);
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