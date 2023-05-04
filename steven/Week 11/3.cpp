#include <iostream>

using namespace std;

struct Data{
	int data;
	Data* ptr;
};

class Stack{
	private:
		Data* top = NULL;
		int count = 0;
	public:
		void push(int);
		void pop();
		void print();
};



int main(void){
	Stack stack;
	while(1!=2){
		char sel;
		cout<<"1 for push in stack, 2 for pop out from stack, 3 for exit:"<<endl;
		cin>>sel;
		switch(sel){
			case '1':
				cout<<"Enter a number:"<<endl;
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
				cout<<"Input error!"<<endl;
				break;
		}
		stack.print();
	}
	return 0;
}

void Stack::push(int num){
	Data* d= new Data;
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
	Data* temp;
	temp = top;
	top = top->ptr;
	count--;
	delete temp;
	return;
}

void Stack::print(){
	Data* point;
	point = top;
	if(point == NULL){
		cout<<"Stack is empty"<<endl;
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
