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


struct textures
{
    CircleShape head;
    RectangleShape body;
    RectangleShape rightHand;
    RectangleShape leftHand;
    RectangleShape rightLeg;
    RectangleShape leftLeg;
    RectangleShape line[4];
    Texture Texture[6];
    Sprite Sprite[6];

};


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

void draw_cross(int i, RenderWindow& window, Sprite& cross) {
    switch (i) {
    case(0): //а
        cross.setPosition(152, 580);
        break;
    case(1): //б
        cross.setPosition(210, 580);
        break;
    case(2): //в
        cross.setPosition(262, 580);
        break;
    case(3): //г
        cross.setPosition(315, 580);
        break;
    case(4): //д
        cross.setPosition(372, 580);
        break;
    case(5): //е
        cross.setPosition(427, 580);
        break;
    case(6): //ж
        cross.setPosition(482, 580);
        break;
    case(7): //з
        cross.setPosition(539, 580);
        break;
    case(8): //и
        cross.setPosition(593, 580);
        break;
    case(9): //й
        cross.setPosition(647, 580);
        break;
    case(10): //к
        cross.setPosition(700, 580);
        break;
    case(11): //л
        cross.setPosition(757, 580);
        break;
    case(12): //м
        cross.setPosition(812, 580);
        break;
        //////
    case(13): //н
        cross.setPosition(150, 642);
        break;
    case(14): //о
        cross.setPosition(207, 642);
        break;
    case(15): //п
        cross.setPosition(260, 642);
        break;
    case(16): //р
        cross.setPosition(315, 642);
        break;
    case(17): //с
        cross.setPosition(372, 642);
        break;
    case(18): //т
        cross.setPosition(425, 642);
        break;
    case(19): //у
        cross.setPosition(480, 642);
        break;
    case(20): //ф
        cross.setPosition(536, 642);
        break;
    case(21): //х
        cross.setPosition(590, 642);
        break;
    case(22): //ц
        cross.setPosition(645, 642);
        break;
    case(23): //ч
        cross.setPosition(700, 642);
        break;
    case(24): //ш
        cross.setPosition(757, 642);
        break;
    case(25): //щ
        cross.setPosition(812, 642);
        break;
        ////////
    case(26): //ь
        cross.setPosition(343, 700);
        break;
    case(27): //ы
        cross.setPosition(397, 700);
        break;
    case(28): //ъ
        cross.setPosition(455, 700);
        break;
    case(29): //э
        cross.setPosition(507, 700);
        break;
    case(30): //ю
        cross.setPosition(560, 700);
        break;
    case(31): //я
        cross.setPosition(618, 700);
        break;
    default:
        break;
    }
    window.draw(cross);
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

int main()
{
    //русский в консоли
    setlocale(LC_CTYPE, "rus");
    //const int slov_v_spiske = 3; //слов в списке
    const int max_len_slov = 11; //максимальная длина слова
    const string array_alp = "абвгдежзийклмнопрстуфхцчшщьыъэюя"; //алфавит
    matrix_alp array_flags[32]; //массив структуры с буквами и флагами, для зачеркивания
    textures textures; //структура с текстурами и спрайтами элементов

    char Bykva = '0';
    int right_try = 0, attempt = 0; //номер удачной попытки и обычной

    bool flag = 0; //есть ли буква в слове
    bool flag_click = 0; //нажималась ли ранее буква

    //Пути до картинок с буквами
    string path[32] = {
        "img/А.png",
        "img/Б.png",
        "img/В.png",
        "img/Г.png",
        "img/Д.png",
        "img/Е.png",
        "img/Ж.png",
        "img/З.png",
        "img/И.png",
        "img/Й.png",
        "img/К.png",
        "img/Л.png",
        "img/М.png",
        "img/Н.png",
        "img/О.png",
        "img/П.png",
        "img/Р.png",
        "img/С.png",
        "img/Т.png",
        "img/У.png",
        "img/Ф.png",
        "img/Х.png",
        "img/Ц.png",
        "img/Ч.png",
        "img/Ш.png",
        "img/Щ.png",
        "img/Ь.png",
        "img/Ы.png",
        "img/Ъ.png",
        "img/Э.png",
        "img/Ю.png",
        "img/Я.png"
    };

    //Заполнение массива флагов буквами и флагами
    for (int i = 0; i < 32; i++)
    {
        array_flags[i].bukva = array_alp[i];
        array_flags[i].flag = 0;
    }

    string spisok[] = { "лаваш", "визг", "перфоратор", "переключатель", "лесоводство", "футбол", "волейбол", "разработчик", "фаренгейт" };

    //Рандомно выбираем слово из списка
    string slovo = spisok[8]; // потом поменять на случайное слово
    //slovo = spisok[rand() % 3];

    //Посчитаем длину слова
    int len = 0;
    while (slovo[len] != NULL) {
        len++;
    }

    if (len >= max_len_slov) {
        return 1;
    }

    int slovo_cord_x = 0;
    //устанавливаем начальные координаты для выводимого слова
    slovo_cord_x = 495 - 30 * len;

    //Массив структуры слова, которая будет выводиться на экран
    TextureLatterStruct NeSlovo[max_len_slov];

    //Записываем буквы нашего слова, чтобы потом загрузить их как текстуру и вывести на экран
    for (int i = 0; i < len; i++) {
        NeSlovo[i].bykva = slovo[i];
    }

    //Загружаем спрайт буквы, которая есть у нас в слове
    for (int i = 0; i < len; i++) {
        int j = 0;
        while (j < 33)
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

    //Создание всех текстур и спрайтов
    RenderWindow window(VideoMode(1000, 800), L"Виселица", Style::Close);
    for (int i = 0; i < 13; i++) {
        create_textur(textures, i);
    }
    load_textur(window, textures);

    int button = 0;
    bool back_flag = 0;
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            switch (event.type) {
            case(Event::Closed):
                window.close();
                break;
            case(Event::KeyPressed):
                if (event.key.code == Keyboard::Escape) { window.close(); }
                break;
            default:
                break;
            }
            //очищаем окно и заливаем нужным цветом;
            window.clear(Color(217, 217, 217));
            switch (button) 
            {
                case(0):
                {
                    window.draw(textures.Sprite[5]);
                    Vector2i position = Mouse::getPosition(window);
                    if (Mouse::isButtonPressed(Mouse::Left)) {
                        int pos_x = position.x; //сохраняем координаты мышки по x
                        int pos_y = position.y; //сохраняем координаты мышки по y
                        cout << "Po x:" << pos_x << endl;
                        cout << "Po y:" << pos_y << endl;
                        if ((pos_x >= 250) && (pos_x <= 750) && (pos_y >= 350) && (pos_y <= 460))
                        {
                            button = 1;
                        }
                        else if ((pos_x >= 250) && (pos_x <= 750) && (pos_y >= 514) && (pos_y <= 621)) {
                            button = 2;
                        }
                    }
                    window.display();
                    break;
                }
                case(1):
                {
                    //рисуем бекграунд
                    if (back_flag == 0)
                    {
                        textures.Texture[5].loadFromFile("img/background.png");
                        textures.Sprite[5].setTexture(textures.Texture[5]);
                        textures.Sprite[5].setPosition(0, 0); // kuimgfbvcs
                    }

                    window.draw(textures.Sprite[5]);
                    //рисуем виссилицу
                    draw_gallows(attempt, window, textures);

                    //рисуем уже нажатые правильные буквы
                    for (int i = 0, cordx = slovo_cord_x; i < len; i++)
                    {
                        textures.Sprite[2].setPosition(cordx, 510);
                        window.draw(textures.Sprite[2]);
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
                            draw_cross(i, window, textures.Sprite[1]);
                        }
                    }

                    if (right_try >= len) {
                        window.draw(textures.Sprite[3]);
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

                        //Проверка на какую букву нажали 
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
                        check_byk_v_slove(Bykva, slovo, len, flag);

                        //если буквы нет и она раньше не нажималась, то количество попыток увеличивоется
                        if (flag == 0 && flag_click == 0 && Bykva != '0') {
                            attempt++;
                        }

                        const int cord_y = 460; //координаты рисующихся букв по y

                        //Если буква есть в слове, то мы даем координаты в следующем цикле она нарисуется
                        if (flag == 1 && flag_click == 0)
                        {
                            for (int i = 0, cord_x = slovo_cord_x - 10; i < len; i++) {
                                if (NeSlovo[i].bykva == Bykva) {
                                    NeSlovo[i].letter.setPosition(cord_x, cord_y);
                                    NeSlovo[i].flag = 1;
                                    right_try++;
                                }
                                cord_x += 60;
                            }
                        }
                        //если попытки кончились, то мы выводим все слово на экран
                        if (attempt > 6) {
                            for (int i = 0, cord_x = slovo_cord_x - 10; i < len; i++) {
                                NeSlovo[i].flag = 1;
                                NeSlovo[i].letter.setPosition(cord_x, cord_y);
                                cord_x += 60;
                            }
                        }
                    }
                    window.display();
                    break;
                }
                case(2):
                {
                    window.close();
                    break;
                }
                
            }
        }
    }
}
