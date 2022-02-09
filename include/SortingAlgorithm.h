#pragma once

namespace CSM21002 {
    void swap(int &X, int &Y);


    void BubbleSort(int arr[], int n);

    void BubbleSortImproved(int arr[], int n);

    void selectionSort(int arr[], int n);

    void insertionSort(int arr[], int n);

    void quickSort(int arr[], int n);
    void quickSort(int arr[], int low, int high);
    int partition(int arr[], int low, int high);

    void mergeSort(int arr[], int n);
    void mergeSort(int array[], int begin, int end);
    void merge(int array[], int left, int mid, int right);


}

