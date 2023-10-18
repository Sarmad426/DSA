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

### Algorithm for Pop Operation

```pseudo
    begin procedure pop: stack
        if stack is empty
            return null
        endif

        data ← stack[top]

        top ← top - 1

        return data
    end procedure
```

### C++ code for pop Operation

```c++
    int pop(int data) {
        if(!isempty()) {
            data = stack[top];
            top = top - 1;
            return data;
        }else {
 cout<<"Could not retrieve data, Stack is empty.\n";
 }
}
```

## All Stack Operations in one Program (Using Array)

Here's a basic implementation of a stack in C++ using an array:

```cpp
#include<iostream>
using namespace std;

#define max 5

class Stack{
 int stack[max];
 int top;
 public:
  Stack(){
   top =-1;
  }
  bool full(){
   return top == max-1;
  }
  bool empty(){
   return top==-1;
  }
  int Top(){
   if(empty()){
    cout<<"Stack is Empty: "<<endl;
    return -1;
   }
   return stack[top];
  }
  void push(int value){
   if(full()){
    cout<<"Stack is Full: "<<endl;
    return;
   }
   top+=1;
   stack[top] = value;
  }
  void pop(){
   if(empty()){
    cout<<"Stack is Empty: "<<endl;
    return;
   }
   top-=1;
  }
  void run(){
   for(int i=0;i<top;i++){
    cout<<stack[i]<<", ";
   }
  }
};

int main(){
 Stack stack;
 stack.push(1);
 stack.push(2);
 stack.push(3);
 stack.push(4);
 stack.push(5);
 cout<<stack.Top()<<endl;
 stack.pop();
 cout<<stack.Top()<<endl;
 stack.pop();
 cout<<stack.Top()<<endl;
 stack.pop();
 cout<<stack.Top()<<endl;
 stack.pop();
}
```

This code creates a stack, pushes three elements onto it, and then pops them, displaying the top element and size in between.

## Book Code for All Stack Operations

```c++
#include <iostream>
using namespace std;
const int MAXSIZE = 8;
int stack[8];
int top = -1;

bool isEmpty()
{
    return top == -1;
}

bool isFull()
{
    return top == MAXSIZE - 1;
}

int peek()
{
    return stack[top];
}

int pop()
{
    int data;
    if (!isEmpty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        cout << "Could not retrieve data, Stack is empty." << endl;
        return -1; // Return a sentinel value or handle the error as needed
    }
}

void push(int data)
{
    if (!isFull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        cout << "Could not insert data, Stack is full." << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    cout << "Top element: " << peek() << endl;

    pop();
    pop();

    cout << "Top element: " << peek() << endl;
}
```

### Explanation

Data types: In C++, we use bool for the isEmpty() and isFull() functions to return true or false instead of 1 or 0. The other functions and variables remain the same.

I/O Functions: In C++, we use std::cout and std::cin for input and output instead of printf and scanf in C. The error messages are printed using std::cout.

The main function: In C++, the main function is the entry point of the program, and it calls the stack operations with the C++ functions push(), pop(), peek(), and utilizes std::cout for output.

Error Handling: When an error occurs (e.g., stack underflow or overflow), C++ code returns a sentinel value (in this case, -1) to indicate the error condition, and an error message is printed to the console using std::cout. You can modify error handling as needed.
