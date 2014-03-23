// Rectangle.h
// Contains the declaration (but not the definition!) of the Rectangle class,
// which inherits from the Shape class.

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "Shape.h"
using namespace std;
class Rectangle : public Shape
{
public:
	Rectangle(double, double, double, double);

	// I've overridden the area() method here, just like I did in Circle.
	virtual double area();
	// add the remaining virtual methods
	virtual double getWidth();
	virtual double getHeight();
	virtual void resize(double, double);
	virtual void print();

	virtual double getPositionX();
	virtual double getPositionY();

private:
	double positionX;
	double positionY;
	double width;
	double height;
};

#endif // RECTANGLE_H

