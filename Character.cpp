//
//  Character.cpp
//  Teste 2
//
//  Created by Pedro Matos on 20/11/2021.
//

#include "Character.hpp"
#include <string>
#include <iostream>
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


Character::Character()
{
    this->xPos = 0.0;
    this->yPos = 0.0;
    
    this->name = name;
    this->level = 0;
    this->exp = 0;
    this->expNext = 0;
    
    
    this->strenght = 0;
    this->vitality = 0;
    this->dexterity = 0;
    this->intelligence = 0;
    
    this->hp = 0;
    this->hpMax = 0;
    this->stamina = 0;
    int staminaMax= 0;
    this->damageMin = 0;
    this->damageMax = 0;
    this->defence = 0;
    
    this->statPoints = 0;
    this->skillPoints = 0;
    

}




Character::~Character()
{
    
}




//Functions


//MAS PQ RAIO O STRING N ESTÁ A FUNCIONAR MAIS?????????
//Ok, agora nem o string nem a variavel "name" funcionam

//Ok agora nenhuma variavel funciona... whyyyy
//Eu acho que é algum problema com as referencias
Character::initialize(const string name)
{
    this->xPos = 0.0;
    this->yPos = 0.0;
    
    this->name = "";
    this->level = 1;
    this->exp = 0;
    this->expNext = (50/3)*(pow(level,3) - 6*pow(level, 3) + (17*level) - 11);
    
    this->strenght = 5;
    this->vitality = 5;
    this->dexterity = 5;
    this->intelligence = 5;
    
    this->hp = 10;
    this->hpMax = 10;
    this->stamina = 10;
    int staminaMax= 10;
    this->damageMin = 1;
    this->damageMax = 4;
    this->defence = 1;
    
    
    this->statPoints = 0;
    this->skillPoints = 0;
}


void Character::printStats() const
{
    cout<<"Character Sheet ="<<endl;
    cout<<"Name: "<<this->name<<endl;
    cout<<"Level: "<<this->level<<endl;
    cout<<"Exp: "<<this->exp<<endl;
    cout<<"exp to next level: ="<<this->expNext<<endl;

    cout<<std::setw(10)<<std::setfill('=')<<std::endl;
    
    cout<<"Strenght: "<<this->stenght<<endl;
    cout<<"vitality: "<<this->vitality<<endl;
    cout<<"Dexterity: "<<this->dexterity<<endl;
    cout<<"Intelligence: "<<this->intelligence<<endl;
    
    cout<<std::setw(10)<<std::setfill('=')<<std::endl;
    
    cout<<"HP: "<<this->hp<<" / "<<this->hpMax<<endl;
    cout<<"Stamina: "<<this->stamina<<" / "<<this->staminaMax<<endl;
    cout<<"Damage: "<<this->damageMin<<" / "<<this->damageMax<<endl;
    cout<<"Defence: "<<this->defence<<endl;
    cout<<endl;
}

void Character::levelUp()
{
    while (this->exp >= this->expNext)
    {
        this->exp -= this->expNext;
        this->level++;
        this->expNext = (50/3)*(pow(this->level,3) - 6*pow(this->level, 3) + (17*this->level) - 11);
        
        this->statPoint++;
        this->skillPoints++:
    }

    
}

