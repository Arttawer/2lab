#include<iostream>
#include"Point.h"
using namespace std;

//+, -, =, ==, !==, <<

void SetCoord(float& x, float& y, float& z)
{
		cout << "\tx = ";		cin >> x;
		cout << "\ty = ";		cin >> y;
		cout << "\tz = ";		cin >> z;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	float x;
	float y;
	float z;

	cout << "enter 1st coordinates" << endl;
	SetCoord(x, y, z);
	Point FirstPoint(x, y, z);


	cout << "enter 2nd coordinates" << endl;
	SetCoord(x, y, z);
	Point SecondPoint(x, y, z);


	Point ThirdPoint;
	ThirdPoint = FirstPoint + SecondPoint;

	cout << ThirdPoint;
}