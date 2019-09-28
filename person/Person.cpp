#include "Person.h"

person::person(std::string n,int i,Date d)
{
	name=n;
	id=i;
	birthday=d;
}

void person::setBirthday(int y,int m,int d)
{
	birthday.setDate(y,m,d);
}


person::~person()
{
	
}

void person::setName(std::string n)
{
	name=n;
}
void person::setID(int i)
{
	id=i;
}


void person::printPerson()
{
	std::cout<<"Name: "<<name<<",ID: "<<id<<std::endl;
	std::cout<<"Birthday: ";
	birthday.printDate();
}

std::string person::getName()
{
	return name;
}

int person::getID()
{
	return id;
}
		
Date person::getBirthday()
{
	return birthday;
}

person person::getPerson()
{
	return *this;
}
