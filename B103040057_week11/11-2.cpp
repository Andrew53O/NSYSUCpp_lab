#include<iostream>
#include<fstream>

using namespace std;

int main(){
	int i=1, score=0;
	char ch, ch1[19], ch2[19];
	cout << "Start reading true answers and your answers ......\n";
	cout << "Question answer is : ";
	ifstream myFile;
	myFile.open("TrueAnswer.txt");
	myFile.get(ch);
	ch1[0]=ch;
	while(!myFile.eof()){
		cout << ch;
		myFile.get(ch);
		ch1[i]=ch;
		i++;
	}
	myFile.close();

	cout << "Your answer is : ";
	myFile.open("MyAnswer.txt");
	myFile.get(ch);
	ch2[0]=ch;i=1;
	while(!myFile.eof()){
		cout << ch;
		myFile.get(ch);
		ch2[i]=ch;
		i++;
	}
	myFile.close();

	cout << "Calculating your score ......\n";
	for(i=0;i<19;i++){
		if(ch1[i]!=32&&ch2[i]!=32){
			if(ch1[i]==ch2[i])score+=10;
		}
	}
	cout << "Your score is : " << score << endl;
	return 0;
}
