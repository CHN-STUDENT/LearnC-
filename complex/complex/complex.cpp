//Sources:complex.cpp
#include "complex.h"
#include <iostream>
#include <cmath>

bool complex::operator==(const complex & other)
{
/*
	һ�����ǱȽ����������Ƿ����
	��Ƚ϶���������б����Ƿ����
	���������Ϊ�����������
	����ֵ��c++�ؼ���
*/
	return ( (real==other.real) && (imag==other.imag) );
}

complex operator+(float a, complex c)
{
/*
	���Ƿ�����ĺ���������Ҫ�������
	���Ƿ�������˽�б������Ҫ���������Ԫ������
	�����˼Ӻ�+�����
	complex a=(float)c+(complex)b
	�൱�� a = c.operator+(b);
	��һ������ʵ�����м����㣬�鲿����
*/
	complex temp;
	temp.real = a + c.real;
	temp.imag = c.imag;
	return temp;
}

complex operator-(float a, complex c)
{
/*
	���Ƿ�����ĺ���������Ҫ�������
	���Ƿ�������˽�б������Ҫ���������Ԫ������
	�����˼���-�����
	complex a=(float)c-(complex)b
	�൱�� a = c.operator-(b);
	��һ������ʵ�����м����㣬�鲿����
*/
	complex temp;
	temp.real = a - c.real;
	temp.imag = c.imag;
	return temp;
}

complex operator*(float a, complex c)
{
/*
	���Ƿ�����ĺ���������Ҫ�������
	���Ƿ�������˽�б������Ҫ���������Ԫ������
	�����˳˺�*�����
	complex a=(float)c*(complex)b
	�൱�� a = c.operator*(b);
	��һ������ʵ�����г����㣬�鲿��ʵ���ֱ����
*/
	complex temp;
	temp.real = a * c.real;
	temp.imag = a * c.imag;
	return temp;
}

complex operator/(float a, complex c)
{
/*
	���Ƿ�����ĺ���������Ҫ�������
	���Ƿ�������˽�б������Ҫ���������Ԫ������
	�����˳���/�����
	complex a=(float)c/(complex)b
	�൱�� a = c.operator/(b);
	��һ������ʵ�����г����㣬�鲿��ʵ���ֱ����
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
	�������ض���<<�����
	�ض��򵽱�׼�����������Ҫ�ı�ֵ�����������ô���
*/
	output<<"The complex is "<<c.real<<" + "<<c.imag<<"i"<<std::endl;
	output<<"The complex 's real part is "<<c.real<<" ,its imag part is "<<c.imag<<std::endl;
	return output;
}
std::istream &operator>>(std::istream &input, complex &c)
{
/*
	�������ض���>>�����
	�ض��򵽱�׼������������Ҫ�ı�ֵ�����������ô���
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
	�����˼Ӻ�+�����
	complex a=(complex)b+(complex)c
	�൱�� a = b.operator+(c);
	�������������м�����
*/
	complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}
complex complex::operator+(float c)
{
/*
	�����˼Ӻ�+�����
	complex a=(complex)b+(float)c
	�൱�� a = b.operator+(c);
	��һ������ʵ�����м����㣬�鲿����
*/
	complex temp;
	temp.real = real + c;
	temp.imag = imag;
	return temp;
}


complex complex::operator-(complex c)
{
/*
	�����˼���-�����
	complex a=(complex)b-(complex)c
	�൱�� a = b.operator-(c);
	�������������м�����
*/
	complex temp;
	temp.real = real - c.real;
	temp.imag = imag - c.imag;
	return temp;
}
complex complex::operator-(float c)
{
/*
	�����˼���-�����
	complex a=(complex)b-(float)c
	�൱�� a = b.operator-(c);
	��һ������ʵ�����м����㣬�鲿����
*/
	complex temp;
	temp.real = real - c;
	temp.imag = imag;
	return temp;
}

complex complex::operator*(complex c)
{
/*
	�����˳˺�*�����
	complex a=(complex)b*(complex)c
	�൱�� a = b.operator*(c);
	�������������г�����
	��a��bi��*��c��di������ac��bd������bc��ad��i,
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
	�����˳˺�*�����
	complex a=(complex)b*(float)c
	�൱�� a = b.operator*(c);
	��һ������ʵ�����г����㣬�鲿��ʵ���ֱ����
*/
	complex temp;
	temp.real = real * c;
	temp.imag = imag * c;
	return temp;
}

complex complex::operator/(complex c)
{
/*
	�����˳���/�����
	complex a=(complex)b/(complex)c
	�൱�� a = b.operator/(c);
	��������������/����
	��a��bi��/��c��di��������ac+bd��/��c^2+d^2����������bc��ad��/��c^2+d^2����i,
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
	�����˼���/�����
	complex a=(complex)b/(float)c
	�൱�� a = b.operator/(c);
	��һ������ʵ�����г����㣬�鲿��ʵ���ֱ����
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

