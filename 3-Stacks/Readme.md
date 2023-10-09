# Stack Data Structure in C++

## Introduction

A **Stack** is a linear data structure that follows the Last-In-First-Out (LIFO) principle.
It is an **Abstract Data Type** (ADT) and named stack as it behaves like a stack. For Example a deck of cards or pile of cards.
In a stack, elements are added and removed from the top, which is also known as the "push" and "pop" operations, respectively.

A stack can be implemented by means of Array, Structure, Pointer, and Linked List. Stack can either be a fixed size one or it may have a sense of dynamic resizing.

## Stack Operations

A stack typically supports the following operations:

1. **Push**: Add an element to the top of the stack.
2. **Pop**: Remove and return the top element from the stack.
3. **Peek**: Retrieve the top element without removing it.
4. **isFull**: Checks if stack is full.
5. **isEmpty**: Check if the stack is empty.

## Implementation in C++

Here's a basic implementation of a stack in C++ using an array:

```cpp
#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Initialize the top of the stack to -1 (empty)
    }

    // Push operation
    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }

    // Pop operation
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return -1; // Assuming -1 represents an error value
        }
        return arr[top--];
    }

    // Top/Peek operation
    int peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return -1; // Assuming -1 represents an error value
        }
        return arr[top];
    }

    // Size operation
    int size() {
        return top + 1;
    }

    // Empty operation
    bool empty() {
        return top == -1;
    }
};
```

## Usage Example

Here's an example of how to use the `Stack` class:

```cpp
int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.peek() << endl;
    cout << "Stack size: " << stack.size() << endl;

    cout << "Popping elements: ";
    while (!stack.empty()) {
        cout << stack.pop() << " ";
    }
    cout << endl;

    return 0;
}
```

This code creates a stack, pushes three elements onto it, and then pops them, displaying the top element and size in between.

This is a basic implementation of a stack in C++. Depending on your needs, you can modify and expand upon this implementation to suit your specific requirements.
