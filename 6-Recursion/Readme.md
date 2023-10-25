# Recursion

Some computer programming languages allow a module or function to call itself. This
technique is known as recursion. In recursion, a function α either calls itself directly or
calls a function β that in turn calls the original function α. The function α is called recursive
function.

## Example

```cpp
int function(int value) {
 if(value < 1)
 return;
 function(value - 1);
 cout<<value; 
}
```

## Properties

A recursive function can go infinite like a loop. To avoid infinite running of recursive
function, there are two properties that a recursive function must have.

## Base criteria

There must be at least one base criteria or condition, such that,
when this condition is met the function stops calling itself recursively.

## Progressive approach

The recursive calls should progress in such a way that
each time a recursive call is made it comes closer to the base criteria.

## C++ code Snippets

Here are three C++ code snippets that demonstrate recursion, ranging from simple to more complex, including one that represents a common interview question:

### 1. Simple Recursion: Calculating Factorial

This is a classic example of recursion, where we calculate the factorial of a number using a simple recursive function.

```cpp
#include <iostream>
using namespace std;
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    int result = factorial(num);
    cout << "Factorial of " << num << " is " << result <<endl;
}
```

### 2. More Complex Recursion: Finding the Fibonacci Sequence

In this example, we use recursion to find the nth Fibonacci number, which is a more complex problem involving multiple recursive calls.

```cpp
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num = 6;
    int result = fibonacci(num);
    cout << "Fibonacci number at position " << num << " is " << result <<endl;
}
```

### 3. Interview Question: Recursive Binary Search

This example demonstrates a common interview question involving binary search using recursion. It's more challenging and tests your ability to apply recursion effectively.

```cpp
#include <iostream>
#include <vector>
using namespace std;
int binarySearchRecursive(std::vector<int> arr, int target, int low, int high) {
    if (low > high) {
        return -1; // Element not found
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid; // Element found at index mid
    } else if (arr[mid] > target) {
        return binarySearchRecursive(arr, target, low, mid - 1);
    } else {
        return binarySearchRecursive(arr, target, mid + 1, high);
    }
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14};
    int target = 8;
    int result = binarySearchRecursive(arr, target, 0, arr.size() - 1);

    if (result != -1) {
        cout << "Element found at index " << result <<endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
}

```

In the third example, we implement a recursive binary search, which is a common problem in technical interviews. This code snippet demonstrates how to search for an element in a sorted array using recursion.
