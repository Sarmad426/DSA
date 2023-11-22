# Interview Questions

This is just a basic interview covering topics like, `arrays` insertion, update, delete and search. It also covers
`Stack` and `Queue` using One-Dimensional array.  

## 1. **MCQ: Arrays in C++**
   - What is the time complexity for accessing an element in an array with index `i`?
     - a. O(1)
     - b. O(log n)
     - c. O(n)
     - d. O(n^2)

   **Answer:**
   - a. O(1)

## 2. **Theoretical Short Question: Array vs. Linked List**
   - Briefly explain the key difference between an array and a linked list.

   **Answer:**
   - An array is a contiguous memory allocation of elements with a fixed size, accessed using an index. In contrast, a linked list is a dynamic data structure where elements are stored in nodes, and each node points to the next one in the sequence, allowing for efficient insertions and deletions.

## 3. **Practical Question: Array Operations**
   - Write a C++ function to find the sum of all elements in an integer array.

   **Answer:**
   ```cpp
   #include <iostream>
   using namespace std;

   int findSum(int arr[], int size) {
       int sum = 0;
       for (int i = 0; i < size; ++i) {
           sum += arr[i];
       }
       return sum;
   }

   int main() {
       // Example usage
       int myArray[] = {1, 2, 3, 4, 5};
       int arraySize = sizeof(myArray) / sizeof(myArray[0]);

       cout << "Sum of the array elements: " << findSum(myArray, arraySize) << endl;

       return 0;
   }
   ```

## 4. **MCQ: Stack Operations in C++**
   - What is the time complexity for pushing an element onto a stack implemented using an array?
     - a. O(1)
     - b. O(log n)
     - c. O(n)
     - d. O(n^2)

   **Answer:**
   - a. O(1)

## 5. **Theoretical Short Question: Stack vs. Queue**
   - Explain the main difference between a stack and a queue.

   **Answer:**
   - A stack follows the Last In, First Out (LIFO) principle, where the last element added is the first one to be removed. In contrast, a queue follows the First In, First Out (FIFO) principle, where the first element added is the first one to be removed.

## 6. **Practical Question: Stack Implementation**
   - Implement a stack in C++ using an array. Include functions for push, pop, and checking if the stack is empty.

   **Answer:**
   ```cpp
   #include <iostream>
   using namespace std;

   const int MAX_SIZE = 100;  // Maximum size of the stack

   class Stack {
   private:
       int top;
       int arr[MAX_SIZE];

   public:
       Stack() {
           top = -1;  // Initialize top to -1 to indicate an empty stack
       }

       void push(int value) {
           if (top >= MAX_SIZE - 1) {
               cout << "Stack overflow, cannot push more elements." << endl;
               return;
           }
           arr[++top] = value;
       }

       void pop() {
           if (top < 0) {
               cout << "Stack underflow, cannot pop from an empty stack." << endl;
               return;
           }
           --top;
       }

       bool isEmpty() {
           return (top == -1);
       }
   };

   int main() {
       // Example usage
       Stack myStack;
       myStack.push(10);
       myStack.push(20);
       myStack.push(30);

       while (!myStack.isEmpty()) {
           cout << "Popped: " << arr[top] << endl;
           myStack.pop();
       }

       return 0;
   }
   ```

## 7. **MCQ: Time Complexity Analysis**
   - What is the time complexity of a linear search in an array of size `n`?
     - a. O(1)
     - b. O(log n)
     - c. O(n)
     - d. O(n^2)

   **Answer:**
   - c. O(n)

## 8. **Theoretical Short Question: Big-O Notation**
    - Explain what Big-O notation represents in the context of algorithm analysis.

   **Answer:**
   - Big-O notation describes the upper bound on the growth rate of an algorithm's time complexity or space complexity in the worst-case scenario. It provides a way to express how the algorithm's performance scales with input size.

## 9. **Practical Question: Binary Search Implementation**
   - Implement binary search in C++ for a sorted array.

   **Answer:**
   ```cpp
   #include <iostream>
   using namespace std;

   int binarySearch(int arr[], int size, int target) {
       int low = 0;
       int high = size - 1;

       while (low <= high) {
           int mid = low + (high - low) / 2;

           if (arr[mid] == target)
               return mid;  // Element found
           else if (arr[mid] < target)
               low = mid + 1;  // Look in the right half
           else
               high = mid - 1;  // Look in the left half
       }

       return -1;  // Element not found
   }

   int main() {
       // Example usage
       int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
       int arraySize = sizeof(myArray) / sizeof(myArray[0]);
       int target = 7;

       int result = binarySearch(myArray, arraySize, target);

       if (result != -1)
           cout << "Element found at index " << result << endl;
       else
           cout << "Element not found in the array." << endl;

       return 0;
   }
   ```

## 10. **MCQ: Queue Operations in C++**
   - What is the time complexity for enqueueing an element into a queue implemented using an array?
     - a. O(1)
     - b. O(log n)
     - c. O(n)
     - d. O(n^2)

   **Answer:**
   - a. O(1)

## 11. **Theoretical Short Question: Tree Data Structure**
   - Explain the basic concept of a binary tree.

   **Answer:**
   - A binary tree is a hierarchical data structure composed of nodes, each containing a data element and two pointers (references) to its left and right subtrees (children). The topmost node is called the root, and nodes with no children are called leaves. Each node has at most two children, making it a binary tree.

## 12. **Practical Question: Binary Tree Traversal**
   - Implement an in-order traversal function for a

 binary tree in C++.

   **Answer:**
   ```cpp
   #include <iostream>
   using namespace std;

   // Definition of a binary tree node
   struct Node {
       int data;
       Node* left;
       Node* right;

       Node(int value) : data(value), left(nullptr), right(nullptr) {}
   };

   void inOrderTraversal(Node* root) {
       if (root != nullptr) {
           inOrderTraversal(root->left);
           cout << root->data << " ";
           inOrderTraversal(root->right);
       }
   }

   int main() {
       // Example usage
       Node* root = new Node(1);
       root->left = new Node(2);
       root->right = new Node(3);
       root->left->left = new Node(4);
       root->left->right = new Node(5);

       cout << "In-order traversal: ";
       inOrderTraversal(root);
       cout << endl;

       return 0;
   }
   ```
