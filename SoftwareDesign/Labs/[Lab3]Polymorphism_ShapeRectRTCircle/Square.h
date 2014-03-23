#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
using namespace std;
#include "Shape.h"

class Square :
	public Shape
{
public:
	Square(double, double, double);
	virtual double area();
	virtual void resize(double, double);
	virtual void print();

	virtual double getPositionX();
	virtual double getPositionY();
	
	virtual double getWidth();
	virtual double getHeight();

private:
	double side;
};

#endif