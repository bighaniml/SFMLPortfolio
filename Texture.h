////
//// Created by hanil on 4/26/2023.
////

#ifndef SFML_PROJECTS_TEXTURE_H
#define SFML_PROJECTS_TEXTURE_H
#include <SFML/Graphics.hpp>
#include <map>
#include "Images.h"
#include <bits/stdc++.h>

class Texture {
private:
    static std::map<images, sf::Texture> textures;
    static void loadTexture(images image);
    static std::string getPath(images image);
public:
    static sf::Texture& getTexture(images image);
};


#endif //SFML_PROJECTS_TEXTURE_H
