//
//  Weapon.cpp
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#include "Weapon.h"

string Weapon::getWeaponName() {
    return weaponName;
}
int Weapon::getWeaponDamage() {
    return weaponDamage;
}
void Weapon::attack(Enemy* enemy) {
    enemy->getAttacked(weaponDamage);
}
