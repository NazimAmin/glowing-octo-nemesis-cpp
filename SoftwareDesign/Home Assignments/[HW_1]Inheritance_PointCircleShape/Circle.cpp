#include "Circle.h"

/*
	inherits default constructor of Point2D
	sets the value of radius to 0
*/
Circle::Circle() :Point2D()
{
	radius = 0;
}
/*
	@param x, y, radius value
	@inherits from Point2D
	sets the value of radius
*/
Circle::Circle(int x, int y, double radiusValue) :Point2D(x, y){
	setRadius(radiusValue);
}
/*
	@param radiusValue
	sets the value of radius
*/
void Circle::setRadius(double radiusValue)
{
	radius = radiusValue;
}
/*
	@return the value of radius
*/
double Circle::getRadius(){
	return radius;
}
/*
	@returns the valulated area of circle
	equation: pi * radius^2
*/
double Circle::area()
{
	return 3.14159 * getRadius() * getRadius();
}
/*
	@param object c
	calculates the distance between origin of one circle to other
	@returns the distance
	sqrt (x1-x2)^2 + (y1-y2)^2
*/
double Circle::distanceTwoCircle(Circle& c){

	double dx = getX() - c.getX();         //horizontal 
	double dy = getY() - c.getY();         //vertical 
	double dist = sqrt(dx*dx + dy*dy);		//Pythagoras theorem
	return dist;
}
/*
	inherits print() from Print2D
	prints x, y and radius
*/
void Circle::print()const{
	Point2D::print(); cout << " Radius = " << radius;
}
/*
	@param object c
	checks if radius of current object is equal to object radius
	@return 1 or 0
*/
bool Circle::equal(Circle& c){
	if (c.radius == radius)
		return true;
	return false;
}