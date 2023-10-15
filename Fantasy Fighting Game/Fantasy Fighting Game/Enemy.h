//
//  Enemy.h
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#ifndef Enemy_h
#define Enemy_h

#include <iostream>

using namespace std;

class Enemy {
private:
    int health;
    string type;
    int enemyDamage;
public:
    Enemy(string type, int enemyDamage, int health);
    void showEnemy();
    string getType();
    int attack();
    int getEnemyHealth();
    void setType(string type);
    void setEnemyDamage(int enemyDamage);
    void setEnemyHealth(int health);
    void getAttacked(int damage);
};

#endif /* Enemy_h */
