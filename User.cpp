//User.cpp
#include "User.h"
#include <string>
using namespace std;
User::User(){
	Username = "placeholder";
	UserID = -1;
	
}

void User::setName(string name){
	Username = name;
}

string User::getName(){
	return Username;
}

void User::setID(int ID){
	UserID = ID;
}

int User::getID(){
	return UserID;
}
