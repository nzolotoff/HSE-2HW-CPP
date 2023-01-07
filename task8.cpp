#include <iostream>
#include "main.h"

template <typename T>
void fillArrayKB(int n, T* arr) {
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}

template <typename T>
void fillMatrix(int n, int m, T **matrix) {
    for (int i = 0; i < n; ++i) {
        matrix[i] = new T[m];
        fillArrayKB(m, matrix[i]);
    }
}

template <typename T>
void sumBetweenZeros(int m, const T *arr) {
    int sum = 0;
    for (int i = 0, count = 0; count < 2; ++i) {
        if (arr[i] == 0) count++;
        if (count == 1) sum += arr[i];
    }
    std::cout << "Sum = " << sum << std::endl;
}

template <typename T>
void printMatrix(int n, int m, T **matrix) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

void task8() {
    int n = 10, m = 5;
    int **matrix = new int *[n];
    fillMatrix(n, m, matrix);

    for (int i = 0; i < n; ++i) {
        std::cout << "Row " << i << ' ';
        sumBetweenZeros(m, matrix[i]);
    }
    std::cout << "\nMatrix:" << std::endl;
    printMatrix(n, m, matrix);

    for (int i = 0; i < n; ++i) delete[] matrix[i];
    delete[] matrix;
}