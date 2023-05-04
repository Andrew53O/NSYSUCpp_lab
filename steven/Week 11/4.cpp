#include <iostream>

using namespace std;

struct Data{
	int data;
	Data* next;
};

class Queue{
	private:
		Data* head = NULL;
		Data* tail = NULL;
		int count = 0;
	public:
		void push(int);
		void pop();
		void print();
};

int main(void){
	Queue queue;
	while(1<2){
		char sel;
		cout<<"1 for push in queue, 2 for pop out from queue, 3 for exit:"<<endl;
		cin>>sel;
		switch(sel){
			case '1':
				cout<<"Enter a number:"<<endl;
				int input;
				cin>>input;
				queue.push(input);
				break;
			case '2':
				queue.pop();
				break;
			case '3':
				exit(1);
				break;
			default:
				cout<<"Input error!"<<endl;
				break;
		}
		queue.print();
	}
	return 0;
}

void Queue::push(int num){
	Data* d= new Data;
	d->data = num;
	d->next = tail;
	if(count==0){
		head = d;
		tail = d;
	}else{
		tail = d;
	}	
	count++;
	
	return;
}

void Queue::pop(){
	if(count==0){
		return;
	}else if(count == 1){
		Data* temp = head;
		head = NULL;
		tail = NULL;
		delete temp;
	}else{
		Data* temp = head;
		Data* point = tail;
		while(point->next != head){
			point=point->next;
		}
		head = point;
		delete temp;
	}
	count--;
	return;
}

void Queue::print(){
	Data* point;
	point = tail;
	if(point == NULL){
		cout<<"Queue is empty"<<endl;
	}else{
		cout<<"In queue: ";
		int arr[count]={};
		int i=0;
		while(point != NULL){
			arr[i]=point->data;
			i++;
			point = point->next;
		}
		for(int j=count-1;j>=0;j--){
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	return;
}
