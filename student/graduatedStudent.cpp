#include "stdafx.h"
#include "graduatedStudent.h"
#include <iostream>
#include <string>
using namespace std;
graduatedStudent::graduatedStudent(string s)
{
	setThesis(s);
}
graduatedStudent::~graduatedStudent()
{

}
void graduatedStudent::setThesis(string s)
{
	Thesis = s;
}
string graduatedStudent::getThesis()
{
	return Thesis;
}
