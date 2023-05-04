#include<iostream>

using namespace std;

int main(){
	int x, y, n;
	cout << "Please enter the number of rows and columns :\n";cin >> x >> y;
	cout << "Please enter all elements :\n";
	int B[x][y];
	typedef int *IAP;
	IAP *A = new IAP[x];
	for(int i=0;i < x;i++){
		A[i] = new int[y];
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin >> n;
			B[i][j]=n;
			A[i][j]=n;
		}
	}
	cout << "\n2d array address (General Method) :\n";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout << B[i][j] << "@ " << &B[i][j] << "  ";
		}
		cout << "\n";
	}
	cout << "\n2d array address (Pointer Method) :\n";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout << A[i][j] << "@ " << &A[i][j] << "  ";
		}
		cout << "\n";
	}
	return 0;
}
