#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "Date.h"

class person
{
	private:
		std::string name;
		int id;
		Date birthday;
	public:
		person(std::string n="",int i=0,Date d=Date(2000,0,0));
		~person();
		void setName(std::string n);
		void setID(int i);
		void setBirthday(int y, int m, int d);
		void printPerson();
		std::string getName();
 		int getID();
		Date getBirthday();
        person getPerson();
};

#endif
