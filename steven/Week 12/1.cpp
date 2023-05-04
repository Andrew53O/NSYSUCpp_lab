#include <iostream>
#include <iomanip>

using namespace std;

struct Data{
	string name;
	Data* next;
};

class List{
	private:
		Data* head = NULL;
		int len=0;
	public:
		List();
		void add(string);
		void disp();
		bool del(string);

};

int main(void){
	List list;
	string opt;
	while(1){
		cout<<"Please enter add, delete or exit :"<<endl;
		cin>>opt;
		if(opt == "add"){
			string name;
			cout<<"Please enter a name :"<<endl;
			cin>>name;
			list.add(name);
			cout<<"after adding a name :"<<endl;
			list.disp();


		}else if(opt == "delete"){
			string name;
			cout<<"Please choose a name :"<<endl;
			cin>>name;
			if(list.del(name)){
				cout<<"After removing a name :"<<endl;
				list.disp();
			}else{
				cout<<"The name isn't on the list"<<endl;
				cout<<endl;
			}
			

		}else if(opt == "exit"){
			exit(1);

		}else{
			cout<<"Input error!"<<endl;

		}		
	}
	return 0;
}

List::List(){
	add("Frink");
	add("Wiggum");
	add("Allen");
	add("Quimby");
	add("Flanders");
	cout<<"Initial list:"<<endl;
	disp();
}

void List::add(string name){
	Data* curr = head;
	Data* create = new Data;
	create->name = name;
	create->next = NULL;
	if(head==NULL){
		head = create;
		return;
	}
	while(curr->next!=NULL){
		curr = curr->next;
	}
	curr->next = create;
	return;
}

void List::disp(){
	Data* curr = head;
	int count=0;
	while(curr != NULL){
		
		cout<<setw(2)<<count<<": "<<curr->name<<endl;
		count++;		
		curr=curr->next;
	}
	cout<<endl;
	return;
}

bool List::del(string name){
	Data* curr = head;
	Data* get = NULL;
	bool flag = false;
	if(curr == NULL){
		return false;
	}
	if(curr->name== name){
		head = curr->next;
		delete curr;
		return true;
	}else{
		while(curr!=NULL){
			if(curr->name == name){
				get=curr;			
				break;
			}
			curr = curr->next;
		}
	}
	
	if(get!=NULL){
		Data* curr2 = head;
		while(curr2!=NULL){
			if(curr2->next == get){
				break;
			}
			curr2=curr2->next;
		}
		curr2->next = get->next;
		delete curr;

		return true;
	}else{
		return false;
	}

}
