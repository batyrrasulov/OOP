//
//  Army.h
//  Topic 6 Lab Question 2
//
//  Created by Batyr Rasulov on 4/6/23.
//
#ifndef Army_h
#define Army_h
#include "Villain.h"
#include "Dragon.h"
#include "ForestCritter.h"
#include "Witch.h"

using namespace std;

class Army {
private:
    Villain * army[3];
    int numVillains;
public:
    Army();
    ~Army();
    int attack();
    void showArmy();
};

#endif /* Army_h */
