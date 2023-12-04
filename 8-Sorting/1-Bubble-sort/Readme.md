# Bubble Sort Documentation

## Overview

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Algorithm

1. **Start:**
   - Initialize a boolean variable `swapped` to true.

2. **Iterate through the list:**
   - Repeat the following steps until `swapped` is false:
     - Set `swapped` to false.
     - Iterate through the list from the beginning to the second-to-last element.

3. **Compare and swap:**
   - For each pair of adjacent elements, if they are in the wrong order (i.e., `element[i] > element[i+1]`), swap them and set `swapped` to true.

4. **Repeat:**
   - If any swaps were made in the previous pass, repeat the process. Otherwise, the list is sorted, and the algorithm terminates.

## C++ Implementation

```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    bool swapped = true;
    
    while (swapped) {
        swapped = false;
        
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                // Swap the elements
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                
                swapped = true;
            }
        }
    }
}

int main() {
    int data[] = {14,33,27,35,10};
    int size = sizeof(data) / sizeof(data[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    
    bubbleSort(data, size);
    
    cout << "\nSorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
}
```

## C++ Implementation using `vector` library

```cpp
#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < arr.size() - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
    }
}

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};
    
    std::cout << "Original array: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    
    bubbleSort(data);
    
    std::cout << "\nSorted array: ";
    for (int num : data) {
        std::cout << num << " ";
    }
}
```

## Step-by-Step Guide

1. **Initialization:**
   - Initialize a boolean variable `swapped` to true.

2. **First Pass:**
   - Iterate through the list:
     - Compare and swap adjacent elements if they are in the wrong order.
     - Update `swapped` if any swaps are made.

3. **Subsequent Passes:**
   - Repeat the process until no swaps are made in a pass, indicating the list is sorted.

4. **Termination:**
   - The algorithm terminates when the entire list is sorted.

## Interview Questions

1. **What is Bubble Sort?**
   - Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

2. **What is the time complexity of Bubble Sort?**
   - The time complexity of Bubble Sort is O(n^2) in the worst and average cases.

3. **Can Bubble Sort be considered efficient for large datasets? Why or why not?**
   - Bubble Sort is not considered efficient for large datasets because of its quadratic time complexity, making it less suitable for large-scale sorting tasks.

## Quiz

### Question 1:
What is the main idea behind the Bubble Sort algorithm?

a) Divide and conquer  
b) Greedy approach  
c) Repeatedly compare and swap adjacent elements  
d) Hashing

**Answer: c) Repeatedly compare and swap adjacent elements**

### Question 2:
What is the time complexity of Bubble Sort in the worst case?

a) O(n)  
b) O(n log n)  
c) O(n^2)  
d) O(log n)

**Answer: c) O(n^2)**

### Question 3:
When does the Bubble Sort algorithm terminate?

a) When the list is empty  
b) When the list is partially sorted  
c) When no swaps are made in a pass  
d) When all elements are compared once

**Answer: c) When no swaps are made in a pass**