#include "newuser.h"

using namespace newuser;


string username;
string password;
namespace newuser{
	void inputusername(string un){
		username = un;
	}
	void inputpassword(string pass){
		password = pass;
	}
	string getusername(){
		return username;
	}
	string getpassword(){
		return password;

	}
}
