#pragma once
class coordinates
{
private:
	float _x;
	float _y;
	float _z;
public:
	float operator+();
	float operator-();
	coordinates(float x, float y, float z);
	//void print();
};

