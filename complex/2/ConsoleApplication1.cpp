// ConsoleApplication1.cpp : 
//

#include "stdafx.h"
#include "complex.h"
#include <iostream>
using namespace std;


int main()
{
	Complex a;
	Complex b(1.2, 3.6);
	Complex c(6.3, 8.1);

	a = b + c;
	//a = b.operator+(c);
	a.print();
	a = b + 3.9; //b.operator(3.9)
	a.print();
	a = 3.9 + b;  //operator(3.9, b)

	cout << a << b;  //cout.operator<<(a), operator<<(cout, a)
	cin >> a;
	cout << a;

	system("pause");
	return 0;
}

