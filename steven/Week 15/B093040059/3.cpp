#include <iostream>

using namespace std;

class Character{
	protected:
		static const int EXP_LV = 100;
		string name;
		int level;
		int exp;
	public:
		Character(){}
		Character(string n, int l, int e){
			name = n;
			level = l;
			exp = e;
		}
		void print(){
			cout<<name<<": Level "<<"("<<exp<<"/"<<"),"<<endl;
		}
		string getName(){
			return name;
		}
		void beatMonster(int e){
			exp += e;
			cout<<name<<" beat the monster"<<endl;
			levelUp();
		}
		void levelUp(){
			int xp = getXptoLevel();

			while(1){
				if(xp>=exp) break;
				level++;				
				xp = getXptoLevel();
				
			}
			return;
		}
		int getXptoLevel(){
			int xp = ((level)*(level))*100;
			return xp;
		}
};

class Knight:public Character{
	public:
		Knight(string n, int l, int e){
			name = n;
			level = l;
			exp = e;
		}
		void print(){
			cout<<"Knight "<<name<<": Level "<<level<<"("<<exp<<"/"<<getXptoLevel()<<"),"<<endl;
		}
};

class Warrior:public Character{
	public:
		Warrior(string n, int l, int e){
			name = n;
			level = l;
			exp = e;
		}
		void print(){
			cout<<"Warrior "<<name<<": Level "<<level<<"("<<exp<<"/"<<getXptoLevel()<<"),"<<endl;
		}
};

int main(void){
	Knight leo("Leo", 10, 8100);
	Knight tsukasa("Tsukasa", 8, 4900);
	Warrior rose("Rose", 12, 12100);
	leo.print();
	tsukasa.print();
	rose.print();
	rose.beatMonster(10000);
	
	leo.print();
	tsukasa.print();
	rose.print();
	return 0;
}
