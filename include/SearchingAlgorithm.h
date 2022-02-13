#pragma once

namespace CSM21002 {
    class SearchingAlgorithm final {
        static int BinarySearch(int arr[], int l, int r, int x);
    public:
        SearchingAlgorithm() = delete;
        SearchingAlgorithm(const SearchingAlgorithm &) = delete;
        SearchingAlgorithm(SearchingAlgorithm &&) = delete;
        ~SearchingAlgorithm() = delete;


        static int LinearSearch(int arr[], int n, int x);
        static int BinarySearch(int arr[], int n, int x);
    };
}