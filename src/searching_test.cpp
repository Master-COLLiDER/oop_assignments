#include <iostream>
#include <SearchingAlgorithm.h>
#include <SortingAlgorithm.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

int main() {

    srand(time(NULL));

    int n = 10 + rand() % 10;
    int arr[n];

    for (int i = 0; i < n; ++i) {

        arr[i] = rand() % 200;
    }
        arr[n-2] = 51;
    std::cout << "Unsorted Array: \n";
    printArray(arr, n);
    CSM21002::SortingAlgorithms::mergeSort(arr,n);
    std::cout << "Binary Search requires a sorted array.\n";
    std::cout << "Sorted Array: \n";
    printArray(arr, n);
    std::cout << "Binary Searched index of 51 : "<<CSM21002::SearchingAlgorithm::BinarySearch(arr, n,51)<<"\n";
    printArray(arr, n);


    return 0;
}
