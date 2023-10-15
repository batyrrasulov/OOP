//
//  Name.h
//  TheFileThing
//
//  Created by Batyr Rasulov on 2/23/23.
//
#ifndef Name_h
#define Name_h
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Name {
private:
    fstream myFile;
    string fName, lName, temp;
public:
    Name();
    Name(string fN, string lN);
    void writeName(string fN, string lN);
    void readName();
};

#endif /* Name_h */
