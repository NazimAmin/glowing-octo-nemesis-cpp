#include "Square.h"


Square::Square(double positionX, double positionY, double side) :Shape(positionX, positionY)
{
	this->side = side;
}
double Square::area(){
	return side*side;
}
void Square::resize(double side, double null){
	this->side = side;
}

void Square::print()
{
	cout << "Side: " << side << endl;
	cout << "Area: " << area();
	cout << "\n";
}
double Square::getHeight(){
	return side;
}
double Square::getWidth(){
	return side;
}
double Square::getPositionX(){
	return Shape::getPositionX();
}
double Square::getPositionY(){
	return Shape::getPositionY();
}
