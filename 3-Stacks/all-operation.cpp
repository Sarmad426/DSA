#include <iostream>
using namespace std;
class Stack {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack overflow: Cannot push " << data << endl;
            return;
        }
        arr[++top] = data;
        cout << data << " pushed into the stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        cout << arr[top] << " popped from the stack: "<<endl;
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cerr << "Stack is empty. Cannot peek." <<endl;
            return -1; // Return a sentinel value or handle the error as needed
        }
        return arr[top];
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() <<endl;

    stack.pop();
    stack.pop();

    cout << "Top element: " << stack.peek() <<endl;
}
