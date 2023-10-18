#include<iostream>
using namespace std;

#define max 5

class Stack{
	int stack[max];
	int top;
	public:
		Stack(){
			top =-1;
		}
		bool full(){
			return top == max-1;
		}
		bool empty(){
			return top==-1;
		}
		int Top(){
			if(empty()){
				cerr<<"Stack is Empty: "<<endl;
				return -1;
			}
			return stack[top];
		}
		void push(int value){
			if(full()){
				cerr<<"Stack is Full: "<<endl;
				return;
			}
			top+=1;
			stack[top] = value;
		}
		void pop(){
			if(empty()){
				cerr<<"Stack is Empty: "<<endl;
				return;
			}
			top-=1;
		}
		void run(){
			for(int i=0;i<top;i++){
				cout<<stack[i]<<", ";
			}
		}
};

int main(){
	Stack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	cout<<stack.Top()<<endl;
	stack.pop();
	cout<<stack.Top()<<endl;
	stack.pop();
	cout<<stack.Top()<<endl;
	stack.pop();
	cout<<stack.Top()<<endl;
	stack.pop();
	cout<<stack.Top()<<endl;
	stack.pop();
	cout<<stack.Top()<<endl;
	stack.pop();
}
