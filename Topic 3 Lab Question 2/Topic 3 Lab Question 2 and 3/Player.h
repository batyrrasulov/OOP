//
//  Player.h
//  Topic 3 Lab Question 2
//
//  Created by Batyr Rasulov on 3/4/23.
//
#pragma once
#include <string>
#include "Armor.h"
#ifndef Player_h
#define Player_h

using namespace std;

class Player {
public:
    string name;
    int HP;
    Armor armor;
    string defenseStrength;
    Player();
    Player(string _name, int _HP);
    string getName() const;
    int getHP() const;
    void setName(string _name);
    void setHP(int _HP);
    void showArmor() const;
    void printPlayer() const;
    //Player class
    friend std::istream& operator >> (std::istream& in, Player& p);
    friend std::ostream& operator << (std::ostream& out, const Player& p);
};

#endif /* Player_h */
