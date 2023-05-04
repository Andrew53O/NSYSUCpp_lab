#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* ptr;
};

class Stack{
	private:
		Node* top = NULL;
		int count = 0;
	public:
		void push(int);
		void pop();
		void print();
};

int main(){
	Stack stack;
	while(1!=2){
		char sel;
		cout<<"1 for push in stack, 2 for pop out from stack, 3 for exit:\n";
		cin>>sel;
		switch(sel){
			case '1':
				cout<<"Enter a number:\n";
				int input;
				cin>>input;
				stack.push(input);
				break;
			case '2':
				stack.pop();
				break;
			case '3':
				exit(1);
				break;
			default:
				cout<<"Input error!\n";
				break;
		}
		stack.print();
	}
	return 0;
}

void Stack::push(int num){
	Node* d= new Node;
	d->data = num;
	d->ptr = top;
	count++;
	this->top = d;
	return;
}

void Stack::pop(){
	if(count==0){
		return;
	}
	Node* temp;
	temp = top;
	top = top->ptr;
	count--;
	delete temp;
	return;
}

void Stack::print(){
	Node* point;
	point = top;
	if(point == NULL){
		cout<<"Stack is empty\n";
	}else{
		cout<<"In stack: ";
		int arr[count]={};
		int i=0;
		while(point != NULL){
			arr[i]=point->data;
			i++;
			point = point->ptr;
		}
		for(int j=count-1;j>=0;j--){
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	return;
}
