#pragma once

#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
	int z;
public:
	Point();
	Point(int x, int y, int z);

	int getX() const;
	int getY() const;
	int getZ() const;

	void setX(int x);
	void setY(int y);
	void setZ(int z);

	void print() const;

	Point operator+(const Point& point) const;
	Point operator-(const Point& point) const;
	Point operator*(const Point& point) const;
	Point operator/(const Point& point) const;
};

