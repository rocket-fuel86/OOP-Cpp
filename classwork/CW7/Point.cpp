#include "Point.h"

Point::Point() : x(0), y(0), z(0) {}

Point::Point(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}

int Point::getZ() const
{
	return z;
}

void Point::setX(int x)
{
	this->x = x;
}

void Point::setY(int y)
{
	this->y = y;
}

void Point::setZ(int z)
{
	this->z = z;
}

void Point::print() const
{
	cout << "X: " << x << endl
		<< "Y: " << y << endl
		<< "Z: " << z << endl;
}

Point Point::operator+(const Point& point) const
{
	return Point(this->x + point.x, this->y + point.y, this->z + point.z);
}

Point Point::operator-(const Point& point) const
{
	return Point(this->x - point.x, this->y - point.y, this->z - point.z);
}

Point Point::operator*(const Point& point) const
{
	return Point(this->x * point.x, this->y * point.y, this->z * point.z);
}

Point Point::operator/(const Point& point) const
{
	if (point.x == 0 || point.y == 0 || point.z == 0) {
		cout << "Divide by zero" << endl;
		return Point();
	}
	return Point(this->x / point.x, this->y / point.y, this->z / point.z);
}
