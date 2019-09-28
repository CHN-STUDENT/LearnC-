#include <iostream>
#include <fstream>
#include "plural.h"
#include <cmath>

using namespace std; 
 
void Plural_Calc::Plural_Calc_Plus(double a,double b,double c,double d,double * x,double *y)
{
	//(a+bi)+(c+di)=(a+c)+(b+d)i 
	* x = a + c;
	* y = b + d; 
};

void Plural_Calc::Plural_Calc_Sub(double a,double b,double c,double d,double * x,double *y)
{
	//(a-bi)+(c-di)=(a-c)+(b-d)i 
	* x = a - c;
	* y = b - d; 
};


void Plural_Calc::Plural_Calc_Mul(double a,double b,double c,double d,double * x,double *y)
{	
	//(a+bi)(c+di)=(ac-bd)+(bc+ad)i
	* x = a * c - b * d;
	* y = b * c + a * d; 	
};

void Plural_Calc::Plural_Calc_Div(double a,double b,double c,double d,double * x,double *y)
{	
	//(a+bi)/(c+di)=((ac+bd)/c^2+d^2))+((bc-ad)/c^2+d^2)i
	* x = (a * c + b * d)/(c * c + d * d);
	* y = (b * c - a * d)/(c * c + d * d); 	
};

double Plural_Calc::Plural_Calc_Angle(double a,double b)
{
	//atan返回的是弧度，要转成角度。 
	return 180*atan(b/a)/3.1415926;	
};

double Plural_Calc::Plural_Calc_Length(double a,double b)
{
	return sqrt(a * a + b * b); 
}

//void Save_to_File(double *a,double* b,double *c)
//{
//	ofstream s;
//	s.open("data.txt",ios::app|ios::out); 
//	s.close();
//}

