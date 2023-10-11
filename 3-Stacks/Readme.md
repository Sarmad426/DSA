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

A Stack can be implemented by means of array, Structure, pointer and linked list. Stack Can either be a fixed size one or it may have a sense of dynamic resizing. Here we are implementing stack using array.

## Algorithm of Peek() function

```pseudo
    
    begin procedure peek
        return stack[top]
    end procedure 
```

## Implementation in C++

``` c++
int peek(){
    return stack[top];
}
```

## isFull

### Algo of isFull()

``` pseudo
    
    begin procedure isFull
        if top equals to Maxsize
            return true
        else 
            return false
        endif

    end procedure
```

### C++ code for isFull()

```c++
    bool isFull(){
        if(top==max_size){
            return true;
        }else{
            return false;
        }
    }
```

## isEmpty()

### Algo of isEmpty()

```pseudo

    begin procedure isempty
        if top less than 1
            return true
        else
            return false
        endif

    end procedure

```

### C++ code for isEmpty()

```c++

    bool isempty(){
        if(top==-1)
            return true;
        else
            return false;
    }

```

## Push Operation

The Process of putting a new element onto a stack is known as **Push** Operation.
Series of Steps:

- **Step 1:** Check if Stack is Full.
- **Step 2:** If the stack is full, generate an error and exit.
- **Step 3:** If the stack is not full, increment **top** to point the next empty space.
- **Step 4:** Adds data element where top is pointing.
- **Step 5:** Returns Success.

### Algo for Push operation

``` pseudo
    begin procedure push: stack, data
        if stack is full
            return null
        endif

        top ← top + 1

        stack[top] ← data
    end procedure

```

### C++ code for Push Operation

```c++

    void push(int data){
        if(!isFull()){
            top+=1;
            stack[top] = data;
        }else{
            cout<<"Could Not insert data, Stack is full. \n"; 
        }
    }

```

## Pop Operation

Accessing the content while removing it from the stack, is known as a **Pop** Operation. In an array implementation of pop() operation, the data element is not actually removed, instead top is decremented to a lower position in the stack to point to the next value.
But in linked-list implementation, pop() actually removes data element and deallocates
memory space.

### Steps

- **Step 1 :** Check if stack is empty.
- **Step 2 :** If the stack is empty, generate an error and exit.
- **Step 3 :** If the stack is not empty, access the data element at which top is pointing.
- **Step 4 :** Decreases the value of top by 1.
- **Step 5 :** Returns success.

## All Stack Operations in one Program (Using Array)

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