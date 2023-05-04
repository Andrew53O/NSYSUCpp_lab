#include "TwoD.h"
#include<iostream>

using namespace std;

namespace ToD{
	TwoD::TwoD(){
		return;
	}
	
	TwoD::TwoD(int Row, int Col){
		row=Row;
		col=Col;
		matrix = new int*[Row];
		for(int i=0;i<Row;i++){
			matrix[i] = new int[Col];
		}
	}
	
	TwoD::~TwoD(){
		delete matrix;
		return;
	}
	
	void TwoD::fill(){
		cout<<"Enter "<<row<<" rows of "<<col<<" integers each :"<<endl;
		for(int y=0;y<row;y++){
			for(int x=0;x<col;x++){
				cin>>matrix[y][x];
			}
		}
		return;
	}

	void TwoD::display(){
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++)
				cout<<matrix[i][j]<<" ";
			cout<<endl;
		}
	
	}

	TwoD& TwoD::operator =(const TwoD& matrix2){
		row = matrix2.row; 
		col = matrix2.col;

		matrix = new int*[row];
		for(int i=0;i<row;i++){
			matrix[i] = new int[col];
		}

		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++)
				matrix[i][j] = matrix2.matrix[i][j];
		}
	
		return *this;
	}

	TwoD& TwoD::operator +(const TwoD& matrix2){
		row = matrix2.row; 
		col = matrix2.col;
		TwoD* temp = new TwoD(row, col);

		temp->matrix = new int*[row];
		for(int i=0;i<row;i++){
			temp->matrix[i] = new int[col];
		}

		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++)
				temp->matrix[i][j] = this->matrix[i][j]+matrix2.matrix[i][j];
		}
	
		return *temp;
	}
}
