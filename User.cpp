//User.cpp
#include "User.h"
#include <string>
User::User(std::string name, int ID){
	Username = name;
	UserID = ID;
}

void User::setName(std::string name){
	Username = name;
}

std::string User::getName(){
	return name;
}

void User::setID(int ID){
	UserID = ID;
}

int User::getID(){
	return ID;
}
