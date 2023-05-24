#include "lib/header.h"

int main()
{
    srand(time(NULL));
    //русский в консоли
    setlocale(LC_CTYPE, "rus");
    const int max_len_slov = 11; //максимальная длина слова
    const string array_alp = "абвгдежзийклмнопрстуфхцчшщьыъэюя"; //алфавит
    matrix_alp array_flags[32]; //массив структуры с буквами и флагами, для
                                //зачеркивания
    textures textures; //структура с текстурами и спрайтами элементов

    char Bykva = '0';
    int right_try = 0, attempt = 0; //номер удачной попытки и обычной

    bool flag = 0;       //есть ли буква в слове
    bool flag_click = 0; //нажималась ли ранее буква

    //Пути до картинок с буквами
    string path[32]
            = {"img/А.png", "img/Б.png", "img/В.png", "img/Г.png", "img/Д.png",
               "img/Е.png", "img/Ж.png", "img/З.png", "img/И.png", "img/Й.png",
               "img/К.png", "img/Л.png", "img/М.png", "img/Н.png", "img/О.png",
               "img/П.png", "img/Р.png", "img/С.png", "img/Т.png", "img/У.png",
               "img/Ф.png", "img/Х.png", "img/Ц.png", "img/Ч.png", "img/Ш.png",
               "img/Щ.png", "img/Ь.png", "img/Ы.png", "img/Ъ.png", "img/Э.png",
               "img/Ю.png", "img/Я.png"};

    //Заполнение массива флагов буквами и флагами
    for (int i = 0; i < 32; i++) {
        array_flags[i].bukva = array_alp[i];
        array_flags[i].flag = 0;
    }

    string spisok[] = {"лаваш", "визг", "футбол", "волейбол", "фаренгейт"};

    int Slov_v_Spiske = 0;
    for (auto i : spisok) { //Считаем количество слов в списке
        Slov_v_Spiske++;
    }

    //Рандомно выбираем слово из списка
    string slovo = spisok[rand() % Slov_v_Spiske];

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

    //Записываем буквы нашего слова, чтобы потом загрузить их как текстуру и
    //вывести на экран
    for (int i = 0; i < len; i++) {
        NeSlovo[i].bykva = slovo[i];
    }

    //Загружаем спрайт буквы, которая есть у нас в слове
    for (int i = 0; i < len; i++) {
        int j = 0;
        while (j < 33) {
            if (NeSlovo[i].bykva == array_alp[j]) {
                NeSlovo[i].letterTexture.loadFromFile(
                        path[j]); //загружаем букву из картинки
                NeSlovo[i].letter.setTexture(NeSlovo[i].letterTexture);
                NeSlovo[i].flag = 0; //Чтобы не выводились буквы, котрые еще не
                                     //нажимались
                break;
            }
            j++;
        }
    }

    //Создание всех текстур и спрайтов
    RenderWindow window(VideoMode(1000, 800), L"Виселица", Style::Close);
    for (int i = 0; i < 14; i++) {
        create_textur(textures, i);
    }
    load_textur(window, textures);

    //Музыка
    Music music; //создаем объект музыки
    music.openFromFile("music/Music-Overworld_Day.ogg"); //загружаем файл
    music.play(); //воспроизводим музыку
    music.setLoop(true);
    music.setVolume(1);

    SoundBuffer hitBuffer; //создаём буфер для звука
    hitBuffer.loadFromFile("music/hit.ogg"); //загружаем в него звук
    Sound hit(hitBuffer); //создаем звук и загружаем в него звук из буфера

    int button = 0;
    bool back_flag = 0;
    bool StatusGameFlag = 0; //для проверки состояния игры
    int Where = 0; // переход к меню или переигровки
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
            case (Event::Closed):
                window.close();
                break;
            case (Event::KeyPressed):
                if (event.key.code == Keyboard::Escape) {
                    window.close();
                }
                break;
            default:
                break;
            }
            //Зацикленная музыка

            //очищаем окно и заливаем нужным цветом;
            window.clear(Color(217, 217, 217));
            switch (button) {
            case (0): {
                //Русем меню
                window.draw(textures.Sprite[5]);
                Vector2i position = Mouse::getPosition(window);
                if (Mouse::isButtonPressed(Mouse::Left)) {
                    int pos_x = position.x; //сохраняем координаты мышки по x
                    int pos_y = position.y; //сохраняем координаты мышки по y
                    if ((pos_x >= 250) && (pos_x <= 750) && (pos_y >= 350)
                        && (pos_y <= 460)) {
                        button = 1;
                    } else if (
                            (pos_x >= 250) && (pos_x <= 750) && (pos_y >= 514)
                            && (pos_y <= 621)) {
                        button = 2;
                    }
                }
                window.display();
                break;
            }
            case (1): {
                //рисуем бекграунд
                window.draw(textures.Sprite[6]);
                //рисуем виссилицу
                int temp = NULL;
                draw_gallows(attempt, window, textures, temp);

                //рисуем уже нажатые правильные буквы
                for (int i = 0, cordx = slovo_cord_x; i < len; i++) {
                    textures.Sprite[2].setPosition(cordx, 510);
                    window.draw(textures.Sprite[2]);
                    cordx += 60;
                    if (NeSlovo[i].flag == 1) {
                        window.draw(NeSlovo[i].letter);
                    }
                }

                // Зачеркиваем букву, у которой флаг 1, т.е она уже ранее
                // нажималась
                for (int i = 0; i < 32; i++) {
                    if (array_flags[i].flag == 1) {
                        draw_cross(i, window, textures.Sprite[1]);
                    }
                }

                if (right_try >= len) {
                    window.draw(textures.Sprite[3]);
                    StatusGameFlag = 1;
                }

                // Проверка нажатия на нужную букву
                Vector2i position = Mouse::getPosition(window);
                if (Mouse::isButtonPressed(Mouse::Left)) {
                    int pos_x = position.x; //сохраняем координаты мышки по x
                    int pos_y = position.y; //сохраняем координаты мышки по y

                    //обнуление проверки буквы в слове
                    flag = 0;
                    flag_click = 0;

                    if (!StatusGameFlag) {
                        //Проверка на какую букву нажали
                        check_byk_cord(pos_x, pos_y, Bykva);
                    }

                    //Чтобы висилица не рисовалась при нажатии на зачеркнутую
                    //букву
                    for (int i = 0; i < 32; i++) {
                        if (array_flags[i].bukva == Bykva
                            && array_flags[i].flag == 1) {
                            flag_click = 1;
                        }
                    }

                    //Меняем флаг буквы, если она была нажата
                    for (int i = 0; i < 32; i++) {
                        if (array_flags[i].bukva == Bykva) {
                            array_flags[i].flag = 1;
                        }
                    }

                    //проверка буквы в слове
                    check_byk_v_slove(Bykva, slovo, len, flag);

                    //если буквы нет и она раньше не нажималась, то количество
                    //попыток увеличивоется
                    if (flag == 0 && flag_click == 0 && Bykva != '0') {
                        attempt++;
                        hit.play();
                    }

                    const int cord_y = 460; //координаты рисующихся букв по y

                    //Если буква есть в слове, то мы даем координаты в следующем
                    //цикле она нарисуется
                    if (flag == 1 && flag_click == 0) {
                        for (int i = 0, cord_x = slovo_cord_x - 10; i < len;
                             i++) {
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
                        for (int i = 0, cord_x = slovo_cord_x - 10; i < len;
                             i++) {
                            NeSlovo[i].flag = 1;
                            NeSlovo[i].letter.setPosition(cord_x, cord_y);
                            cord_x += 60;
                        }
                        StatusGameFlag = 1;
                    }

                    //Проверка на нажатие ДА или НЕТ, Заново сыграть или В меню
                    if (StatusGameFlag) {
                        if ((pos_y >= 260 && pos_y <= 305)
                            && (pos_x >= 65 && pos_x <= 140)) {
                            button = 3;
                            Where = 1; //Рестарт
                            cout << "po x:" << pos_x << endl;
                            cout << "po y:" << pos_y << endl;
                        }
                        if ((pos_y >= 260 && pos_y <= 305)
                            && (pos_x >= 280 && pos_x <= 380)) {
                            button = 3;
                            Where = 2; //В меню
                            cout << "po x:" << pos_x << endl;
                            cout << "po y:" << pos_y << endl;
                        }
                    }
                }
                window.display();
                break;
            }
            case (2): {
                window.close();
                break;
            }
            //Обнуление всех данных и новое слово, а потом рестарт игры
            case (3): {
                srand(time(NULL));
                StatusGameFlag = 0;

                //Заполнение массива флагов буквами и флагами
                for (int i = 0; i < 32; i++) {
                    array_flags[i].bukva = array_alp[i];
                    array_flags[i].flag = 0;
                }

                Bykva = '0';
                right_try = 0, attempt = 0; //номер удачной попытки и обычной

                flag = 0;       //есть ли буква в слове
                flag_click = 0; //нажималась ли ранее буква

                slovo = spisok[rand() % Slov_v_Spiske];

                //Посчитаем длину слова
                len = 0;
                while (slovo[len] != NULL) {
                    len++;
                }

                if (len >= max_len_slov) {
                    cout << "Ошибка длины слова";
                    return 1;
                }

                //устанавливаем начальные координаты для выводимого слова
                slovo_cord_x = 495 - 30 * len;

                //Массив структуры слова, которая будет выводиться на экран
                NeSlovo[max_len_slov];

                //Записываем буквы нашего слова, чтобы потом загрузить их как
                //текстуру и вывести на экран
                for (int i = 0; i < len; i++) {
                    NeSlovo[i].bykva = slovo[i];
                }

                //Загружаем спрайт буквы, которая есть у нас в слове
                for (int i = 0; i < len; i++) {
                    int j = 0;
                    while (j < 33) {
                        if (NeSlovo[i].bykva == array_alp[j]) {
                            NeSlovo[i].letterTexture.loadFromFile(
                                    path[j]); //загружаем букву из картинки
                            NeSlovo[i].letter.setTexture(
                                    NeSlovo[i].letterTexture);
                            NeSlovo[i].flag = 0; //Чтобы не выводились буквы,
                                                 //котрые еще не нажимались
                            break;
                        }
                        j++;
                    }
                }

                //Рестарт
                if (Where == 1) {
                    button = 1;
                    Where = 0;
                }
                //В меню
                if (Where == 2) {
                    button = 0;
                    Where = 0;
                }
            }
            }
        }
    }
}
