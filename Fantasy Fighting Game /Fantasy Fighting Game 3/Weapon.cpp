//
//  Weapon.cpp
//  Fantasy Fighting Game 3
//
//  Created by Batyr Rasulov on 4/29/23.
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
