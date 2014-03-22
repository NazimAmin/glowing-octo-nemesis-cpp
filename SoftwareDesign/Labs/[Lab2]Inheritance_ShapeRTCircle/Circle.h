#pragma once
#include "Point.h"
#include "Shape.h"
class Circle :public Shape
{
public:
	Circle();
	Circle(const Point&, double);
	void calculate_area();
	void print();
protected:
	double radius;
	Point center;
};

