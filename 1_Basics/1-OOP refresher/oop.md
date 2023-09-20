# Object-Oriented Programming (OOP) in C++

## Introduction
Object-Oriented Programming (OOP) is a programming paradigm that uses objects, which are instances of classes, to represent and manipulate data. C++ is a powerful programming language that supports OOP principles. This README will provide an overview of the four pillars of OOP in C++: **Encapsulation**, **Inheritance**, **Polymorphism**, and **Abstraction**.

## Basics of OOP in C++

### Classes and Objects

- **Class**: A class is a blueprint or template for creating objects. It defines the structure and behavior of objects of that type. In C++, a class is defined using the `class` keyword.

    ```cpp
    class Student {
        // Class members go here
    };
    ```

- **Object**: An object is an instance of a class. It represents a real-world entity and encapsulates both data (attributes) and behavior (methods). Objects are created from classes using constructors.

    ```cpp
    Student alice; // Creating an object of the Student class
    ```

### Constructors

- **Constructor**: A constructor is a special member function in a class that is called when an object is created. It is used to initialize the object's attributes. In C++, constructors have the same name as the class and do not have a return type.

    ```cpp
    class Student {
    public:
        Student(std::string name, int age, double gpa) {
            // Initialize attributes here
        }
    };
    ```

## The Four Pillars of OOP

### 1. **Encapsulation**

- **Description**: Encapsulation is the concept of bundling data (attributes) and the methods (functions) that operate on that data into a single unit known as a class. It hides the internal details of a class and provides controlled access to its members.

    ```cpp
    class Student {
    private:
        std::string name;
        int age;
        double gpa;
    
    public:
        // Getter and setter methods for accessing and modifying data
    };
    ```

### 2. **Inheritance**

- **Description**: Inheritance is a mechanism that allows a new class (derived or child class) to inherit properties and behaviors from an existing class (base or parent class). It promotes code reusability and the creation of a hierarchy of classes.

    ```cpp
    class Person {
        // Base class
    };
    
    class Student : public Person {
        // Derived class inheriting from Person
    };
    ```

### 3. **Polymorphism**

- **Description**: Polymorphism allows objects of different classes to be treated as objects of a common base class. It enables dynamic method invocation and is achieved through function overriding and interfaces (in C++).

    ```cpp
    class Shape {
    public:
        virtual void draw() {
            // Base class method
        }
    };
    
    class Circle : public Shape {
    public:
        void draw() override {
            // Derived class method
        }
    };
    ```

### 4. **Abstraction**

- **Description**: Abstraction is the process of simplifying complex reality by modeling classes based on essential properties and behaviors while hiding unnecessary details. It focuses on what an object does rather than how it does it.

    ```cpp
    class Car {
    public:
        virtual void start() = 0; // Pure virtual function
    };
    ```

## Conclusion

Object-Oriented Programming in C++ is a powerful paradigm that promotes modularity, reusability, and maintainability of code. By understanding the four pillars of OOP (Encapsulation, Inheritance, Polymorphism, and Abstraction), you can design and implement robust and flexible software solutions.
