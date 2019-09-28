#include "stdafx.h"
#include "complex.h"
#include <iostream>
using namespace std;
Complex operator+(float a, Complex c)
{
	Complex temp;
	temp.Real = a + c.Real;
	temp.Imag = c.Imag;
	return temp;
}
ostream &operator<<(ostream &output, Complex c)
{
	output << c.Real << " + " << c.Imag << " i" << endl;
	return output;
}
istream &operator >> (istream &input, Complex &c)
{
	cout << "Please enter the real part:"; 
	input >> c.Real;
	cout << "please enter the imaginery part:";
	input >> c.Imag;
	return input;
}

Complex::Complex(float r, float i)
{
	setReal(r);
	setImag(i);
}
Complex Complex::operator+(Complex c)
{
	Complex temp;
	temp.Real = Real + c.Real;
	temp.Imag = Imag + c.Imag;
	return temp;
}
Complex Complex::operator+(float c)
{
	Complex temp;
	temp.Real = Real + c;
	temp.Imag = Imag;
	return temp;
}
void Complex::setReal(float r)
{
	Real = r;
}
void Complex::setImag(float i)
{
	Imag = i;
}
float Complex::getReal()
{
	return Real;
}
float Complex::getImag()
{
	return Imag;
}
void Complex::print()
{
	cout << Real << " + i" << Imag << endl;
}