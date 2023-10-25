# Search

Search is the process of searching an element in an array.

## Linear Search

Linear search, also known as sequential search, is a simple searching algorithm that searches for a specific element in a list by checking each element in the list, one by one, until the desired element is found or the end of the list is reached. Linear search is not the most efficient search algorithm, especially for large datasets, but it is straightforward and works for unsorted or sorted lists.

### Linear Search Algorithm

```pseudo
Linear Search ( Array A, Value x)
Step 1: Set i to 1
Step 2: if i > n then go to step 7
Step 3: if A[i] = x then go to step 6
Step 4: Set i to i + 1
Step 5: Go to Step 2
Step 6: Print Element x Found at index i and go to step 8
Step 7: Print element not found
Step 8: Exit
```

### Linear Search C++ implementation

```cpp
#include <iostream>
using namespace std;
int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return 0;
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int result = linear_search(arr, n, target);
    if (result != 0) {
       cout <<target<<" found at index " << result <<endl;
    } else {
        cout << "Element not found in the array." <<endl;
    }
}
```

Now, let's break down how linear search works:

**Algorithm for Linear Search:**

1. Start from the first element in the list.
2. Compare the current element with the target element you are searching for.
3. If the current element is equal to the target element, return the index of the current element, indicating that the element is found.
4. If the current element is not equal to the target element, move to the next element in the list and repeat step 2.
5. Continue this process until you either find the target element or reach the end of the list.
6. If you reach the end of the list without finding the target element, return -1 to indicate that the element is not in the list.

In the code provided, the `linear_search` function implements this algorithm. It takes an array `arr`, the number of elements `n`, and the `target` element to search for. It returns the index of the `target` element if found, or -1 if it's not in the array.

In the `main` function, an example array is defined, and a target element is specified. The `linear_search` function is then called to search for the target element in the array, and the result is printed to the console.
