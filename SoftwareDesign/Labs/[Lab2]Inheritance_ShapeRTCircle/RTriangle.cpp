#include "RTriangle.h"

/*
	default constructor
	sets values to 0
*/
RTriangle::RTriangle(){
	hypotenuse = 0;
	side1 = 0;
	side2 = 0;
}
/*
	validates the hyp^2 = side1^2+side^2
	and sets the values to param variables
*/
RTriangle::RTriangle(int side1Val, int side2Val, int hypotenuseVal){
	
	if ((hypotenuseVal* hypotenuseVal)
		!= (side1Val*side1Val)
		+ (side2Val*side2Val)){
		hypotenuseVal = sqrt((side1Val*side1Val) + (side2Val*side2Val));
	}

	side1 = side1Val;
	side2 = side2Val;
	hypotenuse = hypotenuseVal;
}
/*
	calculates area and sets to area of shape
*/
void RTriangle::calculate_area(){
	area = (side1*side2) / 2;
}
/*
	prints area, side1, side2, and hypotenuse
*/
void RTriangle::print(){
	cout << "RTriangle: \n";
	Shape::print();
	cout << "Side1: " << side1 << endl;
	cout << "Side2 : " << side2 << endl;
	cout << "Hypotenuse: " << hypotenuse << endl;
}