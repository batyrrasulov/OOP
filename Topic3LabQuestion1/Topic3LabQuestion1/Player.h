//
//  Player.h
//  Topic3LabQuestion1
//
//  Created by Batyr Rasulov on 2/16/23.
//
#ifndef Player_h
#define Player_h
#include <string>
#include "Armor.h"

using namespace std;

class Player {
public:
    Player();
    Player(string _name, int _hp, Armor _armor);
    string getName() const;
    int getHp() const;
    void showArmor() const;
    void setName(string name);
    void setHp(int health);
    void printPlayer() const;
private:
    string name;
    int hp;
    Armor armor;
};

#endif /* Player_h */
