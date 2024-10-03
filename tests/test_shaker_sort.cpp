#include <iostream>
#include <vector>
#include "test_utils.h"
#include "shaker_sort.cpp"

void testShakerSort_Positive() {
    std::vector<int> arr = { 5, 3, 8, 6, 2 };
    shakerSort(arr);
    std::vector<int> expected = { 2, 3, 5, 6, 8 };
    if (areVectorsEqual(arr, expected)) {
        std::cout << "Test 1 Passed: Positive Case" << std::endl;
    }
    else {
        std::cout << "Test 1 Failed: Positive Case" << std::endl;
    }
}

void testShakerSort_EmptyArray() {
    std::vector<int> arr = {};
    shakerSort(arr);
    std::vector<int> expected = {};
    if (areVectorsEqual(arr, expected)) {
        std::cout << "Test 2 Passed: Empty Array" << std::endl;
    }
    else {
        std::cout << "Test 2 Failed: Empty Array" << std::endl;
    }
}

void testShakerSort_SingleElement() {
    std::vector<int> arr = { 7 };
    shakerSort(arr);
    std::vector<int> expected = { 7 };
    if (areVectorsEqual(arr, expected)) {
        std::cout << "Test 3 Passed: Single Element" << std::endl;
    }
    else {
        std::cout << "Test 3 Failed: Single Element" << std::endl;
    }
}

void testShakerSort_SortedArray() {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    shakerSort(arr);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    if (areVectorsEqual(arr, expected)) {
        std::cout << "Test 4 Passed: Sorted Array" << std::endl;
    }
    else {
        std::cout << "Test 4 Failed: Sorted Array" << std::endl;
    }
}

void testShakerSort_ReverseArray() {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    shakerSort(arr);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    if (areVectorsEqual(arr, expected)) {
        std::cout << "Test 5 Passed: Reverse Array" << std::endl;
    }
    else {
        std::cout << "Test 5 Failed: Reverse Array" << std::endl;
    }
}

void runShakerSortTests() {
    testShakerSort_Positive();
    testShakerSort_EmptyArray();
    testShakerSort_SingleElement();
    testShakerSort_SortedArray();
    testShakerSort_ReverseArray();
}