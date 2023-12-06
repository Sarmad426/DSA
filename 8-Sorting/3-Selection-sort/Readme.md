# Selection Sort

## Introduction

Selection Sort is a simple and straightforward sorting algorithm that divides the input array into two parts: the sorted part and the unsorted part. The algorithm repeatedly selects the minimum element from the unsorted part and swaps it with the first element of the unsorted part. This process is iteratively applied until the entire array is sorted.

## Working of Selection Sort

1. **Initialization:** The algorithm begins by considering the entire array as unsorted.
2. **Find Minimum:** It then iterates through the unsorted part to find the minimum element.
3. **Swap:** Once the minimum element is identified, it is swapped with the first element of the unsorted part.
4. **Expand Sorted Part:** The sorted part is expanded to include the newly placed minimum element.
5. **Repeat:** Steps 2-4 are repeated until the entire array is sorted.

## Suitability

Selection Sort is suitable for small datasets or arrays due to its simplicity. However, it is not the most efficient algorithm for large datasets, as its time complexity is O(n^2). In practice, other sorting algorithms like QuickSort or MergeSort are preferred for larger datasets.

## Algorithm

The algorithm can be summarized with the following pseudocode:

```pseudo
function selectionSort(arr):
    n = length of arr
    for i from 0 to n-1:
        minIndex = i
        for j from i+1 to n:
            if arr[j] < arr[minIndex]:
                minIndex = j
        swap(arr[i], arr[minIndex])
```

## C++ Implementation using Object-Oriented Programming

```cpp
#include <iostream>

class SelectionSort {
public:
    static void sort(int arr[], int n) {
        for (int i = 0; i < n - 1; ++i) {
            int minIndex = i;
            for (int j = i + 1; j < n; ++j) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            std::swap(arr[i], arr[minIndex]);
        }
    }
};

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort::sort(arr, n);

    std::cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
```

## Interview Questions

### 1. How does Selection Sort work?

Selection Sort works by dividing the array into two parts: the sorted part and the unsorted part. It repeatedly selects the minimum element from the unsorted part and swaps it with the first element of the unsorted part until the entire array is sorted.

### 2. What is the time complexity of Selection Sort?

The time complexity of Selection Sort is O(n^2), where 'n' is the number of elements in the array.

### Multiple Choice Questions (MCQs)

1. What is the key characteristic of Selection Sort?
   - [ ] In-place sorting
   - [ ] Stable sorting
   - [x] Selection of minimum element
   - [ ] Recursive sorting

2. When is Selection Sort most suitable?
   - [ ] Large datasets
   - [ ] Unsorted datasets
   - [x] Small datasets
   - [ ] Random datasets

3. Which part of the array does Selection Sort continuously expand?
   - [ ] Unsorted part
   - [ ] Middle part
   - [ ] Sorted part
   - [x] None of the above

4. What is the main disadvantage of Selection Sort?
   - [ ] In-place sorting
   - [ ] Stable sorting
   - [x] Quadratic time complexity
   - [ ] Recursive sorting
