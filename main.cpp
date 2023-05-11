#include <SFML/Graphics.hpp>
#include <iostream> //основа
#include <clocale> //для кирилицы
#include <string> //для строк


using namespace sf;
using namespace std;

struct matrix_alp
{
    char bukva;
    bool flag;
};


void check_byk_v_slove(char Bykva, string slovo, int len);

int main()
{
    setlocale(LC_CTYPE, "rus");
    const int slov_v_spiske = 3;
    string array_alp = "абвгдежзийклмнопрстуфхцчшщъыьэюя";
    matrix_alp array_flags[32];
    char Bykva;

    //Заполнение массива флагов буквами и флагами
    for (int i = 0; i < 32; i++)
    {
        array_flags[i].bukva = array_alp[i];
        array_flags[i].flag = 0;
    }
    string spisok[slov_v_spiske] = { "лава", "визг", "айда"};

    //Рандомно выбираем слово из списка
    string slovo = spisok[0]; // потом поменять на случайное слово
    //slovo = spisok[rand() % 3];
    
    //Посчитаем длину слова
    int len = 0;
    while (slovo[len] != NULL) {
        len++;
    }

    RenderWindow window(VideoMode(1000, 800), L"Висилица", Style::Default);
    window.setFramerateLimit(60);

    window.setVerticalSyncEnabled(true);
    int flag = 0;

    RectangleShape line1(Vector2f(157.f, 7.f));
    line1.setFillColor(Color::Black);
    line1.setPosition(663, 456);

    RectangleShape line2(Vector2f(366.f, 7.f));
    line2.rotate(90.f);
    line2.setFillColor(Color::Black);
    line2.setPosition(745, 90);

    RectangleShape line3(Vector2f(295.f, 7.f));
    line3.setFillColor(Color::Black);
    line3.setPosition(450, 90);

    RectangleShape line4(Vector2f(55.f, 2.f));
    line4.rotate(90.f);
    line4.setFillColor(Color::Black);
    line4.setPosition(500, 90);

    CircleShape head(41.f);
    head.setPosition(459, 145);
    head.setFillColor(Color(217, 217, 217));
    head.setOutlineThickness(3.f);
    head.setOutlineColor(Color::Black);

    RectangleShape body(Vector2f(130.f, 3.f));
    body.rotate(90.f);
    body.setPosition(500, 228);
    body.setFillColor(Color::Black);

    RectangleShape rightHand(Vector2f(70.f, 3.f));
    rightHand.rotate(45.f);
    rightHand.setPosition(500, 256);
    rightHand.setFillColor(Color::Black);

    RectangleShape leftHand(Vector2f(70.f, 3.f));
    leftHand.rotate(135.f);
    leftHand.setPosition(500, 256);
    leftHand.setFillColor(Color::Black);

    RectangleShape rightLeg(Vector2f(70.f, 3.f));
    rightLeg.rotate(45.f);
    rightLeg.setPosition(500, 356);
    rightLeg.setFillColor(Color::Black);

    RectangleShape leftLeg(Vector2f(70.f, 3.f));
    leftLeg.rotate(135.f);
    leftLeg.setPosition(500, 356);
    leftLeg.setFillColor(Color::Black);

    //Алфавит одной картинкой
    Texture alphabetTexture;
    alphabetTexture.loadFromFile("alphabet/Alphabet.png");

    Sprite alphabet;
    alphabet.setTexture(alphabetTexture);
    alphabet.setPosition(143, 570);

    Texture cross_texture;
    cross_texture.loadFromFile("alphabet/Cross.png");

    Sprite cross;
    cross.setTexture(cross_texture);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            switch (event.type){
                case(Event::Closed):
                    window.close();
                    break;
                case(Event::KeyPressed):

                    break;
                default:
                    break;
            }
            //очищаем окно и заливаем нужным цветом;
            window.clear(Color(217, 217, 217));

            //рисуем виселицу
            window.draw(line1);
            window.draw(line2);
            window.draw(line3);
            window.draw(line4);
            window.draw(head);
            window.draw(body);
            window.draw(rightHand);
            window.draw(leftHand);
            window.draw(rightLeg);
            window.draw(leftLeg);


            window.draw(alphabet);

            // Зачеркиваем букву, у которой флаг 1, т.е она уже ранее нажималась
            for (int i = 0; i < 32; i++)
            {
                if (array_flags[i].flag == 1)
                {
                    switch (i) {
                        case(0): //а
                            cross.setPosition(152, 580);
                            window.draw(cross);
                            break;
                        case(1): //б
                            cross.setPosition(210, 580);
                            window.draw(cross);
                            break;
                        case(2): //в
                            cross.setPosition(262, 580);
                            window.draw(cross);
                            break;
                        case(3): //г
                            cross.setPosition(315, 580);
                            window.draw(cross);
                            break;
                        case(4): //д
                            cross.setPosition(372, 580);
                            window.draw(cross);
                            break;
                        case(5): //е
                            cross.setPosition(427, 580);
                            window.draw(cross);
                            break;
                        case(6): //ж
                            cross.setPosition(482, 580);
                            window.draw(cross);
                            break;
                        case(7): //з
                            cross.setPosition(539, 580);
                            window.draw(cross);
                            break;
                        case(8): //и
                            cross.setPosition(593, 580);
                            window.draw(cross);
                            break;
                        case(9): //й
                            cross.setPosition(647, 580);
                            window.draw(cross);
                            break;
                        case(10): //к
                            cross.setPosition(700, 580);
                            window.draw(cross);
                            break;
                        case(11): //л
                            cross.setPosition(757, 580);
                            window.draw(cross);
                            break;
                        case(12): //м
                            cross.setPosition(812, 580);
                            window.draw(cross);
                            break;
                        default:
                            break;
                    }
                }
            }

            // Проверка нажатия на нужную букву
            Vector2i position = Mouse::getPosition(window);
            if (Mouse::isButtonPressed(Mouse::Left)) {

                int pos_x = position.x; //сохраняем координаты мышки по x
                int pos_y = position.y; //сохраняем координаты мышки по y

                cout << "Po x:" << position.x << endl;
                cout << "Po y:" << position.y << endl;

                //Проверка на какую букву нажали на первом ряду
                if (pos_y >= 580 && pos_y <= 615) {

                    if (pos_x >= 155 && pos_x <= 185)
                    {
                        Bykva = 'а';
                    }
                    if (pos_x >= 210 && pos_x <= 240) 
                    {
                        Bykva = 'б';
                    }
                    if (pos_x >= 265 && pos_x <= 295) 
                    {
                        Bykva = 'в';
                    }
                    if (pos_x >= 325 && pos_x <= 350)
                    {
                        Bykva = 'г';
                    }
                    if (pos_x >= 370 && pos_x <= 410)
                    {
                        Bykva = 'д';
                    }
                    if (pos_x >= 435 && pos_x <= 460)
                    {
                        Bykva = 'е';
                    }
                    if (pos_x >= 477 && pos_x <= 522)
                    {
                        Bykva = 'ж';
                    }
                    if (pos_x >= 540 && pos_x <= 566)
                    {
                        Bykva = 'з';
                    }
                    if (pos_x >= 595 && pos_x <= 624)
                    {
                        Bykva = 'и';
                    }
                    if (pos_x >= 650 && pos_x <= 678)
                    {
                        Bykva = 'й';
                    }
                    if (pos_x >= 708 && pos_x <= 735)
                    {
                        Bykva = 'к';
                    }
                    if (pos_x >= 758 && pos_x <= 790)
                    {
                        Bykva = 'л';
                    }
                    if (pos_x >= 812 && pos_x <= 848)
                    {
                        Bykva = 'м';
                    }    
                }
                cout << Bykva;

                //Меняем флаг буквы, если она была нажата
                for (int i = 0; i < 32; i++)
                {
                    
                    if (array_flags[i].bukva == Bykva) {
                        array_flags[i].flag = 1;
                    }
                    
                }

            }
            

            window.display();
        }

        
    }
    return 0;
}

void check_byk_v_slove(char Bykva, string slovo, int len) {
    bool flag = 0;
    for (int i = 0; i < len; i++) {
        if (slovo[i] == Bykva) {
            flag = 1;
        }
    }
    if (flag != 0) {
        cout << "Такая буква есть" << endl;
    }
    else {
        cout << "Такой буквы нет" << endl;
    }

}