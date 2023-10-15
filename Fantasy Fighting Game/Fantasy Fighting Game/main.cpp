//
//  main.cpp
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 6/10/23.
//

#include <iostream>
#include <string>
#include "MenuHandler.h"

using namespace std;

int main() {
    srand(time_t(NULL));
    MenuHandler menu;
    menu.startMenu();
}
