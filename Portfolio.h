//
// Created by hanil on 4/28/2023.
//

#ifndef SFML_PROJECTS_PORTFOLIO_H
#define SFML_PROJECTS_PORTFOLIO_H
#include "Component.h"
#include "Dynamic2DArray/SFMLGrid.h"
#include "MouseEvents.h"
#include "Button1.h"
#include "BallBounce/Ball.h"
#include "AnimatedSprite/AnimatedSprite.h"
#include "Pokemon/Application.h"
#include "Pokemon/Button.h"
#include "Images.h"
#include "Pokemon/Pokemon.h"
#include "PokerAnalysis/Analysis.h"
#include "Pokemon/Trainer.h"
#include "Pokemon/Battle.h"

class Portfolio: public Component{
private:
    AnimatedSprite phaserActual;
    SFMLGrid grid;
    Ball ball;
    Analysis pokerAnalysis;
    Card actualCard = Card();
    Button1 gridButton;
    Button1 greenCircle;
    Button1 bouncingBall;
    Button1 card;
    Button1 phaser;
    Button1 poker;
    Button1 pokemon;
    Move dragonRage = Move("Dragon Rage", 35, 10, DRAGON);
    Move firePunch = Move("Fire Punch", 40, 15, FIRE);
    Move tackle = Move("Tackle", 45, 15, NORMAL);
    Move firePunch1 = Move("Fire Punch", 30, 15, FIRE);
    Move flamethrower = Move("Flamethrower", 35, 10, FIRE);
    Move petalDance = Move("Petal Dance", 35, 10, GRASS);
    Move waterfall = Move("Waterfall", 35, 10, WATER);
    Move Hydropump = Move("Hydropump", 35, 10, WATER);
    Move WaterGun = Move("Water Gun", 35, 10, WATER);
    Move Bubblebeam = Move("Bubble Beam", 35, 10, WATER);
    Move Bite = Move("Bite", 40, 10, DARK);
    Move Ember = Move{"Ember", 40, 10, FIRE};
    Move CloseCombat = Move{"Close Combat", 35, 10, FIGHTING};
    Move tailWhip = Move("Tail Whip", 35, 15, NORMAL);
    Move blazikenMoves [4]= {tackle, CloseCombat, Ember, flamethrower };
    Move moves[4] ={flamethrower, firePunch, tackle, dragonRage};
    Move palkiaMoves[4] = {waterfall, tackle, dragonRage, WaterGun};
    Move squirtleMoves[4] = {Bite, waterfall, tailWhip, Bubblebeam};
    Move sceptileMoves[4] = {petalDance, dragonRage, tailWhip, tackle};

    Pokemon sceptile = Pokemon("SCEPTILE", SCEPTILE, GRASS, 250, 80, "rival", sceptileMoves);
    Pokemon squirtle = Pokemon("SQUIRTLE", SQUIRTLE, WATER, 100, 80, "rival", squirtleMoves);
    Pokemon palkia = Pokemon("Palkia", PALKIA, DRAGON, 50, 80,"rival",palkiaMoves);
    Pokemon rivalTeam[3] = {palkia, sceptile, squirtle};
    Pokemon pikachu;
    Pokemon blaziken = Pokemon("BLAZIKEN", BLAZIKEN, FIRE, 100, 50, "n", blazikenMoves);
    Pokemon charizard = Pokemon("Charizard", CHARIZARD, DRAGON, 75, 75, "n", moves);
    Pokemon team[3] = {pikachu, blaziken, charizard};
    Trainer biggs = Trainer("Biggs", "boy", team, true);
    Trainer rival = Trainer("Jesse", "girl", rivalTeam, false);
    Battle battle = Battle(biggs, rival);
public:
    Portfolio();
//    void setup();
    void update();
    void eventHandle(sf::RenderWindow &window, sf::Event event);
    void run();
    void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};


#endif //SFML_PROJECTS_PORTFOLIO_H
