//
//  main.cpp
//  TheFileThing
//
//  Created by Batyr Rasulov on 2/23/23.
//
#include "Name.h"
#include <iostream>

using namespace std;

int main() {
    Name x("Mohammed", "Rasulov");
    x.readName();
    Name y;
    y.writeName("Amir", "Farhad");
    y.readName();
}
