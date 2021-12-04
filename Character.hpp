//
//  Character.hpp
//  Teste 2
//
//  Created by Pedro Matos on 20/11/2021.
//
/*
            Em "Accessors"
 Para aceder a variaveis existentes em privado podemos criar uma referencia (Ex: "Int& Name") para que não tenha problemas em ter variaveis privadas e variaveis publicas; pena é que as referencias têm que ser constantes, então temos que fazer quase uma referencia de uma referencia para poder alterar dados
 */


#ifndef Character_hpp
#define Character_hpp

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

using namespace std;

class Character
{
public:
    Character();
    virtual ~Character();
    
//    Functions
    void initialize(const std::string name);
    void printStats() const;
    void levelUp();
    
    
//    Accessors
    inline const double& getX() const{ return this->xPos; }
    inline const double& getY() const{ return this->yPos; }

    
    inline const std::string& getName() const{ return this->name; }
    inline const int& getLeve() const{ return this->level; }
    inline const int& getExp() const{ return this->exp; }
    inline const int& getExpNext() const{ return this->expNext; }
    inline const int& getHP() const{ return this->hp; }
    inline const int& getHPMax() const{ return this->hpMax; }
    inline const int& getStamina() const{ return this->stamina; }
    inline const int& getDamageMin() const{ return this->damageMin; }
    inline const int& getDamageMax() const{ return this->damageMax; }
    inline const int& getDefence() const{ return this->defence; }
    
    
    

    
//    Modifiers
    
private:
    double xPos;
    double yPos;
    
    
    std::string name;
    int level;
    int exp;
    int expNext;
    
    
    int strenght;
    int vitality;
    int dexterity;
    int intelligence;
    
    int hp;
    int hpMax;
    int stamina;
    int staminaMax;
    int damageMin;
    int damageMax;
    int defence;
    
    int statPoints;
    int skillPoints;
    
};

#endif /* Character_hpp */
