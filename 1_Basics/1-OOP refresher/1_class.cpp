#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int age;
	float gpa;
};
int main(){
	Student student;
	Student student2;
	student.name = "Sarmad";
	student.age = 18;
	student.gpa = 3.6;
	// student 2
	student2.name = "Akmal";
	student2.age = 21;
	student2.gpa = 3.43;
	cout<<student.name<<endl;
	cout<<student2.name<<endl;
}
/*
	The student is the object and its the shallow copy of the class Student and 
	it contains all the public properties and methods of Student.	
*/ 
