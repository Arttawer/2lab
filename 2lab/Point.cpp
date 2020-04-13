#include "Point.h"
#include <iostream>

Point::Point(float x, float y, float z)
	:x(x), y(y), z(z)
{}
Point::Point() {};

Point Point::operator + (Point SecondPoint)
{
	return Point(this->x + SecondPoint.x, this->y + SecondPoint.y, this->z + SecondPoint.z);
}

Point Point::operator + (int a)
{
	return Point(this->x + a, this->y + a, this->z + a);
}

Point Point::operator - (int a)
{
	return Point(this->x - a, this->y - a, this->z - a);
}

Point Point::operator - (Point SecondPoint)
{
	return Point(this->x - SecondPoint.x, this->y - SecondPoint.y, this->z - SecondPoint.z);
}

Point Point :: operator+=  (Point SecondPoint)
{
	return Point(this->x = SecondPoint.x, this->y = SecondPoint.y, this->z = SecondPoint.z);
}

bool operator== (const Point& FirstPoint, const Point& SecondPoint)
{
	return (FirstPoint.x == SecondPoint.x && FirstPoint.y == SecondPoint.y && FirstPoint.z == SecondPoint.z);

}

bool operator!= (const Point& FirstPoint, const Point& SecondPoint)
{
	return (FirstPoint.x != SecondPoint.x && FirstPoint.y != SecondPoint.y && FirstPoint.z != SecondPoint.z);

}

std::ostream& operator<< (std::ostream& out, Point& ThirdPoint)
{
	out << ThirdPoint.x << ", " << ThirdPoint.y << ", " << ThirdPoint.z;
	return out;
}