//Headers:complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class complex
{
	/*���ຯ������� operator<< �� operator>>
      �� operator+ | operator- | operator* | operator/��ӵ�ж� complex ��˽�г�Ա�ķ��� */
	friend complex operator+(float, complex);
	friend complex operator-(float, complex);
	friend complex operator*(float, complex);
	friend complex operator/(float, complex);
	friend std::ostream &operator<<(std::ostream &, complex);
	friend std::istream &operator>>(std::istream &, complex &);
private:
	float real;
	float imag;
public:
	//construtor does not have return type
	complex();
	complex(float,float);
	//Determine whether the objects are equal �ж϶����Ƿ����
	bool operator==(const complex &);
	complex operator+(complex);
	complex operator+(float);
	complex operator-(complex);
	complex operator-(float);
	complex operator*(complex);
	complex operator*(float);
	complex operator/(complex);
	complex operator/(float);
	void setComplex(float,float);
	float getReal();
	float getImag();
	float abs();
	void PrintComplex();
};//do not forget!

/*
	�ο���http://zh.cppreference.com/w/cpp/language/friend
	��Ԫ��������Ϊ��ĳ�Ա����
	operator<< �� operator >> �� operator + �� operator - �� operator * ��operator /
	������Ҫ��������Ϊ��ķǳ�Ա
*/
complex operator+(float, complex);
complex operator-(float, complex);
complex operator*(float, complex);
complex operator/(float, complex);
std::ostream &operator<<(std::ostream &, complex);
std::istream &operator>>(std::istream &, complex &); //INPUT��Ҫ�ı�ֵ����������ô���
//���������ҲҪ���ı䣬���������ô���



#endif
