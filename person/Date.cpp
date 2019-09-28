//#include "stdafx.h"
#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int y, int m, int d)
{
	setDate(y, m, d);
}
void Date::setDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void Date::printDate()
{
	cout << year << "/" << month << "/" << day << endl;
}
int Date::getYear()
{
	return year;
}
Date Date::getDate()
{
	return *this;
}
