#include<iostream>

using namespace std;

int main(){
	int i1=8, i2=10;
	int *p1=&i1, *p2=&i2;
	cout << "Value of i1 : " << i1 << " \t, start at : " << p1 << "\n";
	cout << "Value of i2 : " << i2 << "\t, start at : " << p2 << "\n";
	cout << "When we let i1 = i2......\n";
	i1=i2;
	cout << "Value of i1 : " << i1 << " \t, start at : " << p1 << "\n";
	cout << "Value of i2 : " << i2 << "\t, start at : " << p2 << "\n";
	cout << "When we let p1 = p2......\n";
	p1=p2;
	cout << "Value of i1 : " << i1 << " \t, start at : " << p1 << "\n";
	cout << "Value of i2 : " << i2 << "\t, start at : " << p2 << "\n";
	return 0;
}
