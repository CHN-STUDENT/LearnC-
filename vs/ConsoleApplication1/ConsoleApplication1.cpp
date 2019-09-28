// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

//using namespace std;
//关键字 
//语法

/***********************

UML表

-------------------
      类别名
-------------------
      属性
-------------------
	  操作
 +返回值 函数名（名称：类型）
—————————

***********************/

class GradeBook
{
public:
	GradeBook()
	{
		courseName = "Nothing";
	}
	GradeBook(std::string name)
	{//构造函数 constructor
		courseName = name;
	}
	// 返回值 函数名（形参表）
	void displayMessage(std::string name)
	{
		std::cout << "Welcome to "<<name<<std::endl;
		std::cout << "the name is " << courseName << std::endl;
	}
	void displayMessage()
	{
		std::cout << "the name is " << courseName << std::endl;
	}
	void setCourseName(std::string name)
	{
		courseName = name;
	}
	std::string getCourseName()
	{
		return courseName;
	}
private:
	std::string courseName;

//仅能在该类中使用

//protected:


};


int main()
{
	GradeBook MyBook1;
	MyBook1.setCourseName("No.1");
	MyBook1.displayMessage();
	//MyBook1.displayMessage("MyBook1");
	std::cout << MyBook1.getCourseName() << std::endl;
	std::string temp = MyBook1.getCourseName();
	std::cout << temp << std::endl;
	GradeBook MyBook2("hello");
	MyBook2.displayMessage();
	MyBook2.setCourseName("No.2");
	//MyBook2.displayMessage("MyBook2");
	system("pause");
	return 0;
}

