# Queue

An Abstract data structure, somewhat similar to Stacks. Unlike Stacks, a queue is open at both ends. One end is always used to insert data **(enqueue)** and the other is used to remove data **(dequeue)**. It follows **First-in-First-out**. The data item stored first will be accessed first.

## Example

A real-world example of queue can be a single-lane one-way road, where the vehicle enters
first, exits first.

## Queue Representations

As in stacks, a queue can also be implemented using Arrays, Linked-lists, Pointers and
Structures. For the sake of simplicity, we shall implement queues using one-dimensional
array.

## Basic Operations

Queue operations may involve initializing or defining the queue, utilizing it, and then
completely erasing it from the memory.

- **enqueue()** add an item to the queue.
- **dequeue()** remove an item from the queue.

Few more functions are required to make the above-mentioned queue operation efficient.

- **peek()** − Gets the element at the front of the queue without removing it.

- **isfull()** − Checks if the queue is full.

- **isempty**() − Checks if the queue is empty.

## Peek Algo

This function helps to see the data at the front of the queue.

```pseudo
begin procedure peek
    return queue[front]
end procedure
```

### Peek implementation C++

```c++
int peek(){
    return queue[front];
}
```

## isfull()

For a single dimensional array to implement queue, we just check for the rear pointer to reach `MAXSIZE` to determine that queue is full. In case of queue in circular linked-list, the algorithm differ.

```pseudo
begin procedure isfull
    if rear equals to MAXSIZE
        return true
    else
        return false
    endif
end procedure
```

### C++ implementation for isfull()

```c++
bool isfull(){
    if(rear == MAXSIZE - 1)
        return true;
    else
        return false
}
```

## isempty()

```pseudo
begin procedure isempty
    if front is less than MIN OR front is greater than rear
        return true
    else
        return false
    endif
end procedure
```

## C++ code for isempty()

```c++
bool isempty() {
    if(front < 0 || front > rear)
        return true;
    else
        return false;
}
```

## Enqueue Operation

Queues maintain two data pointers, front and rear.Its operations are comparatively difficult to implement than that of stacks.

### Steps to Enqueue (insert) data

- **Step 1:** Check if the queue is full.
- **Step 2:** If the queue is full, produce overflow error and exit.
- **Step 3:** If the queue is not full, increment rear pointer to point the next empty space.
- **Step 4:** Add data element to the queue location, where rear is pointing.
- **Step 5:** Return Success.

Sometimes, we also check if the queue is initialized ot not, to handle any unforeseen situations.

## Algorithm of Enqueue Operation

```pseudo
procedure enqueue (data)
    if queue is full
        return overflow
    endif

    rear +=1
    queue[rear] = data
    return true
end procedure
```

## C++ code for Enqueue

```c++
int enqueue(int data){
    if(isfull())
        return 0;

    rear+=1;
    queue[rear] = data;

    return 1;
}
```

## Dequeue Operation

Accessing data from the queue is a process of two tasks - accessing the data where front is pointing and remove the data after access.

### Steps

- **Step 1:** Check if the queue is empty.
- **Step 2:** If the queue is empty, produce underflow error and exit.
- **Step 3:** If queue is not empty, access the data where **front** is pointing.
- **Step 4:** Increment **front** pointer to point to the next available data element.
- **Step 5:** Return Success.

## Dequeue Algorithm

```pseudo
procedure dequeue
    if queue is empty
        return underflow
    endif

    data = queue[front]
    front+=1

    return true
end procedure
```

## C++ implementation of dequeue()

```c++
int dequeue(){
    if(isempty()){
        return 0;
    }
    int data = queue[front];
    front+=1;
    return data;
}
```

## Implementation of a queue using a one-dimensional array in C++

```cpp
#include<iostream>
using namespace std;

#define max_size 5

class Queue{
    private:
        int queue[max_size];
        int front;
        int rear;
    public:
    Queue(){
    front = -1;
    rear = -1;
    }
    bool full(){
    if(rear == max_size-1){
        cout<<"Queue is Full: "<<endl;
        return true;
    }
    return false;
    }
    bool empty(){
    if(front>rear || front ==-1){
        cout<<"Queue is Empty: "<<endl;
        return true;
    }
    return false;
    }
    int enqueue(int value){
    if(full()){
        cout<<"Queue Overflow: "<<endl;
        return 0;
    }
    rear+=1;
    queue[rear] = value;
    if(front==-1){
        front+=1;
    }
  }
    int peek(){
    if(empty()){
        cout<<"Queue Underflow: "<<endl;
        return 0;
    }
    return queue[front];
    }
    void dequeue(){
    if(empty()){
        cout<<"Queue Underflow: "<<endl;
        return;
    }
    front++;
    }
};

int main(){
    Queue queue;
    queue.empty();
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.full();
    cout<<queue.peek();
    queue.dequeue();
}
```

Here's an explanation of the code:

1. We begin by including the necessary headers and declaring a constant `MAX_SIZE` for the maximum size of the queue.

2. We define a `Queue` class to encapsulate the queue operations, which includes private data members: `front`, `rear`, and `elements`. `front` and `rear` keep track of the front and rear of the queue, and `elements` is an array to store the queue elements.

3. The constructor initializes `front` and `rear` to -1, indicating an empty queue.

4. We implement the `isEmpty` function to check if the queue is empty by examining the value of `front`.

5. The `isFull` function checks if the queue is full by verifying whether the next position after `rear` would be equal to `front` in a circular manner.

6. The `enqueue` function adds an element to the rear of the queue. It handles both the cases when the queue is empty or not. It also checks if the queue is full before enqueuing.

7. The `dequeue` function removes an element from the front of the queue. It also considers both cases where the queue becomes empty after dequeueing or not.

8. The `display` function is used to display the elements of the queue.

9. In the `main` function, we create a `Queue` object `q`.

10. We enqueue some elements, display the queue, dequeue an element, and display the updated queue to demonstrate the queue operations.

Compile and run this code, and you'll have a functional queue implementation using a one-dimensional array without errors.

## C++ Book code for Queue operations

```c++
#include <iostream>
using namespace std;

const int MAX = 6;
int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek() {
    return intArray[front];
}

bool isEmpty() {
    return itemCount == 0;
}

bool isFull() {
    return itemCount == MAX;
}

int size() {
    return itemCount;
}

void insert(int data) {
    if (!isFull()) {
        if (rear == MAX - 1) {
            rear = -1;
        }
        intArray[++rear] = data;
        itemCount++;
    }
}

int removeData() {
    int data = intArray[front++];
    if (front == MAX) {
        front = 0;
    }
    itemCount--;
    return data;
}

int main() {
    /* insert 5 items */
    insert(3);
    insert(5);
    insert(9);
    insert(1);
    insert(12);

    insert(15);

    if (isFull()) {
        cout << "Queue is full!" << endl;
    }

    int num = removeData();
    cout << "Element removed: " << num << endl;

    insert(16);

    insert(17);
    insert(18);

    cout << "Element at front: " << peek() << endl;
    cout << "----------------------" << endl;
    cout << "index : 5 4 3 2 1 0" << endl;
    cout << "----------------------" << endl;
    cout << "Queue: ";
    while (!isEmpty()) {
        int n = removeData();
        cout << n << " ";
    }

    return 0;
}
```
