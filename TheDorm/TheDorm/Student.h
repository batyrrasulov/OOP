//
//  Student.h
//  TheDorm
//
//  Created by Batyr Rasulov on 2/28/23.
//
#include <iostream>
#include <fstream>
#ifndef Student_h
#define Student_h

using namespace std;

class Student {
private:
    string name, homeTown, major, temp;
    fstream myFile;
public:
    Student();
    Student(string n, string h, string m);
    void setName(string n, string ht, string m);
    void show();
    friend ostream& operator << (ostream &out, const Student &c);
};

#endif /* Student_h */
