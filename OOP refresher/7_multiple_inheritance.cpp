#include<iostream>
using namespace std;
/* 	
	Multiple inheritance
		An object or class can inherit features from more than one parent object or parent class.
*/
// Parent Class
class A {
	private:
		int a;
	public:
		void input_A(){
			cout<<"Enter value of a: "<<endl;
			cin>>a;
		}
		void show_A(){
			cout<<"A: \t"<<a<<endl;
		}
};
// Parent Class
class B {
	private:
		int b;
	public:
		void input_B(){
			cout<<"Enter value of a: "<<endl;
			cin>>b;
		}
		void show_B(){
			cout<<"B: \t"<<b<<endl;
		}
};
// Child Class. It is inheriting two parent classes at the same time. (A,B)
class C : public A , public B{
	private:
		int c;
	public:
		void input_C(){
		// Accessing the parent class Functions
		A::input_A();
		B::input_B();
		cout<<"Enter c: "<<endl;
		cin>>c;
		}
		void show_C(){
			cout<<"\nThe Values are as Follows: "<<endl;
			// Accessing the parent class functions
			A::show_A();
			B::show_B();
			cout<<"C: \t"<<c<<endl;
		}
};
int main(){
	C obj;
	obj.input_C();
	obj.show_C();
}

