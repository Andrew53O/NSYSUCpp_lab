#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

void bubble_sort(vector <int> &list);

int main(void){
	string file1, file2, file3;;
	ifstream input1, input2;
	ofstream output;
	cout<<"Enter the first of two input file names: ";
	cin>>file1;
	input1.open(file1);
	if(input1.fail()){
		cout<<"Fail to open "<<file1<<endl;
		return 1;
	}

	cout<<"Now a second input file name: ";
	cin>>file2;
	input2.open(file2);
	if(input2.fail()){
		cout<<"Fail to open "<<file2<<endl;
		return 1;
	}

	cout<<"Enter the output file name: ";
	cin>>file3;
	output.open(file3);
	if(output.fail()){
		cout<<"Fail to create "<<file3<<endl;
		return 1;
	}
	vector <int> list;
	cout<<endl;
	cout<<"Contents of file "<<file1<<" are: "<<endl;
	int getnum;

	input1>>getnum;	
	while(!input1.eof()){			
		cout<<getnum<<endl;
		list.push_back(getnum);
		input1>>getnum;
	}

	cout<<"Contents of file "<<file2<<" are: "<<endl;
	
	input2>>getnum;	
	while(!input2.eof()){
		cout<<getnum<<endl;
		list.push_back(getnum);
		input2>>getnum;
		
	}
	
	bubble_sort(list);
	cout<<"Contents of merged file merge.txt are"<<endl;
	for(int i=0;i<list.size();i++){
		cout<<list[i]<<endl;
		if(i == list.size()-1){
			output<<list[i];
		}else{
			output<<list[i]<<" ";
		}
		
	}
	
	input1.close();
	input2.close();
	output.close();
	
	return 0;
}


void bubble_sort(vector <int> &list){
	int max=list.size();
	for(int i=0;i<max-1;i++){
		for(int j=0;j<max-i-1;j++){
			if(list[j]>list[j+1]){
				int temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
		}
	}
	return;
}
