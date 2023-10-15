//
//  main.cpp
//  Topic 6 Lab Question 2
//
//  Created by Batyr Rasulov on 4/6/23.
//
#include "Army.h"
#include <iostream>

using namespace std;

int main() {
    Army army;
    
    int attackForce = army.attack();
    cout << "The army of villains attack with a force of " << attackForce << "!" << endl << endl;
    army.showArmy();
}
