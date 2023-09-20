#include<iostream>
using namespace std;
class Person{

	public:
		string name;
		int age;
		Person(){
			name = "No name";
			age = 0;
		}
		void set_props(string name,int age){
			this->name = name;
			this->age = age; 
		}
		void details(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
			Person copy_object(Person person1){
			Person person2;
			person2.name = person1.name;
			person2.age = person1.age;
			
			return person2;
		}
};
int main(){
	Person person;
	person.set_props("Sarmad",18);
	person.details();
	cout<<"Data after Object Copy. \n";
	cout<<"Name: "<<person.copy_object(person).name<<endl;
	cout<<"Age: "<<person.copy_object(person).age<<endl;
}
