#pragma once
#include "Point2D.h"
class Circle :
	public Point2D
{
public:
	Circle();								//default constructor
	Circle(int, int, double);				//paramarized constructor for x, y, radius
	void setRadius(double);					//sets the value of radius
	double getRadius();						//returns the value of radius
	double area();							//calculates the area of the circle
	double distanceTwoCircle(Circle&);		//Calculates the distane from 1 circle's origin to other circle origin
	void print()const;						//prints x, y & radius of circle
	bool equal(Circle&);					//checks if current object's radius equal to other radius
private:
	double radius;
};

