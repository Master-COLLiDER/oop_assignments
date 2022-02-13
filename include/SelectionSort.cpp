#include "SortingAlgorithm.h"

namespace CSM21002 {

    void SortingAlgorithms::selectionSort(int arr[], int n) {
        int min_index;

        for (int i = 0; i < n - 1; i++) {
            min_index = i;
            for (int j = i + 1; j < n; j++)
                if (arr[j] < arr[min_index])
                    min_index = j;

            swap(arr[min_index], arr[i]);
        }
    }

}