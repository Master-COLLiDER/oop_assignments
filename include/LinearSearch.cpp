#include "SearchingAlgorithm.h"

namespace CSM21002{
    int SearchingAlgorithm::LinearSearch(int arr[], int n, int x){
        int i;
        for (i = 0; i < n; i++)
            if (arr[i] == x)
                return i;
        return -1;
    }
}