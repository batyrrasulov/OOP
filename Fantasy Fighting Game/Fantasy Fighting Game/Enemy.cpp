//
//  Enemy.cpp
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#include "Enemy.h"

//assigning each passed in variable
Enemy::Enemy(string type, int enemyDamage, int health) {
    this->type = type;
    this->enemyDamage = enemyDamage;
    this->health = health;
}
void Enemy::showEnemy() {
    cout << "The " << type << " health is " << health << endl;
}
string Enemy::getType() {
    return type;
}
int Enemy::attack() {
    return enemyDamage;
}
int Enemy::getEnemyHealth() {
    return health;
}
void Enemy::setType(string type) {
    this->type = type;
}
void Enemy::setEnemyDamage(int enemyDamage) {
    this->enemyDamage = enemyDamage;
}
void Enemy::setEnemyHealth(int health) {
    this->health = health;
}
//lower health by weapon damage
void Enemy::getAttacked(int damage) {
    health -= damage;
}
