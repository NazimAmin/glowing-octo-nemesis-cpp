Below you have the abstract class Shape with two private data members positionX and
positionY of double type. Write the definitions of the member functions of class Shape
and derived classes where required. Create a driver program following the given
instructions. The program should print the values stored in private data members as well
as the areas of particular objects where appropriate. (Do not add more functions to any
of the classes).

Polymorphism

// Shape.h
// Contains the declaration (but not the definition!) of the Shape class.
class Shape
{
public:
Shape(double positionX, double positionY);
virtual double getPositionX();
virtual double getPositionY();
virtual void move(double positionX, double positionY);
virtual double getWidth();
virtual double getHeight();
virtual void resize(double, double);
virtual double area( ) = 0;
virtual void print( ) = 0;
private:
double positionX;
double positionY;
};
#endif // SHAPE_H

// Shape.cpp
// Contains the definitions of Shape's methods.
#include "Shape.h"
Shape::Shape(double positionX, double positionY)
{
// Use the "this->" notation
2
}
double Shape::getPositionX()
{
}
double Shape::getPositionY()
{
}
void Shape::move(double positionX, double positionY)
// Use the "this->" notation
{
}


// Circle.h
// Contains the declaration (but not the definition!) of the Circle class.
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle : public Shape
{
public:
Circle(add parameters);
virtual double area();
virtual double getRadius();
virtual void resize(add parameters);
// override all virtual functions from Shape class
3
private:
double radius;
};
#endif // CIRCLE_H


// Circle.cpp
// Contains the definitions of the methods of the Circle class.
#include "Circle.h"
Circle::Circle(add parameters)
{
// Use the "this->" notation
}
double Circle::area()
{
const double PI = 3.1415927;
return PI * radius * radius;
}
double Circle::getRadius()
{
}
void Circle::resize(add parameters and missing code)
{
}



// override all virtual functions from Shape class
// Rectangle.h
// Contains the declaration (but not the definition!) of the Rectangle class,
// which inherits from the Shape class.
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
class Rectangle : public Shape
{
public:
Rectangle(add parameters);
// I've overridden the area() method here, just like I did in Circle.
virtual double area();
// override all virtual functions from Shape class
private:
// ...and two new data members
double width;
double height;
};


#endif // RECTANGLE_H
// Rectangle.cpp
// Contains definitions of Rectangle's methods.
#include "Rectangle.h"
Rectangle::Rectangle(add parameters and missing code)
{
// Use the "this->" notation

}
double Rectangle::area()
{
return width * height;
}
double Rectangle::getWidth()
{
}
double Rectangle::getHeight()
{
return height;
}
void Rectangle::resize(add parameters and missing code)
{
}


// RightTriangle.h
// Contains the declaration (but not the definition!) of the RightTriangle
// class, which inherits from Shape.
#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H
#include "Shape.h"
class RightTriangle : public Shape
{
public:
RightTriangle(double positionX, double positionY, double width, double height);
virtual double area();
virtual double getWidth();
virtual double getHeight();
double getHypotenuseLength();
virtual void resize(double width, double height);

private:
double width;
double height;
};
#endif // RIGHTTRIANGLE_H
// RightTriangle.cpp
// Contains the definition of the methods in RightTriangle.
#include <cmath>
#include "RightTriangle.h"
RightTriangle::RightTriangle(add parameters and missing code)
{
}
double RightTriangle::area()
{
return width * height / 2;
}
double RightTriangle::getWidth()
{
return width;
}
double RightTriangle::getHeight()
{
//add your code
}
double RightTriangle::getHypotenuseLength()
{
//add your code
}
void RightTriangle::resize(add parameters and missing code)
{



//add your code
}
Design class Square as derived class of Shape. Use public inheritance. (See class
Rectangle)
// main.cpp
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "RightTriangle.h"
int main()
{
// Declare an array of four Shape pointers.
//add your code
// Use the pointers to create objects of class Circle, Rectangle, Square and
// RightTriangle
//add your code
/* Use for loop to display the values stored in private data members of the
above four objects */
//add your code
// Use for loop to display the area of the above four objects
//add your code
// Use for loop to implement function resize and display the results of it.
//add your code
// Delete the objects that were created dynamically
//add your code
return 0;
}
