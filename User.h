//User.h

#ifndef USER_H
#define USER_H
#include <string>
class User {

private:
std::string Username;
int UserID;

public:
	User();
	void setName(std::string name);
	std::string getName();
	void setID(int ID);
	int getID();
};
#endif
