#include "Point2D.h"
#include "Circle.h"
#include "Cylinder.h"
double pointDistanceFromOrigin(Point2D);	//function prototype
double circleDistanceFromOrigin(Circle);	//function prototype
int main()
{
	Point2D point, point2(2, 3);	//creating 2 objects for point
	point.setX(2);						//setting x
	point.setY(3);						//setting y
	cout << "Point X coordinate is " << point.getX()		//getting x
		<< "\nPoint Y coordinate is " << point.getY();		//getting y
	cout << "\n"; point.print();							//printing the points

	cout << "\n\nPoint2 X coordinate is " << point2.getX()		//getting x using param constructor
		<< "\nPoint2 Y coordinate is " << point2.getY();		//getting y using ||

	cout << "\nNew points are: "; point2.print();				//printing points using param object
	cout << "\nIs equal = " << point.equal(point2);							//checking if they are equal
	cout << "\nDistance of both points = " << point.distanceTwoPoints(point2);		//finding the distance of 2 points
	
	cout << "\n--------------------------------------------------------------------" << endl;

	cout << "--------------------------------------------------------------------" << endl;

	
	Circle circle;					//creating object, using default constructor
	circle.setX(2);					//setting x
	circle.setY(5);					//setting y
	circle.setRadius(4);			//setting radius
	cout << "\n\nCircle X coordinate is " << circle.getX()		//getting x
		 << "\nCircle Y coordinate is " << circle.getY()		//getting y
		 << "\nCircle Radius is " << circle.getRadius();		//finding the radius 
	cout << "\n"; circle.print();								//printing x, y and radius
	cout << "\nCircle area is = "<< circle.area();				//finding the area of circle



	Circle circle2(2, 10, 10.5);									//creating object using param constructor
	cout << "\n\nCirle2 X coordinate is " << circle2.getX()		//getitng x
		<< "\nCircle2 Y coordinate is " << circle2.getY()		//getting y
		<< "\nCircle2 Radius is " << circle2.getRadius();		//getting radius

	cout << "\n\nNew circle co-ordinates & radius are = "; circle2.print();		//printing of the second object value x, y, radius
	cout << "\nIs equal = " << circle.equal(circle2);							//checking equality of both circle
	cout << "\nDistance of both circles = " << circle.distanceTwoPoints(circle2);	//finding distance of both circle
	cout << "\n\n";
	cout << "--------------------------------------------------------------------" << endl;

	cout << "--------------------------------------------------------------------" << endl;

	Cylinder cylinder,cylinder2(2, 4, 4.1, 6.2);	//creating object using defult and param constructor
	cylinder.setX(2);							//setting x
	cylinder.setY(5);							//setting y
	cylinder.setRadius(4);						//setting radius
	cylinder.setHeight(4);						//setting height
	cout << "\n";  cylinder.print();			//printing x,y, radius, height
	cout << "\n\nCylinder area = " << cylinder.area();		//finding the area of cylinder
	cout << "\nCylinder volume = " << cylinder.volume();	//finding the volume
	
	cout << "\n\n";  cylinder2.print();							//printing the second object value
	cout << "\nCylinder2 height = " << cylinder2.getHeight();	//getting height
	cout << "\nCylinder2 area = " << cylinder2.area();			//finding area
	cout << "\nCylinder2 volume = " << cylinder2.volume();		//finding volume
	cout << "\nIs equal " << cylinder2.equal(cylinder);		//checking if both cylinder are equal

	cout << "\n--------------------------------------------------------------------" << endl;

	cout << "--------------------------------------------------------------------" << endl;
	cout << "\nDistance of points from origin " << pointDistanceFromOrigin(point);		//non-member function call,
																						//finding the distance from origin to point
	cout << "\nDistance of circle from origin " << circleDistanceFromOrigin(circle2);	//non-member function call
																						//finding the distance from origin to center of circle
	cout << endl;
	system("PAUSE");
	return 0;
}

/*
	non-member function
	@param Point2D object
	@returns the distance from origin to point
*/
double pointDistanceFromOrigin(Point2D object){

	return sqrt(double(object.getX()*object.getX() + object.getY()*object.getY()));
}
/*
	non-member function
	@param Cirle object
	@returns the distance from origin to center of circle
*/
double circleDistanceFromOrigin(Circle object){

	return abs(sqrt(double(object.getX()*object.getX() + object.getY()*object.getY())));
}