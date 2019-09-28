//Sources:complex.cpp
#include "complex.h"
#include <iostream>
#include <cmath>

bool complex::operator==(const complex & other)
{
/*
	一般我们比较两个对象是否相等
	会比较对象里的所有变量是否相等
	若相等则认为两个对象相等
	布尔值是c++关键字
*/
	return ( (real==other.real) && (imag==other.imag) );
}

complex operator+(float a, complex c)
{
/*
	这是非类里的函数，不需要类解析符
	但是访问类里私有变量因此要在类里加友元并声明
	重载了加号+运算符
	complex a=(float)c+(complex)b
	相当于 a = c.operator+(b);
	对一个复数实部进行加运算，虚部不变
*/
	complex temp;
	temp.real = a + c.real;
	temp.imag = c.imag;
	return temp;
}

complex operator-(float a, complex c)
{
/*
	这是非类里的函数，不需要类解析符
	但是访问类里私有变量因此要在类里加友元并声明
	重载了减号-运算符
	complex a=(float)c-(complex)b
	相当于 a = c.operator-(b);
	对一个复数实部进行减运算，虚部不变
*/
	complex temp;
	temp.real = a - c.real;
	temp.imag = c.imag;
	return temp;
}

complex operator*(float a, complex c)
{
/*
	这是非类里的函数，不需要类解析符
	但是访问类里私有变量因此要在类里加友元并声明
	重载了乘号*运算符
	complex a=(float)c*(complex)b
	相当于 a = c.operator*(b);
	对一个复数实部进行乘运算，虚部和实部分别相乘
*/
	complex temp;
	temp.real = a * c.real;
	temp.imag = a * c.imag;
	return temp;
}

complex operator/(float a, complex c)
{
/*
	这是非类里的函数，不需要类解析符
	但是访问类里私有变量因此要在类里加友元并声明
	重载了除号/运算符
	complex a=(float)c/(complex)b
	相当于 a = c.operator/(b);
	对一个复数实部进行除运算，虚部和实部分别相除
*/
	if(c.real==0&&c.imag==0)
	{
		std::cout<<"Input Error!"<<std::endl;
	}
	else
	{
		complex temp;
		temp.real = a / c.real;
		temp.imag = a / c.imag;
		return temp;
	}
}


std::ostream &operator<<(std::ostream &output, complex c)
{
/*
	重载了重定向<<运算符
	重定向到标准输出流，由于要改变值，所以做引用传递
*/
	output<<"The complex is "<<c.real<<" + "<<c.imag<<"i"<<std::endl;
	output<<"The complex 's real part is "<<c.real<<" ,its imag part is "<<c.imag<<std::endl;
	return output;
}
std::istream &operator>>(std::istream &input, complex &c)
{
/*
	重载了重定向>>运算符
	重定向到标准输入流，由于要改变值，所以做引用传递
*/
	std::cout << "Please enter the real part:";
	input >> c.real;
	std::cout << "please enter the imaginery part:";
	input >> c.imag;
	return input;
}

complex complex::operator+(complex c)
{
/*
	重载了加号+运算符
	complex a=(complex)b+(complex)c
	相当于 a = b.operator+(c);
	对两个复数进行加运算
*/
	complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}
complex complex::operator+(float c)
{
/*
	重载了加号+运算符
	complex a=(complex)b+(float)c
	相当于 a = b.operator+(c);
	对一个复数实部进行加运算，虚部不变
*/
	complex temp;
	temp.real = real + c;
	temp.imag = imag;
	return temp;
}


complex complex::operator-(complex c)
{
/*
	重载了减号-运算符
	complex a=(complex)b-(complex)c
	相当于 a = b.operator-(c);
	对两个复数进行减运算
*/
	complex temp;
	temp.real = real - c.real;
	temp.imag = imag - c.imag;
	return temp;
}
complex complex::operator-(float c)
{
/*
	重载了减号-运算符
	complex a=(complex)b-(float)c
	相当于 a = b.operator-(c);
	对一个复数实部进行减运算，虚部不变
*/
	complex temp;
	temp.real = real - c;
	temp.imag = imag;
	return temp;
}

complex complex::operator*(complex c)
{
/*
	重载了乘号*运算符
	complex a=(complex)b*(complex)c
	相当于 a = b.operator*(c);
	对两个复数进行乘运算
	（a＋bi）*（c＋di）＝（ac－bd）＋（bc＋ad）i,
	a=real;
	b=imag;
	c=c.real;
	d=c.imag;
	temp.real=(real*c.real-imag*c.imag)
	temp.imag=(imag*c.real-real*c.imag)
*/
	if(c.real==0&&c.imag==0)
	{
		std::cout<<"Input Error!"<<std::endl;
	}
	else
	{
		complex temp;
		temp.real = (real*c.real-imag*c.imag);
		temp.imag = (imag*c.real-real*c.imag);
		return temp;
	}
}
complex complex::operator*(float c)
{
/*
	重载了乘号*运算符
	complex a=(complex)b*(float)c
	相当于 a = b.operator*(c);
	对一个复数实部进行乘运算，虚部和实部分别相乘
*/
	complex temp;
	temp.real = real * c;
	temp.imag = imag * c;
	return temp;
}

complex complex::operator/(complex c)
{
/*
	重载了除号/运算符
	complex a=(complex)b/(complex)c
	相当于 a = b.operator/(c);
	对两个复数进行/运算
	（a＋bi）/（c＋di）＝（（ac+bd）/（c^2+d^2））＋（（bc－ad）/（c^2+d^2））i,
	a=real;
	b=imag;
	c=c.real;
	d=c.imag;
	temp.real=(real*c.real-imag*c.imag)/(c.real*c.real+c.imag*c.imag);
	temp.imag=(imag*c.real-real*c.imag)/(c.real*c.real+c.imag*c.imag);
*/
	if(c.real==0&&c.imag==0)
	{
		std::cout<<"Input Error!"<<std::endl;
	}
	else
	{
		complex temp;
		temp.real = (real*c.real-imag*c.imag)/(c.real*c.real+c.imag*c.imag);
		temp.imag = (imag*c.real-real*c.imag)/(c.real*c.real+c.imag*c.imag);
		return temp;
	}
}
complex complex::operator/(float c)
{
/*
	重载了减号/运算符
	complex a=(complex)b/(float)c
	相当于 a = b.operator/(c);
	对一个复数实部进行除运算，虚部和实部分别相除
*/
	if(c==0)
	{
		std::cout<<"Input Error!"<<std::endl;
	}
	else
	{
		complex temp;
		temp.real = real / c;
		temp.imag = imag / c;
		return temp;
	}
}

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
	std::cout<<"The complex is ("<<real<<") + ("<<imag<<") i"<<std::endl;
	std::cout<<"The complex 's real part is "<<real<<" ,its imag part is "<<imag<<std::endl;
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

