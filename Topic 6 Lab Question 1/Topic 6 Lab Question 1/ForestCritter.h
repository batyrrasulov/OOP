//
//  ForestCritter.h
//  Topic 6 Lab Question 1
//
//  Created by Batyr Rasulov on 3/30/23.
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
};

#endif /* ForestCritter_h */
