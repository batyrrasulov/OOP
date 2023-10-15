//
//  Address.h
//  Contact Management System 1
//
//  Created by Batyr Rasulov on 3/4/23.
//
#include <iostream>
#ifndef Address_h
#define Address_h

using namespace std;

//create a class named Address
class Address {
public:
    //public instance variables
    string streetAddress, city, state, zipCode;
    //default constructor
    Address() {
        //initialize instance variables with an empty strings
        streetAddress = " ";
        city = " ";
        state = " ";
        zipCode = " ";
    }
    //parameterized constructor
    Address(string streetAddress, string state, string city, string zipCode) {
        //initialize instance variables to the given parameters
        this->streetAddress = streetAddress;
        this->city = city;
        this->state = state;
        this->zipCode = zipCode;
    }
    //copy constructor
    Address(const Address &a) {
        streetAddress = a.streetAddress;
        city = a.city;
        state = a.state;
        zipCode = a.zipCode;
    }
    //getters for the all instance variables
    string getStreetAddress() {
        return streetAddress;
    }
    string getCity() {
        return city;
    }
    string getState() {
        return state;
    }
    string getZipCode() {
        return zipCode;
    }
    //setters for the all instance variables
    void setStreetAddress(string streetAddress) {
        this->streetAddress = streetAddress;
    }
    void setCity(string city) {
        this->city = city;
    }
    void setState(string state) {
        this->state = state;
    }
    void setZipCode(string zipCode) {
        this->zipCode = zipCode;
    }
    //method to display the address
    void showAddress() {
        cout << streetAddress << ", " << city << ", " << state << " " << zipCode << endl;
    }
    //declare the overloaded input and output operators
    friend ostream &operator << (ostream &out, const Address &a);
    friend istream &operator >> (istream &in, const Address &a);
};
//define the overloaded ouput operator
ostream &operator << (ostream &out, const Address &a) {
    out << a.streetAddress << ", " << a.city << ", " << a.state << " " << a.zipCode << endl;
    return out;
}
//define the overloaded input operator
istream &operator >> (istream &in, Address &a) {
    cout << "Enter the street address: ";
    getline(in, a.streetAddress);
    cout << "Enter the city: ";
    getline(in, a.city);
    cout << "Enter the state: ";
    getline(in, a.state);
    cout << "Enter the zip code: ";
    getline(in, a.zipCode);
    return in;
}

#endif /* Address_h */
