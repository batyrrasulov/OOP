//
//  main.cpp
//  Topic Lab Question 2
//
//  Created by Batyr Rasulov on 1/17/23.
//
#include <iostream>
#include <cmath>

void recolor(int& red, int& green, int& blue){
    // Reduce red value by 10%
    // Reduce green value by 15%
    red = red - round(red * .1);
    green = green - round(green * .15);
}
int main() {

    int r, g, b;
    std::cout << "Enter integer values for red, green, and blue. " << "Values v must be in range s.t. 0 <= v < 256.\n";
    std::cout << "Red: ";
    std::cin >> r;
    std::cout << "Green: ";
    std::cin >> g;
    std::cout << "Blue: ";
    std::cin >> b;
    
    recolor(r, g, b);
    
    std::cout << "After recoloring, ";
    std::printf("red = %d, green = %d, blue = %d\n", r, g, b);
}
