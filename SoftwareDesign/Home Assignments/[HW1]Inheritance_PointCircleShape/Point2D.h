#pragma once
#include <iostream>
using namespace std;

class Point2D
{
public:
	Point2D();							//Default constructor
	Point2D(int, int);					//paramarized constructor for points[x,y]
	bool equal(Point2D&);				//checks if x & y of current equal to other object
	void setX(int);						//sets the value of X
	void setY(int);						//sets the value of Y
	int getX();							//returns the value of X
	int getY();							//returns the value of Y
	void print()const;					//prints x & y
	double distanceTwoPoints(Point2D&);	//finds the distance of current and object
private:
	int x;								
	int y;								
};

