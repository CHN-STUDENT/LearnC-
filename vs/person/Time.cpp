#include "stdafx.h"
#include <iostream>
#include <iomanip>  //for setw()
using namespace std;
#include "Time.h"
/*
Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}*/
Time::Time(int h, int m, int s)
{
	setTime(h, m, s);
}
Time::~Time()
{

}
void Time::setTime(int h, int m, int s)
{
	hour = (h>=0 && h<24)?h:h%24; //%為餘數的運算
	minute = (m>=0 && m < 60)?m:m%60;
	second = (s>=0 && s < 60)?s:s%60;
}
void Time::printStandard()
{
	cout << setw(2)<< hour%12 << ":" << setw(2) << minute 
		<<":" << setw(2) << second 
		<< ((hour <12)? " AM": " PM") << endl;
}
int Time::getHour()
{
	return hour;
}
