#pragma once
#include "Shape.h"
class RTriangle :
	public Shape
{
public:
	RTriangle();
	RTriangle(int, int, int);
	void print();
	void calculate_area();

protected:
	int hypotenuse;
	int side1;
	int side2;
};

