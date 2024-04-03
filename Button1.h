//
// Created by hanil on 4/28/2023.
//

#ifndef SFML_PROJECTS_BUTTON1_H
#define SFML_PROJECTS_BUTTON1_H
#include<SFML\Graphics.hpp>


class Button1: public sf::Drawable{
private:
    sf::Color yellowish = sf::Color(250, 219, 156);
    sf::Color brown = sf::Color(105, 66, 32);
    sf::Color lightBrown = sf::Color(229, 187, 150);
    sf::RectangleShape button;
    sf::Text label;
    sf::Font font;
    std::string textLabel;
    float x, y;
public:
    Button1(const std::string &textLabel, float x, float y);
    void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void changeColorYellow();
    void changeColorWhite();
    void setPosition(const float& x, const float& y);
    void setlabel(const std::string& label);
    sf::FloatRect getGlobalBounds() const;


};


#endif //SFML_PROJECTS_BUTTON1_H
