//Headers:complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class complex
{
	/*非类函数运算符 operator<< 和 operator>>
      及 operator+ | operator- | operator* | operator/将拥有对 complex 的私有成员的访问 */
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
	//Determine whether the objects are equal 判断对象是否相等
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
	参考：http://zh.cppreference.com/w/cpp/language/friend
	友元声明不作为类的成员函数
	operator<< 和 operator >> 及 operator + ， operator - ， operator * ，operator /
	但仍需要声明，作为类的非成员
*/
complex operator+(float, complex);
complex operator-(float, complex);
complex operator*(float, complex);
complex operator/(float, complex);
std::ostream &operator<<(std::ostream &, complex);
std::istream &operator>>(std::istream &, complex &); //INPUT需要改变值，因此是引用传递
//输入输出流也要被改变，所以是引用传递



#endif
