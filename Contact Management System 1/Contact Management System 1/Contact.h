//
//  Contact.h
//  Contact Management System 1
//
//  Created by Batyr Rasulov on 3/4/23.
//
#include <iostream>
#include "Name.h"
#include "Address.h"
#ifndef Contact_h
#define Contact_h

using namespace std;

//create a class named Contact
class Contact {
private:
    //private instance variables
    Name name;
    Address address;
    string phoneNumber;
public:
    //default constructor
    Contact() {
        //initialize phoneNumber with an empty string
        phoneNumber = " ";
    }
    //parameterized constructor
    Contact(string first_name, string last_name, string middle_name, string streetAddress, string city, string state, string zipCode, string phoneNumber) {
        //initialize name and address to the given strings
        setName(first_name, last_name, middle_name);
        setAddress(streetAddress, city, state, zipCode);
        //initialize phoneNumber to the given parameter
        this->phoneNumber = phoneNumber;
    }
    //copy constructor
    Contact(const Contact &c) {
        name = c.name;
        address = c.address;
        phoneNumber = c.phoneNumber;
    }
    //getters for the all instance variables
    string getName() {
        return name.getFirst_Name() + " " + name.getLast_Name() + " " + name.getMiddle_Name();
    }
    string getAddress() {
        return address.getStreetAddress() + ", " + address.getCity() + ", " + address.getState() + " - " + address.getZipCode();
    }
    string getPhoneNumber() {
        return phoneNumber;
    }
    //setters for the all instance variables
    void setName(string first_name, string last_name, string middle_name) {
        this->name.setFirst_Name(first_name);
        this->name.setLast_Name(last_name);
        this->name.setMiddle_Name(middle_name);
    }
    void setAddress(string streetAddress, string city, string state, string zipCode) {
        this->address.setStreetAddress(streetAddress);
        this->address.setCity(city);
        this->address.setState(state);
        this->address.setZipCode(zipCode);
    }
    void setPhoneNumber(string phoneNumber) {
        this->phoneNumber = phoneNumber;
    }
    //method to display the contact information details
    void showContact() {
        name.showName();
        address.showAddress();
        cout << phoneNumber << endl;
    }
    //declare the overloaded input and ouput operators
    friend ostream &operator << (ostream &out, const Contact &c);
    friend istream &operator >> (istream &in, Contact &c);
};
//define the overloaded ouput operator
ostream &operator << (ostream &out, const Contact &c) {
    out << c.name;
    out << c.address;
    out << c.phoneNumber << endl;
    return out;
}
//define the overloaded input operator
istream &operator >> (istream &in, Contact &c) {
    in >> c.name;
    in >> c.address;
    cout << "Enter the phone number: ";
    getline(in, c.phoneNumber);
    return in;
}

#endif /* Contact_h */

