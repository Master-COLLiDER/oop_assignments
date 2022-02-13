#pragma once

namespace CSM21002 {
    class SortingAlgorithms final {
    private:
        static void swap(int &X, int &Y);

        static void quickSort(int arr[], int low, int high);

        static int partition(int arr[], int low, int high);

        static void mergeSort(int array[], int begin, int end);

        static void merge(int array[], int left, int mid, int right);

        static void countSort(int arr[], int n, int exp);

        static int getMax(int arr[], int n);

    public:
        SortingAlgorithms() = delete;

        SortingAlgorithms(const SortingAlgorithms &) = delete;

        SortingAlgorithms(SortingAlgorithms &&) = delete;

        ~SortingAlgorithms() = delete;


        static void bubbleSort(int arr[], int n);

        static void bubbleSortImproved(int arr[], int n);

        static void selectionSort(int arr[], int n);

        static void insertionSort(int arr[], int n);

        static void quickSort(int arr[], int n);

        static void mergeSort(int arr[], int n);

        static void radixSort(int arr[], int n);
    };

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