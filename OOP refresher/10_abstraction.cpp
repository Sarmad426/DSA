/* 
	Abstraction
		Abstraction is the process of only showing the necessary details
		to the user and hiding the other details in the background.
		Control and data are the two types of abstraction in C++. 
		Abstraction in C++ is achieved through classes, header files, and 
		access specifiers (public, private, protected).
	
	Abstract Class	
		The class in which pure virtual functions are defined is called 
		Abstract class.
		
	Pure Virtual Function
		Pure virtual function is similar to virtual function. The only 
		difference is that it is only declared in the parent class and not
		defined. It has a special syntax and after function paranthesis ()
		=0 is written. 
			Syntax:
				void details()=0;
	Note:
		The pure virtual function must be overriden in the derived class otherwise
		the derived class also becomes the abstract class. Objects cannot be 
		created by using Abstract class.
*/

#include<iostream>
using namespace std;

class Parent{
	public:
		// Pure virtual function
		virtual void show()=0;
};
class Child1 : public Parent{
	public:
		// Overrriding the Pure virtual function
		void show(){
			cout<<"Child class 1: "<<endl;
		}
};
class Child2 : public Parent{
	public:
		// Overrriding the Pure virtual function
		void show(){
			cout<<"Child class 2: "<<endl;
		}
};
int main(){
	Parent *ptr[2];
	ptr[0] = new Child1;
	ptr[1] = new Child2;
	ptr[0]->show();
	ptr[1]->show();
}
