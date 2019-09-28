#include "stdafx.h"
#include "Person.h"
#include <iostream>
using namespace std;

person::person(string n, int i, Date d)
{
	name = n;
	ID = i;
	birthday = d;
}
void person::setName(string n)
{
	name = n;
}
void person::setID(int i)
{
	ID = i;
}
void person::setBirthday(int y, int m, int d)
{
	birthday.setDate(y, m, d);
}
void person::printPerson()
{
	cout << "name: " << name << endl;
	cout << "ID: " << ID << endl;
	cout << "birthday: ";
	birthday.printDate();
}
Date person::getBirthday()
{
	return birthday;
}