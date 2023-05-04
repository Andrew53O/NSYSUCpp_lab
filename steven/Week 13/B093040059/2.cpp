#include <iostream>
#include <fstream>
using namespace std;

int main(void){
	ifstream true_answer;
	ifstream my_answer;
	
	char trueAns[10];
	char myAns[10];
	
	char get_true;
	char get_mine;

	cout<<"Start reading true answers and your answers ......"<<endl;
	true_answer.open("TrueAnswer.txt");
	if(true_answer.fail()){
		cout<<"Fail to open TrueAnswer.txt"<<endl;
	}

	my_answer.open("MyAnswer.txt");
	if(my_answer.fail()){
		cout<<"Fail to open MyAnswer.txt"<<endl;
	}
	
	
	for(int i=0; i<10;i++){

		true_answer>>trueAns[i];
		my_answer>>myAns[i];
		
	}

	cout<<"Question answer is : ";
	for(int i=0;i<10;i++){
		cout<<trueAns[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Your answer is : ";
	for(int i=0;i<10;i++){
		cout<<myAns[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Calculating your score ......"<<endl;
	int total = 0;
	for(int i=0;i<10;i++){
		if(myAns[i]==trueAns[i])
			total+=10;
	}

	cout<<"Your score is : "<<total<<endl;

	true_answer.close();
	my_answer.close();
	
	return 0;
}
