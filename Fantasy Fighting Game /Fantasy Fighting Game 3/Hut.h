//
//  Hut.h
//  Fantasy Fighting Game 3
//
//  Created by Batyr Rasulov on 4/29/23.
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
  vector<string> coconuts = {"Small", "Medium", "Large", "Mega"}; // populate coconuts
  int coconutPrices[4] = {20,50, 100, 200}; // populate prices
  int weaponPrices[4] = {50, 100, 150, 200};
public:
  Hut();
  Hut(Adventurer* w);
  void display();
  bool buyWeapon(int choice, Adventurer *shopper);
  bool buyCoconut(int choice, Adventurer *shopper);
};

#endif /* Hut_h */
