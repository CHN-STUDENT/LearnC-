#pragma once

#include <string>
using namespace std;

class Human  // ��H�� ����غc��H
{
public:
	Human();
	virtual void print() = 0;//pure virtual 
private:
	string jender;
};