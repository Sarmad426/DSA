# Insertion Sort

## Introduction

Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, it provides several advantages, such as simplicity and ease of implementation, making it suitable for small datasets or partially sorted arrays.

## Working of Insertion Sort

The Insertion Sort algorithm works by dividing the input array into a sorted and an unsorted region. Initially, the sorted region consists of only the first element, and the unsorted region contains the remaining elements. The algorithm iterates through the unsorted region, taking one element at a time and placing it in its correct position within the sorted region. This process is repeated until the entire array is sorted.

## Suitability

Insertion Sort is well-suited for small datasets or partially sorted arrays. Its simplicity makes it easy to understand and implement. However, its time complexity of O(n^2) makes it inefficient for large datasets compared to more advanced sorting algorithms.

## Algorithm

The Insertion Sort algorithm can be described with the following steps:

1. Start with the second element (assuming the first element is already sorted).
2. Compare the current element with the elements in the sorted region.
3. Move elements greater than the current element to the right.
4. Insert the current element in its correct position within the sorted region.
5. Repeat steps 2-4 until all elements are sorted.

## C++ Implementation

```cpp
#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key in its correct position
        arr[j + 1] = key;
    }
}

int main() {
    // Example usage
    std::vector<int> exampleArray = {12, 11, 13, 5, 6};
    
    std::cout << "Original Array: ";
    for (int num : exampleArray) {
        std::cout << num << " ";
    }

    insertionSort(exampleArray);

    std::cout << "\nSorted Array: ";
    for (int num : exampleArray) {
        std::cout << num << " ";
    }

    return 0;
}
```

## Example

Consider the following example using the array `{12, 11, 13, 5, 6}`:

1. Initial state: `[12] [11, 13, 5, 6]`
2. After the first iteration: `[11, 12] [13, 5, 6]`
3. After the second iteration: `[11, 12, 13] [5, 6]`
4. After the third iteration: `[5, 11, 12, 13] [6]`
5. After the fourth iteration: `[5, 6, 11, 12, 13]`

The sorted array is `[5, 6, 11, 12, 13]`.

This example illustrates the step-by-step process of the Insertion Sort algorithm.
