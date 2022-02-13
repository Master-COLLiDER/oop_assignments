#include "SortingAlgorithm.h"

namespace CSM21002 {

    void SortingAlgorithms::insertionSort(int arr[], int n) {

        int i, current, j;
        for (i = 1; i < n; i++) {
            current = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > current) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = current;
        }
    }
}
