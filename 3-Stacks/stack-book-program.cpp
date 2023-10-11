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
