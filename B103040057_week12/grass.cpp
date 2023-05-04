#include<iostream>
#include "grass.h"

using namespace std;

namespace Pokemon{
	grass::grass(string name, int hp, int atk){
		Name=name;
		Type="grass";
		HP=hp;
		ATK=atk;
	}
}
