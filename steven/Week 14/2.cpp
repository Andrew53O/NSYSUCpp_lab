#include <iostream>
#include <cstdlib>

using namespace std;

class Pokemon{
	protected:
		string name;
		string type;
		int HP;
		int ATK;
	public:
		void show();
};

class Fire:public Pokemon{
	public:
		Fire(string n, int hp, int atk);
};

class Water:public Pokemon{
	public:
		Water(string n, int hp, int atk);
};

class Grass:public Pokemon{
	public:
		Grass(string n, int hp, int atk);
};

int main(void){
	Fire charmander("Charmander", 10, 3), charmeleon("Charmeleon", 20, 7), charizard("Charizard", 40, 15);
	charmander.show();
	charmeleon.show();
	charizard.show();
	
	Water squirtle("Squirtle", 10,3), wartortle("Wartortle", 20, 7), blastoise("Blastoise", 40, 15);
	squirtle.show();
	wartortle.show();
	blastoise.show();

	Grass squirtle2("Squirtle", 10, 3), wartortle2("Wartortle", 20, 7), blastoise2("Blastoise", 40, 15);
	squirtle2.show();
	wartortle2.show();
	blastoise2.show();
	return 0;	
}

void Pokemon::show(){
	cout<<name<<" Type:"<<type<<" HP:"<<HP<<" ATK:"<< ATK<<endl;
}

Fire::Fire(string n, int hp, int atk){
	name = n;
	type = "fire";
	HP = hp;
	ATK = atk;
	return;
}

Water::Water(string n, int hp, int atk){
	name = n;
	type = "water";
	HP = hp;
	ATK = atk;
	return;
}

Grass::Grass(string n, int hp, int atk){
	name = n;
	type = "grass";
	HP = hp;
	ATK = atk;
	return;
}
