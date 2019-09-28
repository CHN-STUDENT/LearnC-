#pragma once
#include "human.h"
#include <string>
using namespace std;

class Person: public Human
{
public:
	Person(string = "", int = 0);
	~Person();
	void setName(string);
	void setID(int);
	string getName();
	int getID();
	virtual void print();
private:
	string Name;
	int ID;
	//Date Birthday;
	//string Address;
};