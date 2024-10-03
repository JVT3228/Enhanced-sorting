#include <iostream>
#include <vector>
#include "binary_insertion_sort.h"
#include "shaker_sort.h"

template <typename T>
void printArray(const std::vector<T>& arr) {
    for (const T& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> array1 = { 5, 3, 8, 6, 2 };
    std::vector<int> array2 = { 5, 4, 3, 2, 1 };

    std::cout << "Original array (Binary Insertion Sort): ";
    printArray(array1);
    binaryInsertionSort(array1);
    std::cout << "Sorted array (Binary Insertion Sort): ";
    printArray(array1);
    std::cout << std::endl;

    std::cout << "Original array (Shaker Sort, reverse order): ";
    printArray(array2);
    shakerSort(array2);
    std::cout << "Sorted array (Shaker Sort): ";
    printArray(array2);
    std::cout << std::endl;

    std::cout << "Original array (Shaker Sort, already sorted): ";
    printArray(array2);
    shakerSort(array2);
    std::cout << "Sorted array (Shaker Sort, already sorted): ";
    printArray(array2);
    std::cout << std::endl;

    std::cout << "Original array (Binary Insertion Sort, already sorted): ";
    printArray(array1);
    binaryInsertionSort(array1);
    std::cout << "Sorted array (Binary Insertion Sort, already sorted): ";
    printArray(array1);
    std::cout << std::endl;

    return 0;
}