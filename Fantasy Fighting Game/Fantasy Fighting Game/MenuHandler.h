//
//  MenuHandler.h
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#ifndef MenuHandler_h
#define MenuHandler_h

#include <iostream>
#include "Adventurer.h"
#include "Enemy.h"
#include "Hut.h"
#include "Island.h"
#include "Weapon.h"
#include "Load.h"

using namespace std;

class MenuHandler {
private:
    Enemy* badMain;
    Adventurer* mainCharacter;
public:
    MenuHandler() {
        //default Adventurer
        mainCharacter = new Adventurer("John", 0, 0, Weapon("Fists, 15"));
        //initialize Enemy (Bob will be changed to Crab upon the first fight)
        badMain = new Enemy("Bob", rand() % 10, 100);
    }
    void startMenu();
    void menu1();
};

#endif /* MenuHandler_h */
