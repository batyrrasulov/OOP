//
//  Army.cpp
//  Topic 6 Lab Question 2
//
//  Created by Batyr Rasulov on 4/6/23.
//
#include "Army.h"
Army::Army() {
    Villain * villain1 = new Witch(25);
    Witch * witch;
    witch = dynamic_cast <Witch*> (villain1);
    army[0] = witch;
    
    Villain * villain2 = new Dragon(100, 120, "Khalid");
    Dragon * dragon;
    dragon = dynamic_cast <Dragon*> (villain2);
    army[1] = dragon;
    
    Villain * villain3 = new ForestCritter(true);
    ForestCritter * critter;
    critter = dynamic_cast <ForestCritter*> (villain3);
    army[2] = critter;
    
    numVillains = 3;
}
Army::~Army() {
    for (int i = 0; i < 3; i++) {
        delete army[i];
    }
}
int Army::attack() {
    return (army[0]->attack() + army[1]->attack() + army[2]->attack());
}
void Army::showArmy() {
    cout << "Villains in the army: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << army[i]->getName() << endl;
    }
}
