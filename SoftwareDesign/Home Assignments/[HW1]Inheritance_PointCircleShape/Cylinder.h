#pragma once
#include "Circle.h"
class Cylinder :
	public Circle
{
public:
	Cylinder();								//default constructor
	Cylinder(int, int, double, double);		//paramarized constructor for [x, y, radius, height]
	void setHeight(double);					//sets the value of height
	double getHeight() const;				//returns the value of height
	double area();							//calculates the area of the cylinder
	void print()const;						//prints x, y, radius & height of cylinder
	double volume();						//calculates the volume of cylinder
	bool equal(Cylinder&);					//checks if current object height & radius equal to other
private:
	double height;
};
