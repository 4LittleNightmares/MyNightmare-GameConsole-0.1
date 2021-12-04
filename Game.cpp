//
//  Game.cpp
//  Teste 2
//
//  Created by Pedro Matos on 19/11/2021.
//

#include "Game.hpp"



Game::Game()
{

    choice = 0;
    playing = true;
    

}

Game::~Game()
{
    
}

//Functions
void Game::initGame()
{
    string name;
    cout<<"Enter name for character: ";
    getline(std::cin, name);
    
    character.initialize(name);
}


void Game::mainMenu()
{
    cout<<"-----------------------------"<<endl;
    
    cout<<"\t\t...MAIN MENU..."<<endl;
    
    cout<<"\t0: Quit"<<endl;
    cout<<"\t1: Travel"<<endl;
    cout<<"\t2: Shop"<<endl;
    cout<<"\t3: Level up"<<endl;
    cout<<"\t4: Rest"<<endl;
    cout<<"\t5: Character sheet"<<endl;
    
    cout<<"-----------------------------"<<endl;
    cout<<endl;
    
    cout<<endl<<"\tChoice: ";
    cin>>choice;
    cout<<endl;
    
    switch (choice)
    {
        case 0:
            playing = false;
            break;
            
        case 5:
            character.printStats();
            break;
            
        default:
            break;
    }
    
}
