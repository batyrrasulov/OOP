//
//  Weapon.h
//  Fantasy Fighting Game 3
//
//  Created by Batyr Rasulov on 4/29/23.
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
    Weapon(string weaponName = "Fists", int weaponDamage = 15) { // default weapon. Assign passed in values with this
        this->weaponName = weaponName;
        this->weaponDamage = weaponDamage;
    }
    string getWeaponName();
    int getWeaponDamage();
    void attack(Enemy* enemy);
};

#endif /* Weapon_h */
