#include <iostream>
#include "main.h"


void task3() {
    double **p = nullptr;
    double *ptr = new double;
    double value = 2;

    delete ptr;
    ptr = &value;

    p = &ptr;

    std::cout<<**p;

    delete p;

}
