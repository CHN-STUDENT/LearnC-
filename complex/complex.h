#ifndef COMPLEX_H
#define COMPLEX_H

class complex
{
	private:
		float real;
		float imag;
	public:
		//construtor does not have return type
		complex();
		complex(float,float);
		void setComplex(float,float);
		float getReal();
		float getImag();
		float abs();
		void PrintComplex();
};//do not forget!


#endif
