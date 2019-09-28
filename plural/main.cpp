#include <iostream>
#include "plural.h"
#include <fstream>
 
using namespace std;

int main(int argc, char** argv) 
{
	Plural_Calc calc;
	double c,d;
	double anger,length;
	ofstream f;
	f.open("data.txt");
	for(int i=0;i<=2000;i++)
	{
		double data=0.0025*i;
		calc.Plural_Calc_Div(1,0,1,data,&c,&d);
		anger=calc.Plural_Calc_Angle(c,d);
		length=calc.Plural_Calc_Length(c,d);
		//cout<<length<<endl;
		f << i << "\t"<<length<< "\t"<<anger<<"\n"<<endl;
	}
	f.close();
	return 0;
}
