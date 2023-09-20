#include<iostream>
using namespace std;
/* 	
	Multilevel inheritance
		When a Child class is inherited by another class. In this Case the class which is
		inheriting from child class is called GrandChild and the top most class from which
		child class is Derived is called GrandChild.
*/
// Parent Class
class Person{
	protected:
		string name,address;
		int age;
	public:
		Person(){
			name = "No name";
			address = "No address";
			age = 0;
		}
		void input_details(){
			cout<<"Enter Name: "<<endl;
			getline(cin,name);
			cout<<"Enter age: "<<endl;
			cin>>age;
			// Using cin.ignore to access the information correctly.
			cin.ignore();
			cout<<"Enter Address: "<<endl;
			getline(cin,address);
		}
		void get_details(){
			cout<<"\nPersonal Details: "<<endl;
			cout<<"\tName: "<<name<<endl;
			cout<<"\tAge: "<<age<<endl;
			cout<<"\tAddress: "<<address<<endl;
		}
};
// Child Class
class Student : public Person{
	protected:
		int roll_no;
		char grade;
	public:
		Student(){
			roll_no = 0;
			grade = '0';
		}
		void input_details(){
			// Using Scope Resolution Operator (::) for accessing parent class Member Functions.
			Person::input_details();
			cout<<"Enter Roll no: "<<endl;
			cin>>roll_no;
			cout<<"Enter Grade: "<<endl;
			cin>>grade; 
		}
		void get_details(){
			Person::get_details();
			cout<<"\nEducational Information :"<<endl;
			cout<<"\tRoll No: "<<roll_no<<endl;
			cout<<"\tGrade: "<<grade<<endl;
		}
};
// Grand Child class. Since it is inheriting Student and Person class.
class Scholarship: public Student{
	private:
		string scholarship_name;
		float amount;
		bool is_approved;
	public:
		Scholarship(){
			scholarship_name = "No Scholarship";
			amount  = 0.0;
			is_approved = false;
		}
		void input_details(){
			Student::input_details();
			cin.ignore();
			cout<<"Enter Scholarship Name: "<<endl;
			getline(cin,scholarship_name);
			cout<<"Enter Amount: "<<endl;
			cin>>amount;
			cout<<"Approved or not. \n \t 1 :yes \n \t 0 :no"<<endl;
			cin>>is_approved;
		}
		void get_details(){
			Student::get_details();
			cout<<"\nScholarship Information: "<<endl;
			cout<<"\tScholarship Name: "<<scholarship_name<<endl;
			cout<<"\tAmount: "<<amount<<endl;
			// Checking For Verified Scholarship to display the message accordingly.
			switch (is_approved) {
			case true:
				cout<<"\tVerified Scholarship: "<<endl;
				break;
			case false:
				cout<<"\tNot Verified: "<<endl;
			}
		}
};
int main(){
Scholarship grade;
grade.input_details();
grade.get_details();
}

