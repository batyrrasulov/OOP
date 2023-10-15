//
//  Island.h
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#ifndef Island_h
#define Island_h

#include <iostream>
#include "Adventurer.h"
#include "Enemy.h"
#include "Hut.h"

using namespace std;

class Island {
private:
    Adventurer* slayer;
    Enemy* badGuy;
    int numKills = 0;
    Hut store;
public:
    Island(Adventurer* e, Enemy* b);
    void fight();
    void naturalProb();
    void setNumKills(int kills);
    int getNumKills();
    void combatMenu1();
    void deadMenu1();
};

#endif /* Island_h */
