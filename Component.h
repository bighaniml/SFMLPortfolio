//
// Created by hanil on 4/25/2023.
//

#ifndef SFML_PROJECTS_COMPONENT_H
#define SFML_PROJECTS_COMPONENT_H
//
// Created by Hassan Fawaz on 3/29/23.
//

#ifndef CALCULATORC___COMPONENT_H
#define CALCULATORC___COMPONENT_H

#include <SFML/Graphics.hpp>


class Component : public sf::Drawable
{

public :
    virtual void update() = 0 ;
    virtual void eventHandle(sf::RenderWindow &window, sf::Event event) = 0 ;

};





#endif //CALCULATORC___COMPONENT_H

#endif //SFML_PROJECTS_COMPONENT_H
