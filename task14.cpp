#include <iostream>
#include "main.h"

void task14() {
    int sizeOfArray;
    std::cout<<"Enter the length of your array: "<<std::endl;
    std::cin>>sizeOfArray;

    int *arr = new int[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout<<"Enter the price of the stock: ";

        int element;
        std::cin>>element;
        arr[i] = element;
    }

    std::cout<<"The initial array of stock prices is: "<<std::endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout<<arr[i]<<" ";
    }

    std::cout<<std::endl;

    int maximum = 0;

    for(int i = 0; i < sizeOfArray - 1; i++)
    {
        for (int j = i + 1; j < sizeOfArray; j++)
        {
            if(arr[j] - arr[i] > maximum)
            {
                maximum = arr[j] - arr[i];
            }
        }
    }

    delete[] arr;

    std::cout<<"The maximum profit you can achieve through this transaction is: "<< maximum;
}