#include <iostream>
#include "main.h"

void locMinFinder(int arr[], int size_of_array) {
    int count = 0;
    for (int i = 1; i < size_of_array - 1; i++)
    {
        if (arr[i] < arr[i-1] and arr[i] < arr[i+1])
        {
            count += 1;
            i++;
        }
    }
    std::cout << "This array has " << count << " locmin" << std::endl;
}

void task7() {
    int num1;
    std::cout << "Enter length of array: ";
    std::cin >> num1;
    int *array1 = new int[num1];
    std::cout << "Enter " << num1 << " values for array" << std::endl;
    for (int i = 0; i < num1; i++)
    {
        std::cin >> array1[i];
    }
    std::cout << "Your array" << std::endl;
    printArray(array1, num1);
    locMinFinder(array1, num1);
}