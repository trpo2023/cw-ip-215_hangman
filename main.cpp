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

struct TextureLatterStruct
{
    char bykva;
    bool flag;
    Texture letterTexture;
    Sprite letter;
};

struct nerazg_slovo {
    char byk;
    int cord_y = 510;
    Texture letterTexture;
    Sprite letter;
};


void check_byk_v_slove(char Bykva, string slovo, int len, nerazg_slovo nr_slovo[], bool& flag) {
    for (int i = 0; i < len; i++) {
        if (slovo[i] == Bykva) {
            nr_slovo[i].byk = Bykva;
            flag = 1;
        }
    }
    for (int i = 0; i < len; i++) {
        cout << nr_slovo[i].byk << " ";
    }
    cout << endl;
}

void load_textur(RenderWindow &window, RectangleShape &line1, RectangleShape& line2, RectangleShape& line3, RectangleShape& line4, CircleShape& head,RectangleShape& body, RectangleShape& rightHand, RectangleShape& leftHand, RectangleShape& rightLeg, RectangleShape& leftLeg, Texture& alphabetTexture, Sprite& alphabet, Texture& cross_texture, Sprite& cross) {

    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);

    line1.setFillColor(Color::Black);
    line1.setPosition(663, 406);

    line2.rotate(90.f);
    line2.setFillColor(Color::Black);
    line2.setPosition(745, 40);

    line3.setFillColor(Color::Black);
    line3.setPosition(450, 40);

    line4.rotate(90.f);
    line4.setFillColor(Color::Black);
    line4.setPosition(500, 40);

    head.setPosition(459, 95);
    head.setFillColor(Color(217, 217, 217));
    head.setOutlineThickness(3.f);
    head.setOutlineColor(Color::Black);

    body.rotate(90.f);
    body.setPosition(500, 178);
    body.setFillColor(Color::Black);

    rightHand.rotate(45.f);
    rightHand.setPosition(500, 206);
    rightHand.setFillColor(Color::Black);

    leftHand.rotate(135.f);
    leftHand.setPosition(500, 206);
    leftHand.setFillColor(Color::Black);

    rightLeg.rotate(45.f);
    rightLeg.setPosition(500, 306);
    rightLeg.setFillColor(Color::Black);

    leftLeg.rotate(135.f);
    leftLeg.setPosition(500, 306);
    leftLeg.setFillColor(Color::Black);

    alphabetTexture.loadFromFile("alphabet/Alphabet.png");

    alphabet.setTexture(alphabetTexture);
    alphabet.setPosition(143, 570);

    cross_texture.loadFromFile("alphabet/Cross.png");

    cross.setTexture(cross_texture);

}

void set_cord_slova(int len, int &slovo_cord_x) {
    if (len == 2)
        slovo_cord_x = 435;
    if (len == 3)
        slovo_cord_x = 405;
    if (len == 4)
        slovo_cord_x = 375;
    if (len == 5)
        slovo_cord_x = 345;
    if (len == 6)
        slovo_cord_x = 315;
    if (len == 7)
        slovo_cord_x = 285;
    if (len == 8)
        slovo_cord_x = 255;
    if (len == 9)
        slovo_cord_x = 225;
    if (len == 10)
        slovo_cord_x = 195;
}

