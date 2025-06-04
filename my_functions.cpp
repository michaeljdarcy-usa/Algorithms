#include "my_functions.h"
#include <iostream>

void printArray(std::vector<int>& arr)
{
    for (int i : arr)
    {
        std::cout << arr[i] << ", ";
    }
}
