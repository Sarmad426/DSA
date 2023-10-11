#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack
{
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack()
    {
        top = -1; // Initialize the top of the stack to -1 (empty)
    }

    // Push operation
    void push(int value)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }

    // Pop operation
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow" << endl;
            return -1; // Assuming -1 represents an error value
        }
        return arr[top--];
    }

    // Top/Peek operation
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is empty" << endl;
            return -1; // Assuming -1 represents an error value
        }
        return arr[top];
    }

    // Size operation
    int size()
    {
        return top + 1;
    }

    // Empty operation
    bool empty()
    {
        return top == -1;
    }
};
