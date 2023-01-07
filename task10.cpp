#include <iostream>
#include "main.h"

template <typename T>
void fillArrayTask10(int n, T* arr, int *max) {
    std::cin >> arr[0];
    *max = 0;
    for (int i = 1; i < n; ++i) {
        std::cin >> arr[i];
        if (arr[i] > arr[*max]) *max = i;
    }
}

void task10() {
    int n = 5, m = 5;
    auto *arr1 = new double[n];
    auto *arr2 = new double[m];
    int max1, max2;
    std::cout << "Input first array:" << std::endl;
    fillArrayTask10(n, arr1, &max1);
    std::cout << "Input second array:" << std::endl;
    fillArrayTask10(m, arr2, &max2);
    std::cout << "Arrays:" << std::endl;
    printArray(n, arr1);
    printArray(n, arr2);

    swap(&arr1[max1], &arr2[max2]);

    std::cout << "After swap of maximums:" << std::endl;
    printArray(n, arr1);
    printArray(n, arr2);

    delete[] arr1;
    delete[] arr2;
}