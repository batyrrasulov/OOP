//
//  main.cpp
//  Contact Management System 1 and 2
//
//  Created by Batyr Rasulov on 3/5/23.
//
#include "Contact.h"
#include <iostream>

int main() {
    Contact contact;
    int choice;
    do {
        //the user can choose to input a new contact
        std::cout << "1. Add contact\n";
        //the user can search contacts by their identifier
        std::cout << "2. Search by ID\n";
        //the user can search contacts by their last name
        std::cout << "3. Search by last name\n";
        //the user can wish to display or show all contacts
        std::cout << "4. Display all contacts\n";
        //the user can wish to save contacts to file in this case named "contacts.txt"
        std::cout << "5. Save contacts to file\n";
        //the user can exit the contact management system
        std::cout << "6. Exit\n";
        //here user should enter a number according to their preference of choice what they wish to do
        std::cout << "Enter choice: ";
        std::cin >> choice;
        //switch-case method for those aforementioned actions
        switch (choice) {
            case 1:
                contact.addContact();
                break;
            case 2:
                contact.searchById();
                break;
            case 3:
                contact.searchByName();
                break;
            case 4:
                contact.displayAllContacts();
                break;
            case 5:
                contact.saveContactsToFile();
                break;
            case 6:
                //exit and goodbyes
                std::cout << "Goodbye!" << std::endl;
                break;
            default:
                //invalid input try again with numbers 1-6
                std::cout << "Invalid choice." << std::endl;
        }
    } while (choice != 6);
    return 0;
}
