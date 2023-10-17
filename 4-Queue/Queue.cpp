#include<iostream>
using namespace std;

#define max_size 5

class Queue{
	private:
		int queue[max_size];
		int front;
		int rear;
	public:
		Queue(){
			front = -1;
			rear = -1;
		}
		bool full(){
			if(rear == max_size-1){
				cout<<"Queue is Full: "<<endl;
				return true;
			}
			return false;
		}
		bool empty(){
			if(front>rear || front ==-1){
				cout<<"Queue is Empty: "<<endl;
				return true;
			}
			return false;
		}
		int enqueue(int value){
			if(full()){
				cout<<"Queue Overflow: "<<endl;
				return 0;
			}
			rear+=1;
			queue[rear] = value;
			if(front==-1){
				front+=1;
			}
		}
		int peek(){
			if(empty()){
				cout<<"Queue Underflow: "<<endl;
				return 0;
			}
			return queue[front];
		}
		void dequeue(){
			if(empty()){
				cout<<"Queue Underflow: "<<endl;
				return;
			}
			front++;
		}
};

int main(){
	Queue queue;
	queue.empty();
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(4);
	queue.enqueue(5);
	queue.full();
	cout<<queue.peek();
	queue.dequeue();
}
