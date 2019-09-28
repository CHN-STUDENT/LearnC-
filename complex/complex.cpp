#include "complex.h"
#include <iostream>
#include <cmath>

float complex::abs()
{
	return sqrt(real*real+imag*imag);
}

complex::complex()
{
	real=0.0;
	imag=0.0;
}

complex::complex(float r,float i)
{
	real=r;
	imag=i;
}

void complex::PrintComplex()
{
	std::cout<<"The complex is "<<real<<" + "<<imag<<"i"<<std::endl;
	std::cout<<"The complex 's real is "<<real<<" ,its imag is "<<imag<<std::endl; 
}

void complex::setComplex(float r,float i)
{
	real=r;
	imag=i;
}

float complex::getImag()
{
	return imag;
}

float complex::getReal()
{
	return real;
}

