#include <iostream>
#include "newuser.h"

using namespace std;
using namespace newuser;

int main(void){
	string name, password;
	cout<<"Please enter your name :"<<endl;
	cin>>name;
	inputusername(name);
	cout<<"Please enter your password :"<<endl;
	cin>>password;
	if(password.length()<5){
		cout<<"Password must not less than 5 characters"<<endl;
		return 0;
	}	
	inputpassword(password);
	cout<<"Your account is : "<<getusername()<<endl;
	cout<<"Your password is : "<<getpassword()<<endl;
	return 0;
}
