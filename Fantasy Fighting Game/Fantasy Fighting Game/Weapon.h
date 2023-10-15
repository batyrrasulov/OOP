//
//  Weapon.h
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#ifndef Weapon_h
#define Weapon_h

#include <iostream>
#include <string>
#include "Enemy.h"

using namespace std;

class Weapon {
private:
    string weaponName;
    int weaponDamage;
public:
    //default weapon assigned passed in values within
    Weapon(string weaponName = "Fists", int weaponDamage = 15) {
        this->weaponName = weaponName;
        this->weaponDamage = weaponDamage;
    }
    string getWeaponName();
    int getWeaponDamage();
    void attack(Enemy* enemy);
};

#endif /* Weapon_h */
