#include <iostream>
#include "Person.h"
#include "Date.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	person p1;
	p1.printPerson();	
    p1.getBirthday().printDate(); 
	std::cout<<std::endl;
	
	person p2("test2",111,Date(2018,2,2));
	//person p2("t",111,(2018,2,2)); It is wrong! Do not use this!
	p2.printPerson();	
    p2.getBirthday().printDate(); 
    std::cout<<std::endl;
    
    p1.setName("test1");
    p1.setID(222);
	p1.setBirthday(2018,1,1);
	//person::setBirthday(int y,int m,int d);
	p1.printPerson(); 
	p1.getBirthday().printDate(); 
	std::cout<<std::endl;
    
	system("pause");
	return 0;
}
