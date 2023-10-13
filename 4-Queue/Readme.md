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
- **dequeue** remove an item from the queue.

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