void check_byk_cord(int pos_x, int pos_y, char &Bykva) {
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
    else if (pos_y >= 640 && pos_y <= 677) {
        if (pos_x >= 155 && pos_x <= 185)
        {
            Bykva = 'н';
        }
        if (pos_x >= 205 && pos_x <= 240)
        {
            Bykva = 'о';
        }
        if (pos_x >= 265 && pos_x <= 295)
        {
            Bykva = 'п';
        }
        if (pos_x >= 320 && pos_x <= 350)
        {
            Bykva = 'р';
        }
        if (pos_x >= 372 && pos_x <= 405)
        {
            Bykva = 'с';
        }
        if (pos_x >= 430 && pos_x <= 460)
        {
            Bykva = 'т';
        }
        if (pos_x >= 483 && pos_x <= 512)
        {
            Bykva = 'у';
        }
        if (pos_x >= 535 && pos_x <= 573)
        {
            Bykva = 'ф';
        }
        if (pos_x >= 595 && pos_x <= 623)
        {
            Bykva = 'х';
        }
        if (pos_x >= 650 && pos_x <= 680)
        {
            Bykva = 'ц';
        }
        if (pos_x >= 702 && pos_x <= 731)
        {
            Bykva = 'ч';
        }
        if (pos_x >= 751 && pos_x <= 793)
        {
            Bykva = 'ш';
        }
        if (pos_x >= 807 && pos_x <= 853)
        {
            Bykva = 'щ';
        }
    }
    else if (pos_y >= 700 && pos_y <= 736) {
        if (pos_x >= 348 && pos_x <= 376)
        {
            Bykva = 'ь';
        }
        if (pos_x >= 395 && pos_x <= 435)
        {
            Bykva = 'ы';
        }
        if (pos_x >= 450 && pos_x <= 490)
        {
            Bykva = 'ъ';
        }
        if (pos_x >= 510 && pos_x <= 541)
        {
            Bykva = 'э';
        }
        if (pos_x >= 561 && pos_x <= 606)
        {
            Bykva = 'ю';
        }
        if (pos_x >= 623 && pos_x <= 648)
        {
            Bykva = 'я';
        }
    }
}
int main()
{
    //русский в консоли
    setlocale(LC_CTYPE, "rus");
    const int slov_v_spiske = 3; //слов в списке
    const int max_len_slov = 10; //максимальная длина слова
    const string array_alp = "абвгдежзийклмнопрстуфхцчшщьыъэюя"; //алфавит
    matrix_alp array_flags[32]; //массив структуры с буквами и флагами, для зачеркивания

    char Bykva = '0';

    int attempt = 0; //номер попытки

    bool flag = 0; //есть ли буква в слове
    bool flag_click = 0; //нажималась ли ранее буква

    //Пути до картинок с буквами
    string path[32] = {
        "alphabet/А.png",
        "alphabet/Б.png",
        "alphabet/В.png",
        "alphabet/Г.png",
        "alphabet/Д.png",
        "alphabet/Е.png",
        "alphabet/Ж.png",
        "alphabet/З.png",
        "alphabet/И.png",
        "alphabet/Й.png",
        "alphabet/К.png",
        "alphabet/Л.png",
        "alphabet/М.png",
        "alphabet/Н.png",
        "alphabet/О.png",
        "alphabet/П.png",
        "alphabet/Р.png",
        "alphabet/С.png",
        "alphabet/Т.png",
        "alphabet/У.png",
        "alphabet/Ф.png",
        "alphabet/Х.png",
        "alphabet/Ц.png",
        "alphabet/Ч.png",
        "alphabet/Ш.png",
        "alphabet/Щ.png",
        "alphabet/Ь.png",
        "alphabet/Ы.png",
        "alphabet/Ъ.png",
        "alphabet/Э.png",
        "alphabet/Ю.png",
        "alphabet/Я.png"
    };

    //Заполнение массива флагов буквами и флагами
    for (int i = 0; i < 32; i++)
    {
        array_flags[i].bukva = array_alp[i];
        array_flags[i].flag = 0;
    }

    string spisok[slov_v_spiske] = { "лаваш", "визг", "айдамввв"};

    //Рандомно выбираем слово из списка
    string slovo = spisok[0]; // потом поменять на случайное слово
    //slovo = spisok[rand() % 3];
    
    //Посчитаем длину слова
    int len = 0;
    while (slovo[len] != NULL) {
        len++;
    }

    if (len > 12) {
        return 1;
    }

    int slovo_cord_x=0;
    //устанавливаем начальные координаты для выводимого слова
    set_cord_slova(len, slovo_cord_x);

    //Создаем массив неразгаданного слова
    nerazg_slovo nr_slovo[max_len_slov], underline;
    for (int i = 0; i < len; i++) {
        nr_slovo[i].byk = '_';
    }
    underline.letterTexture.loadFromFile("alphabet/underine.png");
    underline.letter.setTexture(underline.letterTexture);


    //Массив структуры слова, которая будет выводиться на экран
    TextureLatterStruct NeSlovo[max_len_slov];

    //Записываем буквы нашего слова, чтобы потом загрузить их как текстуру и вывести на экран
    for (int i = 0; i < len; i++)
    {
        NeSlovo[i].bykva = slovo[i];
    }

    //Загружаем спрайт буквы, которая есть у нас в слове
    for (int i = 0; i < len; i++) {
        int j = 0;
        while (j <33)
        {
            if (NeSlovo[i].bykva == array_alp[j]) {
                NeSlovo[i].letterTexture.loadFromFile(path[j]); //загружаем букву из картинки
                NeSlovo[i].letter.setTexture(NeSlovo[i].letterTexture);
                NeSlovo[i].flag = 0; //Чтобы не выводились буквы, котрые еще не нажимались
                break;
            }
            j++;
        }
        
    }

    RenderWindow window(VideoMode(1000, 800), L"Виселица", Style::Default);
    RectangleShape line1(Vector2f(157.f, 7.f));
    RectangleShape line2(Vector2f(366.f, 7.f));
    RectangleShape line3(Vector2f(295.f, 7.f));
    RectangleShape line4(Vector2f(55.f, 2.f));
    CircleShape head(41.f); 
    RectangleShape body(Vector2f(130.f, 3.f));
    RectangleShape rightHand(Vector2f(70.f, 3.f));
    RectangleShape leftHand(Vector2f(70.f, 3.f));
    RectangleShape rightLeg(Vector2f(70.f, 3.f));
    RectangleShape leftLeg(Vector2f(70.f, 3.f));
    //Алфавит одной картинкой
    Texture alphabetTexture;
    Sprite alphabet;
    //крестик
    Texture cross_texture;
    Sprite cross;

    load_textur(window, line1, line2, line3, line4, head, body, rightHand, 
        leftHand, rightLeg, leftLeg, alphabetTexture , alphabet, cross_texture, cross);


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

            //рисуем виселицу в зависимости от попытки
            if (attempt >= 1) {
                window.draw(line1);
                window.draw(line2);
                window.draw(line3);
            }
            if (attempt >= 2) {
                window.draw(head);
                window.draw(line4);
            }
            if (attempt >= 3) {
                window.draw(body);
            }
            if (attempt >= 4) {
                window.draw(rightHand);
            }
            if (attempt >= 5) {
                window.draw(leftHand);
            }
            if (attempt >= 6) {
                window.draw(rightLeg);
            }
            if (attempt >= 7) {
                window.draw(leftLeg);
            }

            //рисуем алфавит
            window.draw(alphabet);

            //рисуем уже нажатые правильные буквы
            for (int i = 0, cordx = slovo_cord_x; i < len; i++)
            {
                underline.letter.setPosition(cordx,underline.cord_y);
                window.draw(underline.letter);
                cordx += 60;
                if (NeSlovo[i].flag == 1) {
                    window.draw(NeSlovo[i].letter);
                }
            }

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
                            //////
                        case(13): //н
                            cross.setPosition(150, 642);
                            window.draw(cross);
                            break;
                        case(14): //о
                            cross.setPosition(207, 642);
                            window.draw(cross);
                            break;
                        case(15): //п
                            cross.setPosition(260, 642);
                            window.draw(cross);
                            break;
                        case(16): //р
                            cross.setPosition(315, 642);
                            window.draw(cross);
                            break;
                        case(17): //с
                            cross.setPosition(372, 642);
                            window.draw(cross);
                            break;
                        case(18): //т
                            cross.setPosition(425, 642);
                            window.draw(cross);
                            break;
                        case(19): //у
                            cross.setPosition(480, 642);
                            window.draw(cross);
                            break;
                        case(20): //ф
                            cross.setPosition(536, 642);
                            window.draw(cross);
                            break;
                        case(21): //х
                            cross.setPosition(590, 642);
                            window.draw(cross);
                            break;
                        case(22): //ц
                            cross.setPosition(645, 642);
                            window.draw(cross);
                            break;
                        case(23): //ч
                            cross.setPosition(700, 642);
                            window.draw(cross);
                            break;
                        case(24): //ш
                            cross.setPosition(757, 642);
                            window.draw(cross);
                            break;
                        case(25): //щ
                            cross.setPosition(812, 642);
                            window.draw(cross);
                            break;
                            ////////
                        case(26): //ь
                            cross.setPosition(343, 700);
                            window.draw(cross);
                            break;
                        case(27): //ы
                            cross.setPosition(397, 700);
                            window.draw(cross);
                            break;
                        case(28): //ъ
                            cross.setPosition(455, 700);
                            window.draw(cross);
                            break;
                        case(29): //э
                            cross.setPosition(507, 700);
                            window.draw(cross);
                            break;
                        case(30): //ю
                            cross.setPosition(560, 700);
                            window.draw(cross);
                            break;
                        case(31): //я
                            cross.setPosition(618, 700);
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

                //обнуление проверки буквы в слове
                flag = 0;
                flag_click = 0;

                cout << "Po x:" << position.x << endl;
                cout << "Po y:" << position.y << endl;

                //Проверка на какую букву нажали на первом ряду

                check_byk_cord(pos_x, pos_y, Bykva);

                //Чтобы висилица не рисовалась при нажатии на зачеркнутую букву
                for (int i = 0; i < 32; i++)
                {
                    if (array_flags[i].bukva == Bykva && array_flags[i].flag == 1) {
                        flag_click = 1;
                    }
                }

                //Меняем флаг буквы, если она была нажата
                for (int i = 0; i < 32; i++)
                {
                    if (array_flags[i].bukva == Bykva) {
                        array_flags[i].flag = 1;
                    } 
                }

                //проверка буквы в слове
                check_byk_v_slove(Bykva, slovo, len, nr_slovo, flag);

                //если буквы нет и она раньше не нажималась, то количество попыток увеличивоется
                if (flag==0 && flag_click==0 && Bykva!='0') {
                    attempt++;
                }

                const int cord_y = 460; //координаты рисующихся букв по y

                //Если буква есть в слове, то мы даем координаты в следующем цикле она нарисуется
                if (flag==1 && flag_click==0) {
                    for (int i = 0, cord_x= slovo_cord_x-10; i < len; i++) {
                        if (NeSlovo[i].bykva == Bykva) {
                            NeSlovo[i].letter.setPosition(cord_x, cord_y);
                            NeSlovo[i].flag = 1;
                        }
                        cord_x += 60;
                    }
                }
                
            }
            window.display();
        }
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
    }
    return 0;
}

