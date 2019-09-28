#pragma once
#include <iostream>
using namespace std;


class Complex
{
	friend Complex operator+(float, Complex);
	friend ostream &operator<<(ostream &, Complex);
	friend istream &operator >> (istream &, Complex &);

public:
	Complex(float = 0.0, float = 0.0);

	Complex operator+(Complex);
	Complex operator+(float);
	
	void setReal(float);
	void setImag(float);
	float getReal();
	float getImag();
	void print();
private:
	float Real;
	float Imag;
};
Complex operator+(float, Complex);
ostream &operator<<(ostream &, Complex);
istream &operator >> (istream &, Complex &);

