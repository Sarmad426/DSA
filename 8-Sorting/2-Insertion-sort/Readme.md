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
#include<iostream>
using namespace std;

class Insertion_Sort {
    int size;
    int *arr; 
public:
    Insertion_Sort() {
        cout << "Input array Size: " << endl;
        cin >> size;

        // Dynamically allocate memory for the array
        arr = new int[size];
    }

    ~Insertion_Sort() {
        // Deallocate memory when the object is destroyed
        delete[] arr;
    }

    void input_array() {
        cout << "Input " << size << " values in array: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
            cout << endl;
        }
    }

    void display_array() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << ", ";
        }
    }

    void sort() {
        int key, j;

        for (int i = 1; i < size; i++) {
            key = arr[i];
            j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }

            arr[j + 1] = key;
        }
    }
};

int main() {
    Insertion_Sort array;
    array.input_array();
    array.sort();
    array.display_array();
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

## Interview Questions

## 1. What is Insertion Sort, and how does it work?

**Answer:**
Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It works by dividing the input array into a sorted and an unsorted region, then iterates through the unsorted region, placing each element in its correct position within the sorted region.

## 2. When is Insertion Sort most suitable?

**Answer:**
Insertion Sort is most suitable for small datasets or partially sorted arrays due to its simplicity and ease of implementation.

## Multiple Choice Questions (MCQs)

### 3. What is the time complexity of Insertion Sort?

- [ ] O(log n)
- [ ] O(n)
- [x] O(n^2)
- [ ] O(n log n)

### 4. In the Insertion Sort algorithm, what is the role of the sorted region?

- [ ] It contains only odd numbers.
- [ ] It remains empty throughout the process.
- [x] It grows with each iteration, containing sorted elements.
- [ ] It is randomly rearranged.

### 5. How does Insertion Sort compare to more advanced algorithms like quicksort in terms of efficiency?

- [ ] Insertion Sort is always more efficient.
- [ ] QuickSort is less efficient for small datasets.
- [x] QuickSort is generally more efficient for large datasets.
- [ ] There is no significant difference in efficiency.
