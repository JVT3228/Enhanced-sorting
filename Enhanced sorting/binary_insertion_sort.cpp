#include "binary_insertion_sort.h"

template <typename T>
int binarySearch(const std::vector<T>& arr, T item, int low, int high) {
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (item < arr[mid])
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

template <typename T>
void binaryInsertionSort(std::vector<T>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        T key = arr[i];
        int pos = binarySearch(arr, key, 0, i);
        for (int j = i; j > pos; --j) {
            arr[j] = arr[j - 1];
        }
        arr[pos] = key;
    }
}

template void binaryInsertionSort<int>(std::vector<int>& arr);
template void binaryInsertionSort<double>(std::vector<double>& arr);