#include <iostream>
using namespace std;
#pragma once
class Point
{
public:
	Point();
	Point(int, int);
	Point(const Point& object);
	double calculate_area();
	void print();
	int x;
	int y;
};

