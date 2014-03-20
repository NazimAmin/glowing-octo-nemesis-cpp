#include "Point2D.h"
/* 
	sets the value of x & y to 0;
*/
Point2D::Point2D()
{
	x = 0;
	y = 0;
}
/*
	@param xValue, yValue
	sets x & y to the passing value
*/
Point2D::Point2D(int xValue, int yValue)
{
	x = xValue;
	y = yValue;
}
/*
	@param xValue
	sets the value of X
*/
void Point2D::setX(int xValue)
{
	x = xValue;
}
/*
	@param yValue
	sets the value of Y
*/
void Point2D::setY(int yValue){
	y = yValue;
}
/*
	@return: the value of x 
*/
int Point2D::getX()
{
	return x;
}
/*
	@return: the value of y
*/
int Point2D::getY()
{
	return y;
}
/*
	prints out the value of points x and y
*/

void Point2D::print() const
{
	cout <<"Points: [X, Y] = "<< '[' <<x << " , " << y << ']';
}
/*
	@param Object c
	@returns 1 or 0
	checks if x of current object eqaul objects x @returns if so
*/
bool Point2D::equal(Point2D& c)
{
	if (x == c.x && y == c.y)
		return true;
	return false;
}
/*
	@param object c
	calculates the distance between one point to another point
	@returns the distance
	sqrt (x1-x2)^2 + (y1-y2)^2
*/
double Point2D::distanceTwoPoints(Point2D& c)
{
	double dx = getX() - c.getX();         //horizontal 
	double dy = getY() - c.getY();         //vertical 
	double dist = sqrt(dx*dx + dy*dy);		//Pythagoras theorem
	return dist;
}