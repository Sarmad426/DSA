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
#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the queue

class Queue {
private:
    int front, rear, size;
    int elements[MAX_SIZE];

public:
    Queue() {
        front = rear = -1; // Initialize front and rear to -1
        size = 0;         // Initialize the size of the queue to 0
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Function to check if the queue is full
    bool isFull() {
        return size == MAX_SIZE;
    }

    // Function to add an element to the rear of the queue (enqueue)
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
        } else {
            rear = (rear + 1) % MAX_SIZE;
            elements[rear] = item;
            size++;
            cout << item << " enqueued to the queue." << endl;
        }
    }

    // Function to remove an element from the front of the queue (dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
        } else {
            int item = elements[front];
            front = (front + 1) % MAX_SIZE;
            size--;
            cout << item << " dequeued from the queue." << endl;
        }
    }

    // Function to display the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            int i = front;
            while (i != rear) {
                cout << elements[i] << " ";
                i = (i + 1) % MAX_SIZE;
            }
            cout << elements[rear] << endl;
        }
    }
};

int main() {
    Queue q; // Create a queue object

    q.enqueue(10); // Enqueue 10
    q.enqueue(20); // Enqueue 20
    q.enqueue(30); // Enqueue 30

    q.display(); // Display queue elements

    q.dequeue(); // Dequeue an element

    q.display(); // Display updated queue elements

    return 0;
}
```

Here's a step-by-step explanation of the code:

1. Include necessary headers and declare a constant `MAX_SIZE` for the maximum size of the queue.

2. Create a class `Queue` to encapsulate the queue operations.

3. Inside the `Queue` class, define private data members: `front`, `rear`, `size`, and `elements`. `front` and `rear` keep track of the front and rear of the queue, `size` keeps track of the number of elements in the queue, and `elements` is an array to store the queue elements.

4. The constructor initializes `front` and `rear` to -1 and `size` to 0, indicating an empty queue.

5. Implement the `isEmpty` and `isFull` functions to check if the queue is empty or full, respectively.

6. Implement the `enqueue` function to add an element to the rear of the queue. It checks if the queue is full before enqueuing.

7. Implement the `dequeue` function to remove an element from the front of the queue. It checks if the queue is empty before dequeuing.

8. Implement the `display` function to display the elements of the queue.

9. In the `main` function, create a `Queue` object `q`.

10. Enqueue some elements, display the queue, dequeue an element, and display the updated queue to demonstrate the queue operations.

Compile and run this code, and you should have a basic queue implementation without errors.
