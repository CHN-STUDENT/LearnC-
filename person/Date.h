//#pragma once

#ifndef DATE_H
#define DATE_H
 
class Date
{
public:
	Date(int y = 2000, int m = 1, int d = 1);
	void setDate(int y, int m, int d);
	void printDate();
	int getYear();
	Date getDate();
private:
	int year;
	int month;
	int day;
};

#endif
