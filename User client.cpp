#include <iostream>
#include <string>
#include "User.h"
#include <vector>
using namespace std;

int main(){
	string name;
	int ID;
	User Info1;
	User Info2;
	User Info3;
	User Info4;
	vector<User> UserInfo;
	
	cout << "Enter Username";
	getline(cin, name);
	cout << "Enter identification number";
	cin >> ID;

	Info1.setName(name);
	Info1.setID(ID);
	UserInfo.push_back(Info1);

	cout << "Enter Username";
	getline(cin, name);	
	cout << "Enter identification number";
	cin >> ID;

	Info2.setName(name);
	Info2.setID(ID);
	UserInfo.push_back(Info2);

	cout << "Enter Username";
	getline(cin, name);
	cout << "Enter identification number";
	cin >> ID;

	Info3.setName(name);
	Info3.setID(ID);
	UserInfo.push_back(Info3);

	cout << "Enter Username";
	getline(cin, name);
	cout << "Enter identification number";
	cin >> ID;

;	Info4.setName(name);
	Info4.setID(ID);
	UserInfo.push_back(Info4);

	for(int i=0; UserInfo.size(); i++){
	cout << "Person" << i << "\nname is" << UserInfo[i].getName() << " \n and ID number is" << UserInfo[i].getID() << endl;
	}
}

	
