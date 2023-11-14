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

## MCQ Questions

1. **What is the Fibonacci sequence?**
   - [ ] A sequence of prime numbers
   - [ ] A sequence of odd numbers
   - [x] A series of numbers where each number is the sum of the two preceding ones, starting from 0 and 1.

2. **In the Fibonacci sequence, what are the first two numbers?**
   - [ ] 1 and 2
   - [ ] 0 and 2
   - [x] 0 and 1
   - [ ] 1 and 3

3. **What is the recursive formula for the Fibonacci sequence?**
   - [ ] \(F(n) = F(n-1) + F(n-2)\)
   - [ ] \(F(n) = F(n-1) * F(n-2)\)
   - [x] \(F(n) = F(n-1) + F(n-2), F(0) = 0, F(1) = 1\)
   - [ ] \(F(n) = n * F(n-1)\)

4. **What is the time complexity of the naive recursive approach for computing Fibonacci numbers?**
   - [ ] O(n)
   - [ ] O(log n)
   - [x] O(2^n)
   - [ ] O(n^2)

5. **What is memoization in the context of Fibonacci recursion?**
   - [ ] Reversing the sequence
   - [x] Caching previously computed results to avoid redundant calculations
   - [ ] Changing the base case
   - [ ] Computing Fibonacci numbers in reverse order

6. **Which programming language is commonly used for implementing Fibonacci recursion?**
   - [ ] Java
   - [ ] Python
   - [ ] C#
   - [x] All of the above

7. **What is the purpose of dynamic programming in optimizing Fibonacci recursion?**
   - [ ] Adding dynamic features to the sequence
   - [ ] Changing the base case
   - [x] Avoiding redundant calculations by storing and reusing intermediate results
   - [ ] Introducing randomness to the sequence

8. **In the Fibonacci sequence, what is \(F(5)\)?**
   - [ ] 3
   - [x] 5
   - [ ] 8
   - [ ] 13

9. **Which of the following statements about the Fibonacci sequence is true?**
   - [ ] The sequence starts with 2 and 3.
   - [x] The sequence is infinite.
   - [ ] The ratio of consecutive Fibonacci numbers converges to 2.
   - [ ] The sequence is always strictly increasing.

10. **What is the iterative approach to calculating Fibonacci numbers?**
    - [ ] Using nested loops
    - [ ] Recursive function calls
    - [x] Using a loop to update values iteratively
    - [ ] Randomly generating numbers

11. **What is the golden ratio, often approximated using Fibonacci numbers?**
    - [ ] 1.5
    - [x] \( \phi \) (phi), approximately 1.618
    - [ ] 2.0
    - [ ] 3.14

12. **Which technique is used to overcome the exponential time complexity in recursive Fibonacci?**
    - [ ] Binary search
    - [x] Dynamic programming
    - [ ] Bubble sort
    - [ ] Linked lists

13. **What is the value of \(F(0)\) in the Fibonacci sequence?**
    - [ ] 1
    - [x] 0
    - [ ] 2
    - [ ] -1

14. **What is the base case in the recursive definition of the Fibonacci sequence?**
    - [ ] \(F(n) = 0\)
    - [x] \(F(0) = 0, F(1) = 1\)
    - [ ] \(F(n) = 1\)
    - [ ] \(F(2) = 2\)

15. **What is the space complexity of the memoized Fibonacci algorithm?**
    - [ ] O(n)
    - [ ] O(log n)
    - [x] O(n)
    - [ ] O(1)
