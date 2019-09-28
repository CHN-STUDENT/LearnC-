#include "stdafx.h"
#include "person.h"
#include "student.h"
#include <iostream>
using namespace std;

Student::Student(string n, int i, int si, string d)
	:Person(n, i)
{
	//setName(n);
	//setID(i);
	setStudentID(si);
	setDepartment(d);
}
Student::~Student()
{

}
void Student::setStudentID(int i)
{
	StudentID = i;
}
void Student::setDepartment(string d)
{
	Department = d;
}
int Student::getStudentID()
{
	return StudentID;
}
string Student::getDepartment()
{
	return Department;
}

void Student::print()
{
	Person::print();
	//cout << "Name: " << getName() << endl;
	//cout << "ID:   " << getID() << endl;
	cout << "" << StudentID << endl;
	cout << "" << Department << endl;
}