// Rectangle.cpp
// Contains definitions of Rectangle's methods.

#include "Rectangle.h"

Rectangle::Rectangle(double positionX, double positionY, double width, double height) :Shape(positionX, positionY)
{
	// Use the "this->" notation
	this->width = width;
	this->height = height;
}


double Rectangle::area()
{
	return width * height;
}


double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight()
{
	return height;
}

void Rectangle::resize(double width, double height)
{
	this->width = width;
	this->height = height;
}

void Rectangle::print(){
	cout << "Width: "; getWidth();
	cout << "\n";
	cout << "Height: "; getHeight();
	cout << "\n";
	cout << "Area: "; area();
}

double Rectangle::getPositionX(){
	return Shape::getPositionX();
}
double Rectangle::getPositionY(){
	return Shape::getPositionY();
}
