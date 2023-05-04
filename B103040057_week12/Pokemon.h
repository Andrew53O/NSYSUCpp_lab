#include<iostream>

using namespace std;

namespace Pokemon{
	class poke{
		protected:
			string Name;
			string Type;
			int HP;
			int ATK;
		public:
			void status();
			string getName();
			void minHP(int n);
			int getATK();
			int getHP();
			string getType();
	};
}
