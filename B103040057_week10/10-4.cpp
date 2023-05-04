#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

class Queue{
	private:
		Node* head = NULL;
		Node* tail = NULL;
		int count = 0;
	public:
		void push(int);
		void pop();
		void print();
};

int main(void){
	Queue queue;
	do{
		char n;
		cout<<"1 for push in queue, 2 for pop out from queue, 3 for exit:\n";
		cin >> n;
		switch(n){
			case '1':
				cout<<"Enter a number:\n";
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
				cout<<"Input error!\n";
				break;
		}
		queue.print();
	}while(1);
	return 0;
}

void Queue::push(int num){
	Node* d= new Node;
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
		Node* temp = head;
		head = NULL;
		tail = NULL;
		delete temp;
	}else{
		Node* temp = head;
		Node* point = tail;
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
	Node* point;
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
