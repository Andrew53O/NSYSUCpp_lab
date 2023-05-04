#include<iostream>

using namespace std;

namespace ToD{
	class TwoD{
		private:
			int** matrix = NULL;
			int row;
			int col;
		public:
			TwoD();
			TwoD(int, int);
			~TwoD();
			void fill();
			void display();
			TwoD& operator +(const TwoD& matrix2);
			TwoD& operator =(const TwoD& matrix2);
	};
}
