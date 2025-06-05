#include <vector>
#include <iostream>
#include <algorithm>

void printArray(const std::vector<int>& arr)
{
    for (int i : arr)
    {
        std::cout << i << ", ";
    }
    std::cout << "\n";
}

void bubbleSort(std::vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                std::swap(arr[i], arr[j]);
            } 
        }
    }
    std::cout << "\n";
}
