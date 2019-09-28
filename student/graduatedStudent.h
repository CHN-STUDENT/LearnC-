#pragma once
#include <string>
using namespace std;

class graduatedStudent
{
public:
	graduatedStudent(string = "");
	~graduatedStudent();
	void setThesis(string s);
	string getThesis();
private:
	string Thesis;
};