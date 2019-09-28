#pragma once
class Time
{
public:
	//Time();
	Time(int h=0, int m=0, int s=0);//default constructor 
	~Time();//destructor
	void setTime(int h, int m, int s);
	void printStandard();
	int getHour();//int& is the reference of corresponding variable
private:
	int hour;
	int minute;
	int second;
};