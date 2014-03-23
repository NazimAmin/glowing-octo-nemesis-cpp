// RightTriangle.cpp
// Contains the definition of the methods in RightTriangle.

#include <cmath>
#include "RightTriangle.h"

RightTriangle::RightTriangle(double positionX, double positionY, double width, double height) :Shape(positionX, positionY)
{
	this->width = width;
	this->height = height;
}


double RightTriangle::area()
{
	return width * height / 2;
}


double RightTriangle::getWidth()
{
	return width;
}


double RightTriangle::getHeight()
{
	return height;

}


double RightTriangle::getHypotenuseLength()
{
	//add missing code
	return sqrt((height*height) + (width*width));
}


void RightTriangle::resize(double width, double height)
{
	//add missing code
	this->width = width;
	this->height = height;
}
void RightTriangle::print(){
	cout << "Height: " << height << endl;
	cout << "Width: " << width << endl;
	cout << "Hypotenuse: " << getHypotenuseLength();
	cout << "\n";
}

double RightTriangle::getPositionX(){
	return Shape::getPositionX();
}
double RightTriangle::getPositionY(){
	return Shape::getPositionY();
}


