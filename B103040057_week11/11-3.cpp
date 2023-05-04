#include<iostream>
#include<fstream>

using namespace std;

void sorts(int arr[], int n){
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])swap(arr[j], arr[j + 1]);
}

int main(){
	string str1, str2, str3;
	cout << "Enter the first of two input file names: ";cin >> str1;
	cout << "Now a second input file name: ";cin >> str2;
	cout << "Enter the output file name: : ";cin >> str3;
	cout << "\n";

	ifstream myFile;

	int arr[12], n,i=1;
	myFile.open(str1);
	myFile >> n;
	arr[0]=n;
	while(!myFile.eof()){
		myFile >> n;
		arr[i]=n;
		i++;
	}
	myFile.close();
	
	cout << "Contents of file " << str1 << " are:\n";
	for(i=0;i<6;i++){
		cout << arr[i] << "\n";
	}
	
	ifstream myFile1;
	myFile1.open(str2);
	myFile1 >> n;
	arr[6]=n;i=7;
	while(!myFile1.eof()){
		myFile1 >> n;
		arr[i]=n;
		i++;
	}
	myFile1.close();

	cout << "Contents of file " << str2 << " are:\n";
	for(i=6;i<12;i++){
		cout << arr[i] << "\n";
	}

	sorts(arr,12);
	cout << "Contents of merged file " << str3 << " are:\n";
	for(i=0;i<12;i++){
		cout << arr[i] << "\n";
	}

	ofstream myFile2;
	myFile2.open(str3,ofstream::out | ofstream::trunc);
	for(i=0;i<12;i++){
		myFile2 << arr[i];
		if(i!=11)myFile2 << " ";
	}
	myFile2.close();
	return 0;
}
