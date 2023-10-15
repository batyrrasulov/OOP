//
//  main.cpp
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#include <iostream>
#include "Barn.h"

using namespace std;

int main() {
    Barn barn;
    barn.feedPigs();
    barn.feedChickens();
    barn.feedCows();
    
    return 0;
}
