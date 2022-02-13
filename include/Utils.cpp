#include "SortingAlgorithm.h"

namespace CSM21002 {
    void SortingAlgorithms::swap(int &X, int &Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }
}