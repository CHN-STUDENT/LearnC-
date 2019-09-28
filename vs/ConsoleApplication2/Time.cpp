#include "stdafx.h" 
//一定把这个放在第一行 而且每个文件都要加
#include "Time.h"
#include <iostream>
#include <iomanip>

/*Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}*/

Time::~Time()
{

}

int Time::getHour()
{
	return hour;
}

void Time::setTime(int h, int m, int s)
{
	hour = (h >= 0 && h < 24) ? h : h % 24; //%余数的运算
	minute = (m >= 0 && m < 60)? m : m % 60;
	second = (s >= 0 && s < 60) ? s : s % 60;
}

void Time::PrintStandard()
{
	std::cout <<std::setw(2) << hour%12 << ":" << std::setw(2) <<minute << ":" << std::setw(2) <<second <<((hour<12)? " AM":" PM")<<std::endl;
}


Time::Time(int h, int m,int s)
{
	setTime(h, m, s);
}
