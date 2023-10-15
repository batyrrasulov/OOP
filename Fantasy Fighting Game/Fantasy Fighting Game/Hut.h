//
//  Hut.h
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#ifndef Hut_h
#define Hut_h

#include "Adventurer.h"
#include "Weapon.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Hut {
private:
    Adventurer* guy;
    vector<Weapon> weapons;
    //populate coconuts
    vector<string> coconuts = {"Small", "Medium", "Large", "Mega"};
    //populate prices
    int coconutPrices[4] = {20, 50, 100, 200};
    int weaponPrices[4] = {50, 100, 150, 200};
public:
    Hut();
    Hut(Adventurer* w);
    void display();
    bool buyWeapon(int choice, Adventurer *shopper);
    bool buyCoconut(int choice, Adventurer *shopper);
};

#endif /* Hut_h */
