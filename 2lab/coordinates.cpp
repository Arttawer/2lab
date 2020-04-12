#include "coordinates.h"
#include <iostream>

using namespace std;

coordinates::coordinates(float x, float y, float z)
	:_x(x), _y(y), _z(z) {}

/*void coordinates::print() {
	cout << _x;
	cout << _y;
	cout << _z;
}*/

float coordinates::operator+()
{
	
	sumx += sumx + _x;
	sumy += sumx + _y;
	sumz += sumx + _z;
}