#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>

using namespace std;

void bubble_sort(int[]);
void create_random(int[]);
bool already_in(int[], int);

void menu();

void user_input(ofstream&, int[]);
void random_input(ofstream&, int[]);

int main(void){
	ofstream output;
	output.open("MyLottery.txt");
	if(output.fail()){
		cout<<"Fail to create a new file!"<<endl;
		return 1;
	}
	
	int choose;
	srand(time(NULL));
	cout<<"Welcome to lottery system !"<<endl;
	while(1){
		int lottery[6]={};
		menu();
		cin>>choose;
		switch(choose){
			case 1:
				random_input(output, lottery);
				break;
			case 2:
				user_input(output, lottery);
				break;
			case -1:
				cout<<"Exit lottery system"<<endl;
				output.close();
				exit(1);
				break;
			default:
				cout<<"Input Error!"<<endl;
				break;
		}
	}
	

	output.close();
	return 0;
}

void menu(){
	cout<<"1 for random number, 2 for choosing your own number, -1 for exitting"<<endl;
	return;
}

void user_input(ofstream& output, int lottery[]){
	int i=0;
	while(i<6){
		int get_number;
		cout<<"Please enter number "<<i+1<<endl;
		cin>>get_number;
		if(get_number>52 || get_number<1){
			cout<<"You can only choose 1~52."<<endl;
			continue;
		}
		if(!already_in(lottery, get_number)){
			lottery[i] = get_number;			
			i++;
		}else{
			cout<<"You have choosen that number!"<<endl;
			continue;
		}
	}
	bubble_sort(lottery);
	cout<<"Your number is : ";
	for(int i=0;i<6;i++)
		cout<<lottery[i]<<" ";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	output<<"Your lottery (choose) : ";
	for(int i=0;i<6;i++)
		output<<lottery[i]<<" ";
	output<<endl;
	
	return;
}

void random_input(ofstream& output, int lottery[]){
	create_random(lottery);
	bubble_sort(lottery);
	cout<<"Your random number is : ";
	for(int i=0;i<6;i++)
		cout<<lottery[i]<<" ";
	cout<<endl;
	output<<"Your lottery (random) : ";
	for(int i=0;i<6;i++)
		output<<lottery[i]<<" ";
	output<<endl;
	cout<<endl;
	cout<<endl;
	return;
}


void bubble_sort(int lot[]){
	int max=6;
	for(int i=0;i<max-1;i++){
		for(int j=0;j<max-i-1;j++){
			if(lot[j]>lot[j+1]){
				int temp = lot[j];
				lot[j] = lot[j+1];
				lot[j+1] = temp;
			}
		}
	}

}

bool already_in(int lot[], int num){
	for(int i=0;i<6;i++){
		if(lot[i] == num)
			return true;
	}
	return false;

}

void create_random(int lot[]){
	int i=0;
	
	while(i<6){
		int get_num = rand()%52+1;
		if(!already_in(lot, get_num)){
			lot[i] = get_num;			
			i++;
		}		
	}
	return;
}
