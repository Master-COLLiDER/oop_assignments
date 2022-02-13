#include "SearchingAlgorithm.h"

namespace CSM21002 {
    int SearchingAlgorithm::BinarySearch(int arr[], int n, int x) {
        return BinarySearch(arr, 0, n, x);
    }

    int SearchingAlgorithm::BinarySearch(int arr[], int l, int r, int x) {
        while (l <= r) {
            int m = l + (r - l) / 2;

            if (arr[m] == x)
                return m;

            if (arr[m] < x)
                l = m + 1;
            else
                r = m - 1;
        }

        return -1;
    }
}