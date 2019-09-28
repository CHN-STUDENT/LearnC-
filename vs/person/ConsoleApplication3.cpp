// ConsoleApplication3.cpp : ﹚竡北莱ノ祘Α秈翴
//

#include "stdafx.h"
#include "Time.h"
#include "Date.h"
#include "Person.h"

#include <iostream>
using namespace std;

int main()
{

	person p3("test", 666);
	p3.printPerson();
	cout << endl;

	person p4("test2", 777,Date(2018,6,6));
	p4.printPerson();
	cout << endl;

	person p5("test3", 777,(2018, 7, 7));
	p5.printPerson();
	cout << endl;


	person p2;
	Date d(2000, 5, 17);
	Date d1;
	//d.printDate();
	p2.printPerson();

	person p1("Jone", 12345, d);
	p1.printPerson();
	//d1 = p1.getBirthday();
	p1.getBirthday().printDate();



/*	Time t1; //constructor is execued automatically
	int h, m, s;
	h = 15;
	m = 25;
	s = 65;
	Time t2(h, m, s);
	{
		Time t3(8, 10);//

		t2.printStandard();
		t3.printStandard();
	}


	t1.printStandard();

	t1.setTime(s, h, m);
	t1.printStandard();
	cout << s << endl;
	s = t1.getHour();
	s = 11;
	t1.printStandard();
*/
	system("pause");
    return 0;
}

