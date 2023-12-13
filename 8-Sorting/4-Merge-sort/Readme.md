# Merge Sort Documentation

## Introduction

Merge Sort is a divide-and-conquer algorithm that efficiently sorts an array or a list. It works by dividing
the input into two halves, recursively sorting each half, and then merging the sorted halves to produce the 
final sorted array.

### Algorithm Steps:

1. **Divide:** Divide the unsorted array into two halves.
2. **Conquer:** Recursively sort the two halves.
3. **Merge:** Merge the sorted halves to produce the final sorted array.

## Implementation in C++

```cpp
#include <iostream>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Same as (left+right)/2, but avoids overflow for large left and right
        int mid = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        std::cout << arr[i] << " ";

    mergeSort(arr, 0, arr_size - 1);

    std::cout << "\nSorted array is \n";
    for (int i = 0; i < arr_size; i++)
        std::cout << arr[i] << " ";

    return 0;
}
```

## Complexity Analysis

- **Time Complexity:** O(n log n) - It consistently divides the array into two halves until the base case (single element) is reached, and then merges them in linear time.
- **Space Complexity:** O(n) - Additional space is required for the temporary arrays used in the merge step.

## Interview Questions

1. **What is Merge Sort, and how does it work?**
   - Merge Sort is a divide-and-conquer algorithm that divides the input into two halves, recursively sorts each half, and then merges the sorted halves.

2. **Explain the steps involved in the Merge Sort algorithm.**
   - Divide: Split the array into two halves.
   - Conquer: Recursively sort each half.
   - Merge: Merge the sorted halves to produce the final sorted array.

3. **What is the time complexity of Merge Sort, and why is it efficient?**
   - Time Complexity: O(n log n). It is efficient due to its consistent division of the array and linear-time merging.

4. **Why is additional space needed in Merge Sort?**
   - Additional space is needed for the temporary arrays used in the merging step.

5. **Can Merge Sort be implemented in-place without using additional space?**
   - In its standard form, Merge Sort is not an in-place sorting algorithm. However, modifications can be made to reduce space complexity.

6. **How does Merge Sort compare to other sorting algorithms like Quick Sort or Bubble Sort?**
   - Merge Sort has a stable O(n log n) time complexity, making it efficient for large datasets. It is more consistent than Quick Sort and generally outperforms quadratic-time algorithms like Bubble Sort.

## Multiple Choice Questions

1. **What is the main principle behind Merge Sort?**
   - [ ] Quick division
   - [x] Divide and conquer
   - [ ] Bubble up
   - [ ] Linear search

2. **What is the time complexity of Merge Sort?**
   - [ ] O(n)
   - [x] O(n log n)
   - [ ] O(n^2)
   - [ ] O(log n)

3. **What step in the Merge Sort algorithm involves combining two sorted halves?**
   - [ ] Divide
   - [ ] Conquer
   - [x] Merge
   - [ ] Sort

4. **Why is additional space required in Merge Sort?**
   - [ ] It isn't; Merge Sort is an in-place algorithm.
   - [ ] To slow down the algorithm
   - [ ] To confuse the input
   - [x] Temporary storage for merging

5. **Which sorting algorithm is more consistent for large datasets?**
   - [ ] Bubble Sort
   - [x] Merge Sort
   - [ ] Quick Sort
   - [ ] Selection Sort