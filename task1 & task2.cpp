#include <iostream>
#include "main.h"

// task 1 (swap function)
template <typename T>
void swap(T *a, T *b) {
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

// task 2 ()
void task2() {
    int sizeOfArray;
    std::cout<<"Enter the length of your array: "<<std::endl;
    std::cin>>sizeOfArray;

    int *arr = new int[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        arr[i] = rand()%100;
    }


    std::cout<<"The initial array of integers is: "<<std::endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout<<arr[i]<<" ";
    }

    std::cout<<std::endl;

    int *pa = &arr[0];
    int *pla = &arr[sizeOfArray - 1];

    int temporary_value = *pa;
    *pa = *pla;
    *pla = temporary_value;

    std::cout<<"The resulted array of integers is: "<<std::endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout<<arr[i]<<" ";
    }
}