//
//  main.cpp
//  main
//
//  Created by Batyr Rasulov on 1/12/23.
//

#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char * argv[]) {
    vector<int> v;
    
    //Add elements to the vector
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    
    // Print the elements in vector
    cout << "Elements in vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    // Remove the last element of the vector
    v.pop_back();
    cout << "Elements in vector after removing last element : ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    // Insert an element at a specific position
    v.insert(v.begin() + 3, 99);
    cout << "Elements in vector after insertin 99 at index 3 : ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    //Remove an element at a specific position
    v.erase(v.begin() + 4);
    cout << "Elements in vector after removing the element at index 4 : ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    return 0;
}
