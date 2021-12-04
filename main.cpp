//
//  main.cpp
//  Teste 2
//
//  Created by Pedro Matos on 19/11/2021.
//

#include "Game.hpp"
#include "Loading_Screen.hpp"
#include "Greetings.hpp"
#include "Character.hpp"



int main()
{
    greetings();
    usleep(355500);
    loadingscreen();
    usleep(299900);
    
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    
    
    srand(time_t(NULL));

    
    Game game;
    game.initGame();
    while(game.getPlaying())
    {
        
        game.mainMenu();
        
    }
    
    return 0;
    
    
    
}
