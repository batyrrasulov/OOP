//
//  Barn.cpp
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#include "Barn.h"

//default constructor
Barn :: Barn() {
    //add some Pig to pigPen
    pigPen.push_back(Pig("Barnum", 200));
    //adds some Chicken to coop
    coop.push_back(Chicken("Evil Betty", 8));
    //add some Cow to cowPen
    cowPen.push_back(Cow("Rosy", 14));
}
//call eat method of Pig
void Barn :: feedPigs() {
    for (int i = 0; i < pigPen.size(); i++) {
        pigPen[i].eat();
        pigPen[i].gainWeight();
        cout << endl;
    }
}
//call eat method of Chicken
void Barn :: feedChickens() {
    for (int i = 0; i < coop.size(); i++) {
        coop[i].eat();
        coop[i].gainWeight();
        cout << endl;
    }
}
//call eat method of Cows
void Barn :: feedCows() {
    for (int i = 0; i < cowPen.size(); i++) {
        cowPen[i].eat();
        cowPen[i].gainWeight();
        cout << endl;
    }
}
