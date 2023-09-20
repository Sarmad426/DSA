// Early Binding
#include<iostream>
using namespace std;
class Parent{
	public:
		void show(){
			cout<<"Parent Class: "<<endl;
		}
};
class Child1: public Parent{
	public:
		void show(){
			cout<<"Child Class 1: "<<endl;
		}
};
class Child2: public Parent{
	public:
		void show(){
			cout<<"Child Class : "<<endl;
		}
};
int main(){
	Parent *ptr[5];
	int input, index = 0;
	cout<<"Enter 1 for parent object, 2 for child 1 object, 3 for child 2 object: "<<endl;
	for(index;index<5;index++){
		cin>>input;
		if(input == 1)
			ptr[index] = new Parent;
		else if (input == 2)
			ptr[index] = new Child1;
		else
			ptr[index] = new Child2;
	} 
	for(index =0;index<5;index++){
		ptr[index]->show();
	}
}
