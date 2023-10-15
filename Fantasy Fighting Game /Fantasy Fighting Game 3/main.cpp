//
//  main.cpp
//  Fantasy Fighting Game 3
//
//  Created by Batyr Rasulov on 4/29/23.
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
