//
// Created by hanil on 4/28/2023.
//

#include "Button1.h"
#include "Font.h"

Button1::Button1(const std::string &textLabel, float x, float y) : textLabel(textLabel), x(x), y(y) {
    button.setSize({150, 30});
    button.setPosition(x, y);
    button.setFillColor(lightBrown);
    label.setFont(Font::getFont(BUTTON));
    label.setFillColor(brown);
    label.setCharacterSize(25);
    label.setString(textLabel);
    label.setPosition(button.getPosition().x + ((button.getSize().x - label.findCharacterPos(textLabel.length()).x - label.findCharacterPos(0).x) )/2, button.getPosition().y);
}

void Button1::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(button);
    window.draw(label);

}

void Button1::changeColorYellow() {
    button.setFillColor(yellowish);
}

void Button1::changeColorWhite() {
    button.setFillColor(lightBrown);
}

sf::FloatRect Button1::getGlobalBounds() const {
    return button.getGlobalBounds();
}

void Button1::setlabel(const std::string &label) {
    this->label.setString(label);
    this->label.setFont(Font::getFont(BUTTON));
    this->label.setFillColor(brown);
    this->label.setCharacterSize(25);
    this->label.setPosition(button.getPosition().x , button.getPosition().y + 5);
}

void Button1::setPosition(const float &x, const float &y) {
    button.setPosition(x,y);
}
