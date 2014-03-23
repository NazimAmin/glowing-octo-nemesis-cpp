#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <iostream>
using namespace std;

class Circle : public Shape
{
public:

	Circle(double, double, double);
	virtual double area();
	virtual double getRadius();
	virtual void resize(double radius, double);
	// add the remaining virtual methods
	virtual void print();
	virtual double getPositionX();
	virtual double getPositionY();
	virtual double getWidth();
	virtual double getHeight();
private:
	double radius;
};
#endif