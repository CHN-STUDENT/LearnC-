// ConsoleApplication2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Time.h"
#include <iostream>

int main()
{
	Time t1; // constructor is execued automatically
	
	int h, m, s;
	h = 20;
	m = 18;
	s = 9;

	t1.PrintStandard();
	t1.setTime(s, h, m);
	t1.PrintStandard();

	Time t2(s, h, m);
	{
		t2.PrintStandard();
		Time t3(8, 10);
		t3.PrintStandard();
	}

	int s;
	s = t1.getHour();
	
	
	system("pause");

    return 0;
}

