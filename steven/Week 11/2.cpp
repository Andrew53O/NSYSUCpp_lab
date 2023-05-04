#include <iostream>

using namespace std;

typedef int* IAP;

int main(void){
	int sizeX, sizeY;
	cout<<"Please enter the number of rows and columns :"<<endl;
	cin>>sizeX>>sizeY;
	cout<<"Please enter all elements:"<<endl;
	int array[sizeX][sizeY];

	for(int y=0; y<sizeY;y++){
		for(int x=0; x<sizeX; x++){
			cin>>array[x][y];
		}
	}

	for(int x=0; x<sizeX;x++){
		for(int y=0; y<sizeY; y++){
			cout<<array[x][y]<<"@ "<<&array[x][y]<<" "; 
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"2d array address (Pointer's method)"<<endl;
	
	IAP *A = new IAP[sizeX];
	for(int x=0;x<sizeX;x++){
		A[x] = new int[sizeY];
		for(int y=0;y<sizeY;y++){
			A[x][y] = array[x][y];
		}
	}
	for(int x=0; x<sizeX;x++){
		for(int y=0; y<sizeY; y++){
			cout<<A[x][y]<<"@ "<<&A[x][y]<<" "; 
		}
		cout<<endl;
	}

	return 0;
}
