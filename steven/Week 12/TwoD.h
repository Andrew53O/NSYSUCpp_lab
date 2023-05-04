#include <iostream>
using namespace std;

namespace TD{

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
}
