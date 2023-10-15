//
//  main.cpp
//  test1
//
//  Created by Batyr Rasulov on 1/10/23.
//

#include <iostream>

using namespace std;

int main() {
    // Prompt the user to enter 2 integers, m and n
    int m, n;
    cout << "Enter an integer m, and an integer n: " << endl;
    cin >> m >> n;
    
    // Calculate the quotient q, and remainder r
    int q = m / n;
    int r = m % n;
    
    //Print the results
    cout << m << " = " << n << " * " << q << " + " << r << endl;
    return 0;
}
