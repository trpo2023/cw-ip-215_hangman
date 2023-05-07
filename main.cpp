﻿#include <SFML/Graphics.hpp>
#include <iostream>
#include <clocale>


using namespace sf;
using namespace std;


int main()
{
    setlocale(LC_CTYPE, "rus");
    RenderWindow window(VideoMode(1000, 800), L"Висилица", Style::Default);
    window.setFramerateLimit(60);

    window.setVerticalSyncEnabled(true);
    int flag = 0;
    while (window.isOpen())
    {
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

        float padding = 60;
        float aplhabetX = 140;

        // загружаем букву А
        Texture letter0Texture;
        letter0Texture.loadFromFile("alphabet/А.png");

        Sprite letter0;
        letter0.setTexture(letter0Texture);
        letter0.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву Б
        Texture letter1Texture;
        letter1Texture.loadFromFile("alphabet/Б.png");

        Sprite letter1;
        letter1.setTexture(letter1Texture);
        letter1.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву В
        Texture letter2Texture;
        letter2Texture.loadFromFile("alphabet/В.png");

        Sprite letter2;
        letter2.setTexture(letter2Texture);
        letter2.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву Г
        Texture letter3Texture;
        letter3Texture.loadFromFile("alphabet/Г.png");

        Sprite letter3;
        letter3.setTexture(letter3Texture);
        letter3.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву Д
        Texture letter4Texture;
        letter4Texture.loadFromFile("alphabet/Д.png");

        Sprite letter4;
        letter4.setTexture(letter4Texture);
        letter4.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву Е
        Texture letter5Texture;
        letter5Texture.loadFromFile("alphabet/Е.png");

        Sprite letter5;
        letter5.setTexture(letter5Texture);
        letter5.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву Ж
        Texture letter6Texture;
        letter6Texture.loadFromFile("alphabet/Ж.png");

        Sprite letter6;
        letter6.setTexture(letter6Texture);
        letter6.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву З
        Texture letter7Texture;
        letter7Texture.loadFromFile("alphabet/З.png");

        Sprite letter7;
        letter7.setTexture(letter7Texture);
        letter7.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву И
        Texture letter8Texture;
        letter8Texture.loadFromFile("alphabet/И.png");

        Sprite letter8;
        letter8.setTexture(letter8Texture);
        letter8.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву Й
        Texture letter9Texture;
        letter9Texture.loadFromFile("alphabet/Й.png");

        Sprite letter9;
        letter9.setTexture(letter9Texture);
        letter9.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву К
        Texture letter10Texture;
        letter10Texture.loadFromFile("alphabet/К.png");

        Sprite letter10;
        letter10.setTexture(letter10Texture);
        letter10.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву Л
        Texture letter11Texture;
        letter11Texture.loadFromFile("alphabet/Л.png");

        Sprite letter11;
        letter11.setTexture(letter11Texture);
        letter11.setPosition(aplhabetX, 580);
        aplhabetX += padding;

        // загружаем букву М
        Texture letter12Texture;
        letter12Texture.loadFromFile("alphabet/М.png");

        Sprite letter12;
        letter12.setTexture(letter12Texture);
        letter12.setPosition(aplhabetX, 580);
        aplhabetX += padding;


        CircleShape shape(50.f);
        shape.setFillColor(Color(100, 250, 50));

        
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

            //рисуем 1 ряд алфавита
            window.draw(letter0);
            window.draw(letter1);
            window.draw(letter2);
            window.draw(letter3);
            window.draw(letter4);
            window.draw(letter5);
            window.draw(letter6);
            window.draw(letter7);
            window.draw(letter8);
            window.draw(letter9);
            window.draw(letter10);
            window.draw(letter11);
            window.draw(letter12);


            // Проверка нажатия на нужную букву
            Vector2i position = Mouse::getPosition();
            if (Mouse::isButtonPressed(Mouse::Left)) {
                cout << "Po x:" << position.x << endl;
                cout << "Po y:" << position.y << endl;
                int pos_x = position.x;
                int pos_y = position.y;
                if ((pos_x >= 620 && pos_x <= 652) && (pos_y >= 760 && pos_y <= 800)) {
                    cout << "Bykva: А" << endl;
                }
            }
            

            window.display();
        }

        
    }
    return 0;
}