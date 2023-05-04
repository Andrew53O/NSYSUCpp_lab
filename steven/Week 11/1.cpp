#include <iostream>

using namespace std;

int main(void){
	int *p1, *p2;
	int i1 = 8;
	int i2 = 10;

//	Set p1 to hold the memory address of i1
	p1 = &i1;
//	Set p1 to hold the memory address of i1
	p2 = &i2;

//	Initial Value.
	cout<<"Value of i1 is : "<<*p1<<"\t, start at : "<<p1<<endl;
	cout<<"Value of i2 is : "<<*p2<<"\t, start at : "<<p2<<endl;

	cout<<"When we let i1 = i2......"<<endl;
	i1 = i2;
	cout<<"Value of i1 is : "<<*p1<<"\t, start at : "<<p1<<endl;
	cout<<"Value of i2 is : "<<*p2<<"\t, start at : "<<p2<<endl;

	cout<<"When we let p1 = p2......"<<endl;
	p1 = p2;
	cout<<"Value of i1 is : "<<*p1<<"\t, start at : "<<p1<<endl;
	cout<<"Value of i2 is : "<<*p2<<"\t, start at : "<<p2<<endl;

	return 0;
}
