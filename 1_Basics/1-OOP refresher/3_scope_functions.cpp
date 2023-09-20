/*
    In this program we will be creating member functions of a class
    outside the class. These functions are declared inside the class
    but are defined outside the class. To do this we use a
     Scope Resolution operator. Symbol (::). Double colon.
*/
#include<iostream>
using namespace std;
class Array{
    private:
     int array[5];
    public:
        void get_values();
        void display_values();
        int max();
        int min();
};
// Using Scope Resolution Operator.
void Array::get_values(){
for(int i=0;i<5;i++){
    cout<<"Enter array["<<i<<"]";
    cin>>array[i];
}
}
void Array::display_values(){
    cout<<"\nDetails: "<<endl;
    for(int i=0;i<5;i++){
     cout<<"array["<<i<<"] =  "<<array[i]<<endl;
    }
}
int Array::max(){
    int maximum = array[0];
    for(int i=0;i<5;i++){
        if(maximum < array[i]){
            maximum = array[i];
        }
    }
    return maximum;
}

int Array::min(){
  int minimum = array[0];
    for(int i=0;i<5;i++){
        if(minimum > array[i]){
            minimum = array[i];
        }
    }
    return minimum;
}

int main(){
Array a;
a.get_values();
a.display_values();
cout<<"Maximum Value is: "<<a.max()<<endl;
cout<<"Minimum Value is: "<<a.min()<<endl;
}
