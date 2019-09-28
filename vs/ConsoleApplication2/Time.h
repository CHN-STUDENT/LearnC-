#pragma once
#ifndef TIME_H
#define TIME_H

class Time
{
public:
	//Time();
	~Time();//destructor
	Time(int h=0, int m=0, int s=0); //default constructor
	void setTime(int h=0,int m=0,int s=0);
	void PrintStandard();
	int getHour(); //int& is the reference of correspondis
private:
	int hour;
	int minute;
	int second;
	
};

#endif
