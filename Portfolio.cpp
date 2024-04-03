//
// Created by hanil on 4/28/2023.
//

#include "Portfolio.h"
#include "Texture.h"
#include "Images.h"


void Portfolio::eventHandle(sf::RenderWindow &window, sf::Event event) {
    bool runProgram = true;
    sf::Clock clock;
    sf::Vector2i windowSize(720, 420);
    //2dArray
    if(mouseEvents::isClicked(gridButton, window)){
        while( runProgram && window.isOpen())
                {
                    if(sf::Event::Closed == event.type)
                        window.close();
                    int time = clock.getElapsedTime().asMilliseconds();


                    while(window.pollEvent(event))
                    {
                        if(sf::Event::KeyPressed){
                            if(event.key.code == sf::Keyboard::Enter)
                                runProgram =  false;
                        }
                        grid.eventHandler(window, event);
                    }

                    window.clear();
                    window.draw(grid);
                    window.display();
                }
    }
    //greenCircle
    else if(mouseEvents::isClicked(greenCircle, window)){
        while( runProgram && window.isOpen())
        {
            if(sf::Event::Closed == event.type)
                window.close();
            int time = clock.getElapsedTime().asMilliseconds();


            while(window.pollEvent(event))
            {
                if(sf::Event::KeyPressed){
                    if(event.key.code == sf::Keyboard::Enter)
                        runProgram =  false;
                }
            }
            window.clear();
            window.draw(ball);
            window.display();
        }
    }
    //bouncing ball
    else if(mouseEvents::isClicked(bouncingBall, window)){
        double xVelocity = 0.5;
        double yVelocity = 0.5;
        while( runProgram && window.isOpen())
        {
            if(sf::Event::Closed == event.type)
                window.close();
            int time = clock.getElapsedTime().asMilliseconds();


            while(window.pollEvent(event))
            {
                if(sf::Event::KeyPressed){
                    if(event.key.code == sf::Keyboard::Enter)
                        runProgram =  false;
                }
            }
            ball.bounce(windowSize, xVelocity, yVelocity);
            window.clear();
            window.draw(ball);
            window.display();
        }
    }
    //phaser
    else if(mouseEvents::isClicked(phaser, window)){

        while( runProgram && window.isOpen())
        {
            if(sf::Event::Closed == event.type)
                window.close();


            while(window.pollEvent(event))
            {
                if(sf::Event::KeyPressed){
                    if(event.key.code == sf::Keyboard::Enter)
                        runProgram =  false;
                }
                phaserActual.update();
            }

            window.clear();
            window.draw(phaserActual);
            window.display();
        }
    }
    //pokerAnalysis
    else if(mouseEvents::isClicked(poker, window)){

        pokerAnalysis.run();
        while(runProgram && window.isOpen()){
            sf::Event event;
            if(sf::Event::Closed == event.type)
                window.close();
            int time = clock.getElapsedTime().asMilliseconds();


            while(window.pollEvent(event))
            {
                if(sf::Event::KeyPressed){
                    if(event.key.code == sf::Keyboard::Enter)
                        runProgram =  false;
                }
            }
            window.clear();
            window.draw(pokerAnalysis);
            window.display();
        }
    }
    else if(mouseEvents::isClicked(card, window)){
        while( runProgram && window.isOpen())
        {
            if(sf::Event::Closed == event.type)
                window.close();
            int time = clock.getElapsedTime().asMilliseconds();


            while(window.pollEvent(event))
            {
                if(sf::Event::KeyPressed){
                    if(event.key.code == sf::Keyboard::Enter)
                        runProgram =  false;
                }
            }
            window.clear();
            window.draw(actualCard);
            window.display();
        }
    }
    else if(mouseEvents::isClicked(pokemon, window)){
        Application::createWindow();
        Application::addComponent(battle);
        Application::run();
    }
    else if(mouseEvents::isHovered(greenCircle, window))
        greenCircle.changeColorYellow();
    else if(mouseEvents::isHovered(gridButton, window))
        gridButton.changeColorYellow();
    else if(mouseEvents::isHovered(bouncingBall, window))
        bouncingBall.changeColorYellow();
    else if(mouseEvents::isHovered(phaser, window))
        phaser.changeColorYellow();
    else if(mouseEvents::isHovered(poker, window))
        poker.changeColorYellow();
    else if(mouseEvents::isHovered(card, window))
        card.changeColorYellow();
    else if(mouseEvents::isHovered(pokemon, window))
        pokemon.changeColorYellow();
    else {
        gridButton.changeColorWhite();
        greenCircle.changeColorWhite();
        bouncingBall.changeColorWhite();
        phaser.changeColorWhite();
        poker.changeColorWhite();
        card.changeColorWhite();
        pokemon.changeColorWhite();
    }

}

Portfolio::Portfolio():gridButton("SFML GRID", 300, 100), greenCircle("Green Circle", 300, (gridButton.getGlobalBounds()).top + (gridButton.getGlobalBounds()).height + 10),
                       bouncingBall("Bouncing Ball", 300, (gridButton.getGlobalBounds()).top + 2*((gridButton.getGlobalBounds()).height + 10)), card("Card", 300, (gridButton.getGlobalBounds()).top + 3*((gridButton.getGlobalBounds()).height + 10)), phaser("Phaser", 300, (gridButton.getGlobalBounds()).top + 4*((gridButton.getGlobalBounds()).height + 10)),
                       poker("Poker", 300, (gridButton.getGlobalBounds()).top + 5*((gridButton.getGlobalBounds()).height + 10)), pokemon("Pokemon", 300, (gridButton.getGlobalBounds()).top + 6*((gridButton.getGlobalBounds()).height + 10)),
                       phaserActual(Texture::getTexture(PHASER), 4, 12){

}

//void Portfolio::setup() {
//
//}

void Portfolio::update() {

}

void Portfolio::run() {

}

void Portfolio::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(gridButton);
    window.draw(greenCircle);
    window.draw(bouncingBall);
    window.draw(card);
    window.draw(phaser);
    window.draw(poker);
    window.draw(pokemon);
}
