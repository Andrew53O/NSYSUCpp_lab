#include <iostream>
#include <fstream>
using namespace std;

int main(void){
	ifstream inStream;	
	string input;
	cout<<"please enter the file name to read temperature from: ";
	cin>>input;
	
	inStream.open(input);
	if(inStream.fail()){
		cout<<"Input file opening failed"<<endl;
		return 1;
	}
	
	int i;
	float t_temp;
	float max_temp;
	float max_month = 1;
	inStream>>max_temp;
	
	for(i=2;i<=12&&!inStream.eof();i++){
		inStream>>t_temp;
		if(t_temp>max_temp){
			max_temp = t_temp;
			max_month = i;
		}
	}
	
	cout<<"The hotest month : "<<max_month<<endl;
	cout<<"This temperature is : "<<max_temp<<endl;
	

	inStream.close();
	return 0;
}
