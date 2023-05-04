#include<iostream>
#include "grass.h"

using namespace std;
using namespace Pokemon;

int main(){
	fire charmander("Charmander", 10, 3), charmeleon("Charmeleon", 20, 7), charizard("Charizard", 40, 15);
	charmander.status();
	charmeleon.status();
	charizard.status();
	
	water squirtle("Squirtle", 10,3), wartortle("Wartortle", 20, 7), blastoise("Blastoise", 40, 15);
	squirtle.status();
	wartortle.status();
	blastoise.status();

	grass bulbasaur("Bulbasaur", 10, 3), ivysaur("Ivysaur", 20, 7), venusaur("Venusaur", 40, 15);
	bulbasaur.status();
	ivysaur.status();
	venusaur.status();
	return 0;
}
