#pragma once

#include <iostream>

class Point
{
private:
	float x = 0.0;
	float y = 0.0;
	float z = 0.0;

public:

	Point(float x, float y, float z);
	Point();

	Point operator + (Point SecondPoint);
	Point operator + (int a);


	Point operator - (Point SecondPoint);
	Point operator - (int a);

	Point operator += (Point SecondPoint);

	friend bool operator== (const Point& FirstPoint, const Point& SecondPoint);
	friend bool operator!= (const Point& FirstPoint, const Point& SecondPoint);
	friend std::ostream& operator<< (std::ostream& out, Point& ThirdPoint);
};