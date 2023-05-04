#include <iostream>

using namespace std;

class TwoD{
	private:
		int** matrix = NULL;
		int row;
		int col;
	public:
		TwoD();
		TwoD(int, int);
		void setSize(int, int);
		void fill();
		void display();
		TwoD& operator +(const TwoD& matrix2); 
		TwoD& operator =(const TwoD& matrix2); 
		~TwoD();
};

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

void TwoD::setSize(int Row, int Col){
	row=Row;
	col=Col;
	matrix = new int*[Row];
	for(int i=0;i<Row;i++){
		matrix[i] = new int[Col];
	}
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

void TwoD::display(){
	for(int i=0;i<row;i++){

		for(int j=0;j<col;j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
	
}

TwoD::~TwoD(){
	delete matrix;
	return;
}
