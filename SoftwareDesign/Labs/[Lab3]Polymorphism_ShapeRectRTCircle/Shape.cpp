#include "Shape.h"
Shape::Shape(){
}
Shape::Shape(double positionX, double positionY)
{
	// Use the "this->" notation 
	this->positionX = positionX;
	this->positionY = positionY;
}


double Shape::getPositionX()
{
	return this->positionX;
}


double Shape::getPositionY()
{
	return this->positionY;
}


void Shape::move(double positionX, double positionY)
// Use the "this->" notation
{
	this->positionX = positionX;
	this->positionY = positionY;
}
double Shape::getWidth(){
	return 0;
}
double Shape::getHeight(){
	return 0;
}
void Shape::resize(double, double){
	
}
