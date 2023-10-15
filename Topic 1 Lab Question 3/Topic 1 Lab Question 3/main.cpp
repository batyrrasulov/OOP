//
//  main.cpp
//  Topic 1 Lab Question 3
//
//  Created by Batyr Rasulov on 1/27/23.
//
#include <iostream>

using namespace std;

int x = 5; //global x
int main() {
    srand(time_t(NULL));
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 20;
    }
    //print the array using the array name
    for (int i = 0; i < 10; i++) {
        std :: printf("%d ", arr[i]);
    }
    std :: cout << std :: endl;
    //print the array using only the pointer arrPtr
    //HINT: look up pointer arithmetic
    int* arrPtr = arr;
    for (int i = 0; i < 10; i++) {
        //arrPtr + (i * sizeOf(int))
        //cout << * (arrPtr + i) << " "
        printf("%d ", *(arrPtr + i));
    }
    //cout << sizeOf(int) << endl
    return 0;
}


