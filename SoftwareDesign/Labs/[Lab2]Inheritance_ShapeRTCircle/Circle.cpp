#include "Circle.h"

/*
	default constructor
*/
Circle::Circle()
{
	radius = 0.0;
}
/*
	Param constructor copying x, y and setting to center using the object of point
*/
Circle::Circle(const Point& object, double radiusVal){
	center = object;
	radius = radiusVal;
}
/*
	calculating the area and set that to area of shape
*/
void Circle::calculate_area(){
	area = 3.14159 * radius* radius;
}
/*
	printing radius, area, and center of circle
*/
void Circle::print(){
	cout << "Circle: \n";
	center.print();
	Shape::print();
	cout << "Radius: " << radius<< endl;
}