#include <iostream>
#include "SortingAlgorithm.h"


void printArray(int arr[] , int n) {
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

int main() {

    srand(time(nullptr));

    int n = 10+rand()%10;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        arr[i] = rand()%200;
    }
    std::cout << "Unsorted Array: \n";
    printArray(arr, n);
    CSM21002::BubbleSort(arr , n);
    std::cout << "BubbleSort: \n";
    printArray(arr, n);


    return 0;
}

