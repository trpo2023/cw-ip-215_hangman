#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream> //основа
#include <clocale> //для кирилицы
#include <string> //для строк
#include <unordered_map>
#include <cassert> //для тестов
#include <typeinfo> //узнать тип переменной


using namespace sf;
using namespace std;

struct matrix_alp
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

void check_byk_v_slove(char Bykva, string slovo, int len, bool& flag);
void create_textur(textures& struct_texture, int n);
void load_textur(RenderWindow& window, textures& struct_texture);
void check_byk_cord(int pos_x, int pos_y, char& Bykva);
void draw_cross(int i, RenderWindow& window, Sprite& cross);
void draw_gallows(int attempt, RenderWindow& window, textures& struct_texture);

void test();
void test_check_byk_v_slove();
void test_create_textur();
void test_load_textur();
void test_check_byk_cord();
void test_draw_cross();
