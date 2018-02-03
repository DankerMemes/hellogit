//User.h

#ifndef USER_H
#define USER_H

class User {

private:
std::string Username;
int UserID;

public:
	User (std::string name, int ID);
	void setName(std::string name);
	std::string getName();
	void setID(int ID);
	int getID();
};
#endif
