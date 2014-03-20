
#include "complexNumber.h"


complexNumber::complexNumber()
{
	real = 0.0;
	imag = 0.0;
}
complexNumber::complexNumber(double real1, double imag1)
{
	real = real1;
	imag = imag1;
}

double complexNumber::getRealPart()
{
	return real;
}
double complexNumber::getImagPart()
{
	return imag;
}
void complexNumber::setReal(double iReal)
{
	real = iReal;
}
void complexNumber::setImag(double iNum)
{
	imag = iNum;
}
complexNumber complexNumber::addComplex(complexNumber object)
{
	complexNumber temp;
	temp.real = real+ object.real;
	temp.imag = imag + object.imag;
	return temp;
}
complexNumber complexNumber::substractComplex(complexNumber object)
{
	complexNumber temp;
	temp.real = real - object.real;
	temp.imag = imag - object.imag;
	return temp;
}
complexNumber complexNumber::multiplyComplex(complexNumber object)
{
 
	//(5 + 3i) * (4+6i)
	
	complexNumber temp;
	temp.real = real*object.real - imag * object.imag;
	temp.imag = real*object.imag + imag*object.real;

	//temp.imag = imag*object.real + imag*object.imag;
	return temp;
}
complexNumber complexNumber::divisionComplex(complexNumber object)
{
	//(5+3i) + (4 + 6i)
	// (a,b)/(c,d)=((ac+bd)/(c^2+d^2),(bc-ad)/(c^2+d^2))
	complexNumber temp;
	temp.real = (real * object.real + imag*object.imag) / (pow(object.real,2) + pow(object.imag,2));
	temp.imag = (imag*object.real - real*object.imag) / (pow(object.real, 2) + pow(object.imag, 2));
	return temp;
}
void complexNumber::print()
{
	cout << "(" << real << " + " << imag << "i)";
}

