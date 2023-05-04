#include<iostream>
#include "grass.h"

using namespace std;

namespace Pokemon{
	void poke::status(){
		cout << Name << " Type:" << Type << " HP:" << HP << " ATK:" << ATK << "\n";
	}
	string poke::getName(){
		return Name;
	}
	void poke::minHP(int n){
		HP-=n;
		return;
	}
	int poke::getATK(){
		return ATK;
	}
	int poke::getHP(){
		return HP;
	}
	string poke::getType(){
		return Type;
	}
}
