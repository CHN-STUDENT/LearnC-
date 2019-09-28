#include "stdafx.h"
#include "person.h"
#include <iostream>
using namespace std;

Person::Person(string n, int i)
{
	setName(n);
	setID(i);
}
Person::~Person()
{

}
void Person::setName(string n)
{
	Name = n;
}
void Person::setID(int i)
{
	ID = i;
}
string Person::getName()
{
	return Name;
}
int Person::getID()
{
	return ID;
}
void Person::print()
{
	cout << "Name: " << Name << endl;
	cout << "ID:   " << ID << endl;
}