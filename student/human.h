#pragma once

#include <string>
using namespace std;

class Human  // 抽象類 不能建構對象
{
public:
	Human();
	virtual void print() = 0;//pure virtual 
private:
	string jender;
};