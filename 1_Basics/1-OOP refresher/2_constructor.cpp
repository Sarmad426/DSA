#include<iostream>
using namespace std;
class Laptop{
	public:
		string name, serial_number;
		int generation;
		// A Constructor function to assign values
		Laptop(string aName,string aSerial_number,int aGeneration){
			name = aName;
			serial_number = aSerial_number;
			generation = aGeneration;
			display_values();
		}
		void display_values(){
			cout<<"Laptop name: "<<name<<endl;
			cout<<"Serial Number: "<<serial_number<<endl;
			cout<<"Generation: "<<generation<<endl;
		}
};
int main(){
	Laptop laptop("HP","VXR-2345-9832",8);
	Laptop laptop1("Dell","YUZ-4626-6763",5);
}
// The Function Laptop is a constructor 
// The Second Function is returning nothing and just displaying values.
// The constructor function is used to assign values.
