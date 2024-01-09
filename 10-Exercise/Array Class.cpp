#include<iostream>
using namespace std;

class Array{
    int size = 0;
    int* arr;
    public:
        Array(int size){
            arr = new int[size];
        }
        
         ~Array() {
        delete[] arr;
    }
    
    void insert(int value){
        size+=1;
        arr[size-1] = value;
    }
    
    void remove_by_index(int index){
       for(int i=index;i<size;i++){
           arr[i-1] = arr[i]; 
       }
        size-=1;
    }
    
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<", ";
        }
    }
    
    
};

int main(){
    Array arr(3);
    arr.insert(11);
    arr.insert(6);
    arr.insert(19);
    arr.insert(45);
    arr.remove_by_index(1);
    arr.display();
}