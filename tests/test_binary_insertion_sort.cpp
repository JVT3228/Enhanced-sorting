#include <iostream>
#include <vector>
#include "test_utils.h"
#include "binary_insertion_sort.cpp"

void testBinaryInsertionSort_Positive() {
    std::vector<int> arr = { 5, 3, 8, 6, 2 };
    binaryInsertionSort(arr);
    std::vector<int> expected = { 2, 3, 5, 6, 8 };
    if (areVectorsEqual(arr, expected)) {
        std::cout << "Test 1 Passed: Positive Case" << std::endl;
    }
    else {
        std::cout << "Test 1 Failed: Positive Case" << std::endl;
    }
}

void testBinaryInsertionSort_EmptyArray() {
    std::vector<int> arr = {};
    binaryInsertionSort(arr);
    std::vector<int> expected = {};
    if (areVectorsEqual(arr, expected)) {
        std::cout << "Test 2 Passed: Empty Array" << std::endl;
    }
    else {
        std::cout << "Test 2 Failed: Empty Array" << std::endl;
    }
}

void testBinaryInsertionSort_SingleElement() {
    std::vector<int> arr = { 7 };
    binaryInsertionSort(arr);
    std::vector<int> expected = { 7 };
    if (areVectorsEqual(arr, expected)) {
        std::cout << "Test 3 Passed: Single Element" << std::endl;
    }
    else {
        std::cout << "Test 3 Failed: Single Element" << std::endl;
    }
}

void testBinaryInsertionSort_SortedArray() {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    binaryInsertionSort(arr);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    if (areVectorsEqual(arr, expected)) {
        std::cout << "Test 4 Passed: Sorted Array" << std::endl;
    }
    else {
        std::cout << "Test 4 Failed: Sorted Array" << std::endl;
    }
}

void testBinaryInsertionSort_ReverseArray() {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    binaryInsertionSort(arr);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    if (areVectorsEqual(arr, expected)) {
        std::cout << "Test 5 Passed: Reverse Array" << std::endl;
    }
    else {
        std::cout << "Test 5 Failed: Reverse Array" << std::endl;
    }
}

void runBinaryInsertionSortTests() {
    testBinaryInsertionSort_Positive();
    testBinaryInsertionSort_EmptyArray();
    testBinaryInsertionSort_SingleElement();
    testBinaryInsertionSort_SortedArray();
    testBinaryInsertionSort_ReverseArray();
}