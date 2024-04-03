//
// Created by hanil on 4/26/2023.
//

#include "Texture.h"

std::map<images,sf::Texture> Texture::textures;
sf::Texture &Texture::getTexture(images image) {
    loadTexture(image);
    return textures.find(image)->second;
}

std::string Texture::getPath(images image) {
    switch (image) {
        case(PALKIA):
            return "Portfolio/Pokemon/Pics/myTeam/Palkia.png";
        case(BLAZIKEN):
            return "Portfolio/Pokemon/Pics/myTeam/Blaziken.png";
        case(CHARIZARD):
            return "Portfolio/Pokemon/Pics/myTeam/charizard.png";
        case(PIKACHU):
            return "Portfolio/Pokemon/Pics/myTeam/Pikachu.png";
        case(SCEPTILE):
            return "Portfolio/Pokemon/Pics/myTeam/Sceptile.png";
        case(SQUIRTLE):
            return "Portfolio/Pokemon/Pics/myTeam/Squirtle.png";
        case(ASH):
            return "Portfolio/Pokemon/Pics/ash.png";
        case(PALKIA_FRONT):
            return "Portfolio/Pokemon/Pics/myTeam/palkiafront.gif";
        case(CHARIZARD_FRONT):
            return "Portfolio/Pokemon/Pics/myTeam/charizardfront.png";
        case(PIKACHU_FRONT):
            return "Portfolio/Pokemon/Pics/myTeam/pikafront.png";
        case(SCEPTILE_FRONT):
            return "Portfolio/Pokemon/Pics/myTeam/sceptilefront.gif";
        case(BLAZIKEN_FRONT):
            return "Portfolio/Pokemon/Pics/myTeam/blazikenfront.gif";
        case(SQUIRTLE_FRONT):
            return "Portfolio/Pokemon/Pics/myTeam/squirtlefront.png";
        case(JESSE):
            return "Portfolio/Pokemon/Pics/Jessie_JN.png";
        case(POKEBALL):
            return "Portfolio/Pokemon/Pics/pokeball.png";
        case(BATTLE):
            return "Portfolio/Pokemon/Pics/Battle.png";
        case(PHASER):
            return "Portfolio/AnimatedSprite/Picture/phaser.png";
        case(TITLE):
            return "Portfolio/Pokemon/Pics/final.png";
        case(START):
            return "Portfolio/Pokemon/Pics/start.png";

    }
}

void Texture::loadTexture(images image) {
    sf::Texture texture;
    texture.loadFromFile(getPath(image));
    if(textures.count(image) == 0){
        textures.insert({image, texture});
    }
}
