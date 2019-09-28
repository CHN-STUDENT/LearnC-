#pragma once
#include <string>
using namespace std;
#include "Date.h"

class person
{
public:
	person(string n="", int i=0, Date b=Date(2000,0,0) );
	void setID(int i);
	void setName(string n);
	void setBirthday(int y, int m, int d);
	void printPerson();
	Date getBirthday();
private:
	string name; //
	int ID;
	Date birthday;
};