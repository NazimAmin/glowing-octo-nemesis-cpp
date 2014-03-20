#include "Cylinder.h"
/*
	default constructor 
	inherits from Circle
	sets height = 0
*/
Cylinder::Cylinder():Circle()
{
	height = 0;
}
/*
	@param x, y, radius, vHeight
	inherits from Circle
	sets the height with passing value
*/
Cylinder::Cylinder(int x, int y, double radius, double vHeight):Circle(x, y, radius){
	setHeight(vHeight);
}
/*
	@param vHeight
	sets the value of height to param
*/
void Cylinder::setHeight(double vHeight){
	height = vHeight;
}
/*
	@returns the value of height
*/
double Cylinder::getHeight()const
{
	return height;
}
/*
	calculates the area of Cylinder
	inherits the area of circle 
	equation: 2*pi*r^2 + h(2*pi*r)
	@returns the area of cylinder
*/
double Cylinder::area()
{
	double areaOfTopBottom = Circle::area() * 2;
	double areaOfSides = (2 * 3.14159 * getRadius()) * getHeight();
	double areaOfCylinder = areaOfTopBottom + areaOfSides;
	return areaOfCylinder;
}
/*
	calculates the volume of cylinder
	inherits the area from circle
	equation: (pi*r^2)*h
	@returns volume of cylinder
*/
double Cylinder::volume(){
	return Circle::area()*getHeight();
}
/*
	inherits from Circle
	prints out x, y, radius and height 
*/
void Cylinder::print() const
{
	Circle::print(); cout << " Height = " << getHeight()<<endl;
}
/*
	@param object c
	checks if radius and height of cylinder are equal
	@return 1 or 0
*/
bool Cylinder::equal(Cylinder& c){
	if (getRadius() == c.getRadius() && getHeight()== c.getHeight())
		return true;
	return false;
}

