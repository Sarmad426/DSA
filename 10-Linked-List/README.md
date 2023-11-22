# Linked List

## Introduction

A **linked list** is a linear data structure where elements are stored in nodes, and each node points to the next one in the sequence. Unlike arrays, linked lists do not require contiguous memory allocation, allowing for dynamic size adjustments and efficient insertions and deletions.

### Basic Concepts

1. **Node:**
   - The fundamental building block of a linked list.
   - Contains data and a reference (pointer) to the next node.

   ```cpp
   // Definition of a linked list node
   struct Node {
       int data;
       Node* next;
   };
   ```

## Types of Linked Lists

### 1. **Singly Linked List:**
   - Each node points to the next one.

   ```cpp
   // Singly Linked List Node
   struct Node {
       int data;
       Node* next;
   };
   ```

   ```cpp
   // Example of a singly linked list
   Node* head = nullptr;
   head = new Node{1, nullptr};
   head->next = new Node{2, nullptr};
   head->next->next = new Node{3, nullptr};
   ```

### 2. **Doubly Linked List:**
   - Each node points to both the next and the previous node.

   ```cpp
   // Doubly Linked List Node
   struct Node {
       int data;
       Node* next;
       Node* prev;
   };
   ```

   ```cpp
   // Example of a doubly linked list
   Node* head = nullptr;
   head = new Node{1, nullptr, nullptr};
   head->next = new Node{2, nullptr, head};
   head->next->next = new Node{3, nullptr, head->next};
   ```

### 3. **Circular Linked List:**
   - The last node points back to the first.

   ```cpp
   // Circular Linked List Node
   struct Node {
       int data;
       Node* next;
   };
   ```

   ```cpp
   // Example of a circular linked list
   Node* head = nullptr;
   head = new Node{1, nullptr};
   head->next = new Node{2, head};
   head->next->next = new Node{3, head};
   ```

## Linked List Operations

### 1. **Insertion:**
   - Add a new node to the list.

   ```cpp
   void insertNode(Node*& head, int value) {
       Node* newNode = new Node{value, nullptr};
       newNode->next = head;
       head = newNode;
   }
   ```

### 2. **Deletion:**
   - Remove a node from the list.

   ```cpp
   void deleteNode(Node*& head, int value) {
       if (head == nullptr)
           return;

       if (head->data == value) {
           Node* temp = head;
           head = head->next;
           delete temp;
           return;
       }

       Node* current = head;
       while (current->next != nullptr && current->next->data != value) {
           current = current->next;
       }

       if (current->next == nullptr)
           return;  // Node not found

       Node* temp = current->next;
       current->next = current->next->next;
       delete temp;
   }
   ```

### 3. **Traversal:**
   - Visit each node in the list.

   ```cpp
   void traverseList(Node* head) {
       Node* current = head;
       while (current != nullptr) {
           // Process current node
           cout << current->data << " ";
           current = current->next;
       }
   }
   ```

### 4. **Search:**
   - Find a node with a specific value.

   ```cpp
   Node* searchList(Node* head, int value) {
       Node* current = head;
       while (current != nullptr) {
           if (current->data == value)
               return current;
           current = current->next;
       }
       return nullptr;  // Node not found
   }
   ```

## Interview Questions

1. **Q: Explain the difference between a singly linked list and a doubly linked list.**
   - A singly linked list has nodes pointing to the next node, while a doubly linked list has nodes pointing to both the next and the previous node.

2. **Q: How do you insert a node at the beginning of a linked list?**
   - A: Allocate a new node, set its data and next pointer, then make it the new head.

   ```cpp
   void insertAtBeginning(Node*& head, int value) {
       Node* newNode = new Node{value, head};
       head = newNode;
   }
   ```

3. **Q: What is the time complexity of searching for a node in a linked list?**
   - A: O(n), where n is the number of nodes in the list.

4. **Q: Can you implement a function to reverse a linked list?**
   - A: Yes, here is a simple implementation.

   ```cpp
   void reverseList(Node*& head) {
       Node* prev = nullptr;
       Node* current = head;
       Node* next = nullptr;

       while (current != nullptr) {
           next = current->next;
           current->next = prev;
           prev = current;
           current = next;
       }

       head = prev;
   }
   ```

5. **Q: How would you check if a linked list has a loop?**
   - A: Use Floyd's Tortoise and Hare algorithm, moving two pointers at different speeds. If they meet, there's a loop.

   ```cpp
   bool hasLoop(Node* head) {
       Node* slow = head;
       Node* fast = head;

       while (fast != nullptr && fast->next != nullptr) {
           slow = slow->next;
           fast = fast->next->next;

           if (slow == fast)
               return true;  // Loop detected
       }

       return false;  // No loop
   }
   ```

## Conclusion

This comprehensive documentation provides an overview of linked lists in C++, covering basic concepts, types, operations, and includes practical code examples. Understanding linked lists is crucial for developing efficient data structures and algorithms. If you have any questions or need further clarification, feel free to explore more or ask for assistance.