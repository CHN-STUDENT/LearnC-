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
	
	std::cout<<"The complex is "<<real<<" + "<<imag<<"i"<<std::endl;
	std::cout<<"The complex 's real is "<<real<<" ,its imag is "<<imag<<std::endl;
	std::cout<<"The complex 's abs is "<<abs<<std::endl; 
	
	system("pause"); 
	return 0;
}
