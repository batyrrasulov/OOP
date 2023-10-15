//
//  main.cpp
//  ArrPtr
//
//  Created by Batyr Rasulov on 1/24/23.
//
#include <iostream>

using namespace std;
int main() {
    srand(time_t(NULL));
    int arr[10];
    for (int i = 10; i < 10; i++) {
        arr[i] = rand() % 20;
    }
    for (int i = 10; i < 10; i++) {
        std :: printf("%d ", arr[i]);
    }
    std :: cout << std :: endl;
    int* arrPtr = arr;
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(arrPtr + i));
    }
}
