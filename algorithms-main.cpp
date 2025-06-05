#include "my_functions.h"
#include <iostream>

int main(int argc, char * argv[])
{
    std::vector<int> numbers = {2, 5, 6, 9, 4, 7, 3};

    // Bubble Sort
    printArray(numbers);
    bubbleSort(numbers);
    printArray(numbers);

    return 0;
}
