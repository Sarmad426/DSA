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

## Tower of Hanoi Algorithm

```c++
tower_of_hanoi(n, source, auxiliary, target):
    if n > 0:
        tower_of_hanoi(n-1, source, target, auxiliary)
        move_disk(source, target)
        tower_of_hanoi(n-1, auxiliary, source, target)
```

## C++ Code

```cpp
#include <iostream>

void move_disk(char source, char target) {
    std::cout << "Move disk from rod " << source << " to rod " << target << std::endl;
}

void tower_of_hanoi(int n, char source, char auxiliary, char target) {
    if (n > 0) {
        tower_of_hanoi(n-1, source, target, auxiliary);
        move_disk(source, target);
        tower_of_hanoi(n-1, auxiliary, source, target);
    }
}

int main() {
    int n;
    std::cout << "Enter the number of disks: ";
    std::cin >> n;

    tower_of_hanoi(n, 'A', 'B', 'C');

    return 0;
}
```

## Multiple Choice Questions

1. **What is the Tower of Hanoi?**
   - [ ] A card game
   - [x] A mathematical puzzle
   - [ ] A computer programming language
   - [ ] A type of building structure

2. **Who invented the Tower of Hanoi?**
   - [ ] Alan Turing
   - [ ] Isaac Newton
   - [x] Edouard Lucas
   - [ ] Leonardo da Vinci

3. **How many rods are involved in the Tower of Hanoi problem?**
   - [ ] One
   - [x] Three
   - [ ] Four
   - [ ] Five

4. **What is the main objective of the Tower of Hanoi puzzle?**
   - [ ] Sorting numbers
   - [x] Moving a stack of disks to another rod
   - [ ] Solving mathematical equations
   - [ ] Drawing a conical shape

5. **How many rules govern the movement of disks in the Tower of Hanoi?**
   - [ ] One
   - [x] Two
   - [ ] Three
   - [ ] Four

6. **What is the recursive algorithm used to solve the Tower of Hanoi problem?**
   - [ ] Bubble Sort
   - [x] Divide and Conquer
   - [ ] Linear Search
   - [ ] Quick Sort

7. **What does the Tower of Hanoi algorithm do with n-1 disks?**
   - [ ] Moves them to the target rod
   - [x] Moves them to an auxiliary rod
   - [ ] Discards them
   - [ ] Keeps them on the source rod

8. **How are the disks initially arranged on the source rod?**
   - [ ] Descending order
   - [x] Ascending order
   - [ ] Random order
   - [ ] Alphabetical order

9. **In which year was the Tower of Hanoi invented?**
   - [ ] 1776
   - [x] 1883
   - [ ] 1950
   - [ ] 2000

10. **How many steps does it take to solve the Tower of Hanoi problem with n disks?**
    - [ ] n
    - [ ] 2n
    - [x] 2^n - 1
    - [ ] n^2

11. **Which of the following is NOT a rule in the Tower of Hanoi problem?**
    - [ ] Moving one disk at a time
    - [ ] Placing a disk on an empty rod
    - [x] Placing a larger disk on top of a smaller disk
    - [ ] Moving the smallest disk first

12. **What is the minimum number of moves required to solve the Tower of Hanoi with 4 disks?**
    - [ ] 4
    - [ ] 8
    - [x] 15
    - [ ] 16

13. **In the Tower of Hanoi, if there are 5 disks, how many recursive calls will be made?**
    - [ ] 5
    - [ ] 10
    - [ ] 15
    - [x] 31

14. **What is the time complexity of the Tower of Hanoi algorithm?**
    - [ ] O(n)
    - [ ] O(log n)
    - [x] O(2^n)
    - [ ] O(n^2)

15. **If there are 3 disks in the Tower of Hanoi, how many moves are required to solve the problem?**
    - [ ] 3
    - [x] 7
    - [ ] 9
    - [ ] 12
