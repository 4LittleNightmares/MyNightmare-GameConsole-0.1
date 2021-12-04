//
//  Game.hpp
//  Teste 2
//
//  Created by Pedro Matos on 19/11/2021.
//

#ifndef Game_hpp
#define Game_hpp

#include "Functions.h"
#include "Game.hpp"
#include "Character.hpp"

#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
//random
#include <ctime>
//timing
#include <unistd.h>
#include <stdlib.h>



class Game
{
public:
    Game();
    virtual ~Game();
//    Operators
    
//    Functions
    void initGame();
    void mainMenu();

    
//    Accessors
    inline bool getPlaying() const { return this ->playing; }

//    Modifiers

private:
    int choice;
    bool playing;
    
//    character related
    Character character;
    
};

#endif /* Game_hpp */
