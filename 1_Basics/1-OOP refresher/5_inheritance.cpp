#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
		int id;
		string address;
	public:
		Person(){
			name = "No name";
			id = 0;
			address = "No Address";
		}
	void get_details(){
    cout<<"Enter Id: "<<endl;
    cin>>id;
    cout<<"Enter Your Name: "<<endl;
    cin>>name;
    cin.ignore(); // discard the newline character in the input buffer
    cout<<"Address: "<<endl;
    getline(cin,address);
}

	void details(){
		cout<<"\nYour Personal Details: "<<endl;
		cout<<"\tName: \t\t|\t"<<name<<endl;
		cout<<"\tId: \t\t|\t"<<id<<endl;
		cout<<"\tAddress: \t|\t"<<address<<endl;
		}
};
class Student : public Person{
	private:
		int roll_no;
		int marks;
	public:
		Student(){
			roll_no = 0;
			marks = 0;
		}
		void get_edu_info(){
			Person::get_details();
			cout<<"Roll No: "<<endl;
			cin>>roll_no;
			cout<<"Marks: "<<endl;
			cin>>marks;
		}
		void edu_info_details(){
			Person::details();
			cout<<"\nEducational Details: "<<endl;
			cout<<"\tRoll No: \t|\t"<<roll_no<<endl;
			cout<<"\tMarks: \t\t|\t"<<marks<<endl;
		}
};
int main(){
	Student sarmad;
	sarmad.get_edu_info();
	sarmad.edu_info_details();
}
