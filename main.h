#ifndef SECOND_HOMEWORK_MAIN_H
#define SECOND_HOMEWORK_MAIN_H

#pragma once
void printArray(int arr[], int size_of_array);
void printMatrix(int **matrix, int rows, int strings);

template <typename T>
void swap(T *a, T *b);
void task2();
void task3();
void task4Func(float *array,int sizeOfArray);
void task4();
void arrayChanger(int arr[], int size_of_array);
void task5();
template <typename T>
void fillArray(int n, T* arr);
template <typename T>
void printArray(int n, T* arr);
void task6();
void locMinFinder(int arr[], int size_of_array);
void task7();
template <typename T>
void fillArrayKB(int n, T* arr);
template <typename T>
void fillMatrix(int n, int m, T **matrix);
template <typename T>
void sumBetweenZeros(int m, const T *arr);
template <typename T>
void printMatrix(int n, int m, T **matrix);
void task8();
int* insertionSortFromMinToMax(int arr[], int size_of_array);
int* insertionSortFromMaxToMin(int arr[], int size_of_array);
void task9();
template <typename T>
void fillArrayTask10(int n, T* arr, int *max);
void task10();
void editMatrix(int **matrix, int rows, int strings);
void task11();
template <typename T>
int sum(int n, T *arr);
template <typename T>
void findMinMax(int n, int m, T **matrix);
void task12();
void connectArrays(int *num1, int *num2, int m, int n);
void task13();
void task14();
void printMatrixTask15(int **matrix, int rows);
void paskalTriangle(int **matrix, int rows);
void task15();








#endif //SECOND_HOMEWORK_MAIN_H
