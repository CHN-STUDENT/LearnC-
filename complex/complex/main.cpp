//Sources:main.cpp
#include <iostream>
#include "complex.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	complex complex1;
	complex complex2(-2.0,1.6);
	complex1.PrintComplex();
	complex2.PrintComplex();
	complex1.setComplex(2.0,-1.8);
	complex1.PrintComplex();
	complex2.PrintComplex();
	complex complex3;
	complex3.setComplex(6.6,8.8);
	float real=complex3.getReal();
	float imag=complex3.getImag();
	float abs=complex3.abs();

	std::cout<<"The complex is ("<<real<<") + ("<<imag<<") i"<<std::endl;
	std::cout<<"The complex 's real is "<<real<<" ,its imag is "<<imag<<std::endl;
	std::cout<<"The complex 's abs is "<<abs<<std::endl;

	complex complex4(-9.9,8.8);
	complex complex5(8.8,-9.9);
	complex complex6;
	complex6.setComplex(-9.9,8.8);

	std::cout<<std::boolalpha <<" "<<(complex3==complex4)<<" "<<(complex4==complex4)<<" "<<(complex4==complex5)<<" "<<(complex4==complex6)<<" "<<std::endl;

	complex complex7=complex4+complex5;
	complex7.PrintComplex();
	complex complex8=complex4-complex5;
	complex8.PrintComplex();
	complex complex9=complex4*complex5;
	complex9.PrintComplex();
	complex complex10=complex4/complex5;
	complex10.PrintComplex();

	system("pause");
	return 0;
}
