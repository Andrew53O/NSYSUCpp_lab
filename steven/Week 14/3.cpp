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
		string getName();
		void minHP(int n){
			HP-=n;
			return;
		}
		int getATK(){
			return ATK;
		}
		int getHP(){
			return HP;
		}
		string getType(){
			return type;
		}
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

bool check(int a){
	if(a<0 || a>8)
		return false;
	return true;
}

Fire charmander("Charmander", 10, 3), charmeleon("Charmeleon", 20, 7), charizard("Charizard", 40, 15);
Water squirtle("Squirtle", 10,3), wartortle("Wartortle", 20, 7), blastoise("Blastoise", 40, 15);
Grass bulbasaur("Bulbasaur", 10, 3), ivysaur("Ivysaur", 20, 7), venusaur("Venusaur", 40, 15);


Fire* searchF(int a){
	switch(a){
		case 0:
			return &charmander;
		case 1:
			return &charmeleon;
		case 2:
			return &charizard;
	}
}

Water* searchW(int a){
	switch(a){
		case 3:
			return &squirtle;
		case 4:
			return &wartortle;
		case 5:
			return &blastoise;
	}
}

Grass* searchG(int a){
	switch(a){
		case 6:
			return &bulbasaur;
		case 7:
			return &ivysaur;
		case 8:
			return &venusaur;
	}
}

void attack(Pokemon*a, Pokemon*b){
	if((b->getType() == "fire") && (a->getType() == "water"))
		b->minHP(a->getATK()*2);
	else if((b->getType() == "water") && (a->getType() == "grass"))
		b->minHP(a->getATK()*2);
	else if((b->getType() == "grass") && (a->getType() == "fire"))
		b->minHP(a->getATK()*2);
	else		
		b->minHP(a->getATK());
	return;
}

int fight(int a, int b){
	Pokemon*A = NULL;
	Pokemon*B = NULL;
	

	if(a<3){
		A = searchF(a);
	}else if(a<6){
		A = searchW(a);
	}else if(a<9){
		A = searchG(a);
	}

	if(b<3){
		B = searchF(b);
	}else if(b<6){
		B = searchW(b);
	}else if(b<9){
		B = searchG(b);
	}

	cout<<A->getName()<<" atk >> "<<B->getName()<<endl;
	attack(A,B);	
	cout<<"remain HP "<<B->getHP()<<endl;
	if(B->getHP()<0){
		return 0;
	}
	cout<<B->getName()<<" atk >> "<<A->getName()<<endl;
	attack(B,A);
	cout<<"remain HP "<<A->getHP()<<endl;
	if(A->getHP()<0){
		return 0;
	}
	return 1;
}

int main(void){
	/*MENU*/
	charmander.show();
	charmeleon.show();
	charizard.show();
	squirtle.show();
	wartortle.show();
	blastoise.show();
	bulbasaur.show();
	ivysaur.show();
	venusaur.show();
	cout<<endl;

	while(1){
		int a,b;
		cout<<"Please enter two pokemons number:"<<endl;
		cin>>a>>b;
		if(!check(a)){
			cout<<"Out of range"<<endl;
			continue;
		}
		if(!check(b)){
			cout<<"Out of range"<<endl;
			continue;
		}
		if(!fight(a,b)){
			cout<<"dead"<<endl;
			exit(1);
		}
	}
	
	return 0;	
}

void Pokemon::show(){
	cout<<name<<" Type:"<<type<<" HP:"<<HP<<" ATK:"<< ATK<<endl;
}

string Pokemon::getName(){
	return name;
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
