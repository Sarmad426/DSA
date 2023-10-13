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
