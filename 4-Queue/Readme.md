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

## implementation of a queue using a one-dimensional array in C++

```cpp
#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1)
            return true;
        if (front == rear + 1)
            return true;
        return false;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Overflow condition!" << endl;
        } else {
            rear = rear + 1;
            arr[rear] = item;
            cout << "Inserted element in queue: " << item << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Underflow condition!" << endl;
        } else {
            cout << "Deleted element from queue: " << arr[front] << endl;
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % SIZE;
            }
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Elements in the queue are: ";
            for (int i = front; i != rear; i = (i + 1) % SIZE) {
                cout << arr[i] << " ";
            }
            cout << arr[rear] << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // Queue is full. Overflow condition!
    q.display();   // Elements in the queue are: 10 20 30 40 50
    q.dequeue();
    q.dequeue();
    q.display();   // Elements in the queue are: 30 40 50
    q.enqueue(60);
    q.enqueue(70);
    q.display();   // Elements in the queue are: 30 40 50 60 70
    return 0;
}
```

Let's go through the code step by step:

1. We start by including the necessary header files, in this case, `iostream`, which allows us to use the standard input/output stream objects like `cout` and `cin`.

2. We define a constant `SIZE` to specify the maximum size of the queue.

3. Next, we define a class called `Queue` to encapsulate all the queue operations. The private members of this class include an array `arr` to store the elements, and two integers `front` and `rear` to keep track of the front and rear indices of the queue.

4. The constructor of the `Queue` class initializes `front` and `rear` to -1, indicating an empty queue.

5. The `isFull()` function checks if the queue is full by comparing the values of `front` and `rear` with the maximum size of the queue. If the queue is full, it returns `true`, otherwise `false`.

6. The `isEmpty()` function checks if the queue is empty by checking if `front` is -1. If `front` is -1, it means the queue is empty, and the function returns `true`.

7. The `enqueue()` function is used to insert an element into the queue. It first checks if the queue is full using the `isFull()` function. If the queue is full, it displays an overflow message. Otherwise, it updates the `rear` index and inserts the element at that position in the array.

8. The `dequeue()` function is used to delete an element from the queue. It first checks if the queue is empty using the `isEmpty()` function. If the queue is empty, it displays an underflow message. Otherwise, it deletes the element at the `front` index and updates the `front` index accordingly.

9. The `display()` function is used to display all the elements in the queue. It first checks if the queue is empty using the `isEmpty()` function. If the queue is empty, it displays an empty message. Otherwise, it iterates through the elements from `front` to `rear` (using modular arithmetic to handle wrap-around) and displays each element.

10. In the `main()` function, we create an instance of the `Queue` class called `q`. We then enqueue some elements, dequeue some elements, and display the elements in the queue at various points.

11. Finally, we return 0 to indicate successful execution of the program.

I hope this explanation helps you understand the code! Let me know if you have any further questions.
