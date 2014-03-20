#pragma once
#include <iostream>
using namespace std;
class complexNumber
{
public:
	complexNumber();
	complexNumber(double, double);
	double getRealPart(void);
	double getImagPart(void);
	void setReal(double);
	void setImag(double);
	complexNumber addComplex(complexNumber);
	complexNumber substractComplex(complexNumber);
	complexNumber multiplyComplex(complexNumber);
	complexNumber divisionComplex(complexNumber object);
	void print();
private:
	double real;
	double imag;
};


