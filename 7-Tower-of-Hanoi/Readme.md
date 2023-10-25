# Tower of Hanoi

## Introduction

The Tower of Hanoi is a classic mathematical puzzle that involves moving a set of disks from one peg to another with the help of an intermediary peg, subject to certain constraints. The puzzle consists of three pegs (A, B, and C) and a set of disks of different sizes. The objective is to move all the disks from peg A to peg C while adhering to the following rules:

1. Only one disk can be moved at a time.
2. A larger disk cannot be placed on top of a smaller disk.

## Problem Statement

The Tower of Hanoi problem can be defined as follows:

Given three pegs, A, B, and C, and `n` disks of different sizes initially stacked in decreasing order of size on peg A, the task is to move all the disks to peg C using peg B as an intermediary, following the rules mentioned above.

## Algorithm

The Tower of Hanoi can be solved using a recursive algorithm. The algorithm is defined as follows:

1. If `n` is 1, move the top disk from peg A to peg C.
2. Recursively move `n-1` disks from peg A to peg B using peg C as an intermediary.
3. Move the remaining disk from peg A to peg C.
4. Recursively move the `n-1` disks from peg B to peg C using peg A as an intermediary.

## Code Example

Here's a C++ implementation of the Tower of Hanoi problem:

```cpp
#include <iostream>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n = 3; // Number of disks
    towerOfHanoi(n, 'A', 'B', 'C'); // A, B, and C are the names of pegs
    return 0;
}
```

**Explanation:**

1. The `towerOfHanoi` function takes `n` as the number of disks, `source` as the source peg, `auxiliary` as the intermediary peg, and `destination` as the target peg.

2. In the base case, when `n` is 1, it directly moves the top disk from the source peg to the destination peg.

3. In the recursive case, it first moves `n-1` disks from the source peg to the auxiliary peg using the destination peg as an intermediary.

4. It then moves the remaining nth disk from the source peg to the destination peg.

5. Finally, it recursively moves the `n-1` disks from the auxiliary peg to the destination peg using the source peg as an intermediary.

## Interview Questions

### 1. Interview Question: Print Steps

**Question:**
Print the steps to solve the Tower of Hanoi puzzle for a given number of disks.

**Code Example:**

```cpp
#include <iostream>

void printTowerOfHanoiSteps(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }
    printTowerOfHanoiSteps(n - 1, source, destination, auxiliary);
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
    printTowerOfHanoiSteps(n - 1, auxiliary, source, destination);
}

int main() {
    int n = 4; // Number of disks
    printTowerOfHanoiSteps(n, 'A', 'B', 'C');
    return 0;
}
```

### 2. Interview Question: Minimum Moves

**Question:**
Find the minimum number of moves required to solve the Tower of Hanoi puzzle for a given number of disks.

**Code Example:**

```cpp
#include <iostream>

int minMovesTowerOfHanoi(int n) {
    if (n == 1) {
        return 1;
    }
    return 2 * minMovesTowerOfHanoi(n - 1) + 1;
}

int main() {
    int n = 5; // Number of disks
    int minMoves = minMovesTowerOfHanoi(n);
    std::cout << "Minimum moves required to solve Tower of Hanoi with " << n << " disks: " << minMoves << std::endl;
    return 0;
}
```

These interview questions test your understanding of the Tower of Hanoi problem and your ability to work with recursive algorithms. The first question asks you to print the steps involved, and the second question requires you to calculate the minimum number of moves.
