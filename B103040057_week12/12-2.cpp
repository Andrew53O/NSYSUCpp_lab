#include<iostream>
#include<cstdlib>
#include "grass.h"

using namespace std;
using namespace Pokemon;

bool check(int a){
	if(a<0 || a>8)
		return false;
	return true;
}

fire charmander("Charmander", 10, 3), charmeleon("Charmeleon", 20, 7), charizard("Charizard", 40, 15);
water squirtle("Squirtle", 10,3), wartortle("Wartortle", 20, 7), blastoise("Blastoise", 40, 15);
grass bulbasaur("Bulbasaur", 10, 3), ivysaur("Ivysaur", 20, 7), venusaur("Venusaur", 40, 15);


fire* searchF(int a){
	switch(a){
		case 0:
			return &charmander;
		case 1:
			return &charmeleon;
		case 2:
			return &charizard;
	}
}

water* searchW(int a){
	switch(a){
		case 3:
			return &squirtle;
		case 4:
			return &wartortle;
		case 5:
			return &blastoise;
	}
}

grass* searchG(int a){
	switch(a){
		case 6:
			return &bulbasaur;
		case 7:
			return &ivysaur;
		case 8:
			return &venusaur;
	}
}

void attack(poke*a, poke*b){
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
	poke*A = NULL;
	poke*B = NULL;
	

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

int main(){
	charmander.status();
	charmeleon.status();
	charizard.status();
	squirtle.status();
	wartortle.status();
	blastoise.status();
	bulbasaur.status();
	ivysaur.status();
	venusaur.status();
	cout<<"\n";

	while(1){
		int a,b;
		cout<<"Please enter two pokemons number:"<<endl;
		cin>>a>>b;
		if(!check(a)){
			cout<<"Out of range\n";
			continue;
		}
		if(!check(b)){
			cout<<"Out of range\n";
			continue;
		}
		if(!fight(a,b)){
			cout<<"dead\n";
			exit(1);
		}
	}
	return 0;
}
