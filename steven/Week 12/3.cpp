#include <iostream>
#include "TwoD.h"
using namespace TD;
using namespace std;



int main(void){
	int row, col;
	cout<<"Enter the row and column dimension of the array :"<<endl;
	cin>>row>>col;
	TwoD matrix1(row,col);
	matrix1.fill();
	
	
	cout<<"Enter the row and column dimension of the array :"<<endl;
	cin>>row>>col;
	TwoD matrix2(row,col);
	matrix2.fill();

	cout<<"matrix3 = matrix2"<<endl;
	cout<<"matrix3 = "<<endl;
	TwoD matrix3;
	matrix3 = matrix2;
	matrix3.display();

	cout<<"matrix3 = matrix1 + matrix2"<<endl;
	cout<<"matrix3 = "<<endl;
	matrix3 = matrix1+matrix2;
	matrix3.display();
	
	return 0;
}


