#include <iostream>
#include "main.h"

void task4Func(float *array,int sizeOfArray) { // bubble sort

    int count = 0;
    for (int j = 0; j < sizeOfArray - 1; j++){

        for (int i = 0; i < sizeOfArray - 1; i++) {

            if (array[i] < array[i + 1]) {
                count++;
                std::swap(array[i], array[i + 1]);
            }

        }
    }
    std::cout << "The number of permutations: " << count << std:: endl;
}


void task4() {
    int sizeOfArray = 12;

    float* array = new float[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        std:: cin >> array[i];
    }

    task4Func(array, sizeOfArray);

    for (int i = 0; i < sizeOfArray; i++)
    {
        std:: cout << array[i] << " ";
    }
}