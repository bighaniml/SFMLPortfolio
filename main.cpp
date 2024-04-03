#include <iostream>
#include <SFML/Graphics.hpp>
#include "Pokemon/Application.h"
#include "Pokemon/Pokemon.h"
#include "MouseEvents.h"
#include "Button1.h"
#include "Dynamic2DArray/SFMLGrid.h"
#include "Portfolio.h"

class RenderWindow;

int main() {
    sf::Color offwhite(255, 248, 221);
    //Application::createWindow();
    sf::RenderWindow window({720, 420, 32}, "Hello World");
    sf::RectangleShape button({50, 50});
    sf::Text text;
    sf::Font font;
    font.loadFromFile("Font/PKMN RBYGSC.ttf");
    text.setFont(font);
    text.setCharacterSize(26);
    text.setString("Button");
    Button1 b1("SFMLGrid",100, 100);
    SFMLGrid grid;
    sf::Clock clock;
    Portfolio portfolio;


    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            bool keepGoing = true;
            if(sf::Event::Closed == event.type)
                window.close();
              portfolio.eventHandle(window, event);
        }
        window.clear(offwhite);
        window.draw(portfolio);
        window.display();
    }
    return 0;
}

