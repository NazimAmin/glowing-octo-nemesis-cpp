#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "RTriangle.h"
#include "shape.h"
using namespace std;

int main(){
	//Point 
	//creating objects and calling the param constructor
	Point object(2, 2), object2(5, 4);
	
	//right triangle
	//creating objects and calling the param constructor
	RTriangle triangle(3, 4, 5), triangle2(6, 3, 4);
	//calling calculate func to calculate area
	triangle.calculate_area();
	//printing 
	triangle.print();
	cout << "\n";

	triangle2.calculate_area();
	triangle2.print();
	cout << "\n";

	//circle 
	//creating object and passing with point object "object"
	//calling param object of circle
	Circle circleObj(object, 2), circleObj2(object2, 4);
	//calculatinig area
	circleObj.calculate_area();
	//printing
	circleObj.print();
	cout << "\n";

	circleObj2.calculate_area();
	circleObj2.print();

	system("PAUSE");
	return 0;
}