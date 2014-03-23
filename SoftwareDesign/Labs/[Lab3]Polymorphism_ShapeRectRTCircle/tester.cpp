// main.cpp
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Square.h"
#include "RightTriangle.h"

int main()
{
	// Declare an array of four Shape pointers.  

	//add missing cod4
	Shape* arr[4];
	
	//  Use the pointers to create objects of class Circle, Rectangle, Square and 
	// RightTriangle
	//add missing code

	arr[0] = new Circle(2, 3, 4);
	arr[1] = new Rectangle(2, 5, 4, 3);
	arr[2] = new RightTriangle(2, 3, 4, 5);
	arr[3] = new Square(2, 3, 5);



	/* Use for loop to display the values stored in private data members of the above four objects */
	//add missing code
	
	for (int i = 0; i < 4; i++){
		// Use for loop to display the area of the above four objectZ
		cout << "  X: " << arr[i]->getPositionX() << "  Y: " << arr[i]->getPositionY() << endl;
		arr[i]->print();
	}
	//add missing code
	for (int i = 0; i < 4; i++){
		arr[i]->area();
	}


	// Use for loop too delete the objects that were created dynamically

	//add missing code
	for (int i = 0; i < 4; i++){
		delete arr[i];
	}



	return 0;
}

