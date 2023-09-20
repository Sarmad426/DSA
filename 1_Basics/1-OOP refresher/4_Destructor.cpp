#include<iostream>
using namespace std;
class Over{
public:
    // This is a constructor.
    Over(){
    cout<<"Object Created:"<<endl;
    }
    // This is a Destructor. It starts with a tilde ~ sign.
    ~Over(){
    cout<<"Object Destroyed: "<<endl;
    }
    /*
        A destructor is a method which is invoked mechanically
        just before the memory of the object is released.
     */
};
int main(){
    Over obj;
}
