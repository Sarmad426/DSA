Encapsulation helps in hiding the internal details of a class and 
providing a controlled interface for interacting with the class.It
enforces data protection by allowing access to the internal state
of an object only through well-defined methods, typically referred 
to as getters and setters.

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    double gpa;
public:
    Student(std::string studentName, int studentAge, double studentGPA) {
        name = studentName;
        age = studentAge;
        gpa = studentGPA;
    }
    std::string getName() {
        return name;
    }
    void setName(std::string newName) {
        name = newName;
    }
    int getAge() {
        return age;
    }
    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        }
    }
    double getGPA() {
        return gpa;
    }
    void setGPA(double newGPA) {
        if (newGPA >= 0.0 && newGPA <= 4.0) {
            gpa = newGPA;
        }
    }
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    }
};
int main() {
    Student student("Alice", 20, 3.75);
    std::cout << "Initial student information:" << std::endl;
    student.displayInfo();
    student.setName("Bob");
    student.setAge(22);
    student.setGPA(3.9);
    std::cout << "\nUpdated student information:" << std::endl;
    student.displayInfo();
}

