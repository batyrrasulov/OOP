//
//  ForestCritter.h
//  Topic 6 Lab Question 2
//
//  Created by Batyr Rasulov on 4/6/23.
//
#ifndef ForestCritter_h
#define ForestCritter_h
#include "Villain.h"
#include <string>
#include <iostream>

using namespace std;

class ForestCritter : public Villain {
private:
    bool rabies;
public:
    ForestCritter() {}
    ForestCritter(bool rabid);
    bool isRabid() const;
    void cure();
    void infect();
    void bite() const;
    void takeDamage(int dmg);
    int attack() const;
};

#endif /* ForestCritter_h */
