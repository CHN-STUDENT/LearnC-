// ConsoleApplication3.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "person.h"
#include "student.h"
#include <iostream>
using namespace std;


int main()
{
	Person peter("Peter", 1234);
	Student jone("Jone", 2345, 10625103, "bme");
	Person *ptr[10];

	ptr[0] = &peter;
	ptr[1] = &jone;

	for (int i = 0; i < 2; i++)
	   ptr[i]->print();


	//peter.print();
	//jone.print();
	//cout << jone.getStudentID() << endl;

	system("pause");
    return 0;
}

