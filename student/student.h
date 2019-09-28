#pragma once
#include "person.h"
#include <string>
using namespace std;

class Student: public Person
{
public:
	Student(string = "", int = 1111, int = 10623, string = "ª«Ápºô"); 
	~Student();
	void setStudentID(int);
	void setDepartment(string);
	int getStudentID();
	string getDepartment();
	virtual void print();
private:
	int StudentID;
	string Department;
};