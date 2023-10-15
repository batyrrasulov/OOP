//
//  Name.cpp
//  TheFileThing
//
//  Created by Batyr Rasulov on 2/23/23.
//
#include "Name.h"
#include <stdio.h>
#include <iostream>

using namespace std;

Name::Name() {
    temp = fName = lName = " ";
}
Name::Name(string fN, string lN) {
    fName = fN;
    lName = lN;
    myFile.open("name.txt", ios::app);
    myFile << fName << " " << lName << endl;
    myFile.close();
}
void Name::writeName(string fN, string lN) {
    myFile.open("name.txt", ios::app);
    myFile << fName << " " << lName << endl;
    myFile.close();
}
void Name::readName() {
    myFile.open("name.txt");
    while(getline(myFile, temp)) {
        cout << temp << endl;
    }
}

