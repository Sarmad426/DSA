# Binary Search

Binary search is a popular search algorithm used to efficiently locate a target element within a sorted array or list. It works by repeatedly dividing the search interval in half and comparing the middle element to the target value. This process continues until the target element is found or the search interval becomes empty, indicating that the element is not in the list.

Here's the algorithm for binary search:

1. Initialize two pointers, `left` and `right`, to the first and last elements of the array, respectively.
2. Calculate the middle index as `mid` using the formula: `mid = (left + right) / 2`.
3. Compare the middle element with the target value:
   - If the middle element is equal to the target, the search is successful, and you've found the target element. Return its index.
   - If the middle element is greater than the target, update the `right` pointer to `mid - 1` and go to step 2.
   - If the middle element is less than the target, update the `left` pointer to `mid + 1` and go to step 2.
4. Repeat steps 2-3 until `left` is greater than `right`, which indicates that the target is not in the array.

Now, here's a C++ code example with explanations that takes user input to perform a binary search:

```cpp
#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // To avoid integer overflow

        if (arr[mid] == target) {
            return mid; // Target found, return its index
        } else if (arr[mid] < target) {
            left = mid + 1; // Adjust the left pointer
        } else {
            right = mid - 1; // Adjust the right pointer
        }
    }

    return -1; // Target not found
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target;

    std::cout << "Enter the number you want to search for: ";
    std::cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
```

Explanation of the code:

1. We define a `binarySearch` function that takes a sorted array (`arr`) and a target value (`target`) as arguments and returns the index of the target element.
2. Inside the `binarySearch` function, we initialize `left` and `right` pointers to the first and last indices of the array, respectively.
3. We use a while loop to perform the binary search until `left` is less than or equal to `right`.
4. We calculate the `mid` index as the average of `left` and `right`, using the formula `(left + right) / 2`. This avoids integer overflow issues.
5. We compare the element at index `mid` with the `target`. If they are equal, we return the index `mid` as the target is found. If the element at `mid` is less than the target, we update `left` to `mid + 1` to search the right subarray, and if it's greater, we update `right` to `mid - 1` to search the left subarray.
6. If the loop exits and the target is not found, we return -1.
7. In the `main` function, we create an example array, ask the user for the target value, and call the `binarySearch` function. The result is printed to the console.

This code demonstrates how to perform a binary search in C++ and allows the user to search for a specific element in a sorted array.
