// Circle.cpp
// Contains the definitions of the methods of the Circle class.

#include "Circle.h"

Circle::Circle(double positionX, double positionY, double radius) :Shape(positionX, positionY)
{
	this->radius = radius;
}


double Circle::area()
{
	const double PI = 3.1415927;
	return PI * radius * radius;
}


double Circle::getRadius()
{
	return this->radius;
}

void Circle::resize(double radius, double null)
{
	this->radius = radius;
}

//write the definitions of the remaining virtual methods if necessary

void Circle::print(){
	
	cout << "Radius: " << getRadius();
	cout << "\n";
}
double Circle::getHeight(){
	return 0;
}
double Circle::getPositionX(){
	return Shape::getPositionX();
}
double Circle::getPositionY(){
	return Shape::getPositionY();
}
double Circle::getWidth(){
	return 0;
}
