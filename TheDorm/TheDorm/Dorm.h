//
//  Dorm.h
//  TheDorm
//
//  Created by Batyr Rasulov on 2/28/23.
//
#include <iostream>
#include <vector>
#include "Student.h"
#ifndef Dorm_h
#define Dorm_h

using namespace std;

class Dorm {
private:
    Student name;
    string major;
    vector <Student> rooms;
public:
    Dorm();
    Dorm(string n, string hT, string major);
    void getStudent();
    void setStudent();
};

#endif /* Dorm_h */
