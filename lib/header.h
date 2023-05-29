#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream> //������
#include <clocale> //��� ��������
#include <string> //��� �����
#include <unordered_map>
#include <cassert> //��� ������
#include <typeinfo> //������ ��� ����������


using namespace sf;
using namespace std;

struct alp_flags
{
    char bukva;
    bool flag;
};

struct TextureLatterStruct
{
    char bykva;
    bool flag;
    Texture letterTexture;
    Sprite letter;
};


struct textures
{
    CircleShape head;
    RectangleShape body;
    RectangleShape rightHand;
    RectangleShape leftHand;
    RectangleShape rightLeg;
    RectangleShape leftLeg;
    RectangleShape line[4];
    Texture Texture[7];
    Sprite Sprite[7];

};

void check_byk_in_word(char Bykva, string slovo, int len, bool& flag);
void create_textur(textures& struct_texture, int n);
void load_textur(RenderWindow& window, textures& struct_texture);
void check_byk_cord(int pos_x, int pos_y, char& Bykva);
void draw_cross(int i, RenderWindow& window, Sprite& cross);
void draw_gallows(int attempt, RenderWindow& window, textures& struct_texture, int& testDrawCount);