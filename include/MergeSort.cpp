#include "SortingAlgorithm.h"

namespace CSM21002 {

    void SortingAlgorithms::merge(int array[], int left, int mid, int right) {
        auto const subArrayOne = mid - left + 1;
        auto const subArrayTwo = right - mid;

        auto *leftArray = new int[subArrayOne],
                *rightArray = new int[subArrayTwo];

        for (auto i = 0; i < subArrayOne; i++)
            leftArray[i] = array[left + i];
        for (auto j = 0; j < subArrayTwo; j++)
            rightArray[j] = array[mid + 1 + j];

        auto indexOfSubArrayOne = 0,
                indexOfSubArrayTwo = 0;
        int indexOfMergedArray = left;


        while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
            if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
                array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
                indexOfSubArrayOne++;
            } else {
                array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
                indexOfSubArrayTwo++;
            }
            indexOfMergedArray++;
        }

        while (indexOfSubArrayOne < subArrayOne) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
            indexOfMergedArray++;
        }

        while (indexOfSubArrayTwo < subArrayTwo) {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
            indexOfMergedArray++;
        }
    }

    void SortingAlgorithms::mergeSort(int array[], int begin, int end) {
        if (begin >= end)
            return;

        auto mid = begin + (end - begin) / 2;
        mergeSort(array, begin, mid);
        mergeSort(array, mid + 1, end);
        merge(array, begin, mid, end);
    }
    void SortingAlgorithms::mergeSort(int arr[] ,int n){
        mergeSort(arr, 0, n - 1);
    }
}