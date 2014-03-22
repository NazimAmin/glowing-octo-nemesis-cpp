#include "Point.h"

/*
	default constructor, setting variables to 0
*/
Point::Point(){
	x = 0;
	y = 0;
}
/*
	parameter constructor setting the 
	setting the variables with parameter value
*/
Point::Point(int xVal, int yVal){
	x = xVal;
	y = yVal;
}
/*
	copy constructor to use toward center of circle
*/
Point::Point(const Point& object){
	x = object.x;
	y = object.y;
}

double Point::calculate_area(){
	return 0;
}
/*
	printing points [x,y]
*/
void Point::print(){
	cout << "Point x: " << x << endl;
	cout << "Point y: " << y << endl;
}
