#include "Point.h"

Point::Point()
{
	x = y = 0;
}

Point::Point(int x1, int y1)
{
    x = x1;
    y = y1;
}

void Point::Output() const
{
    cout << "X: " << x << "\tY: " << y << endl;
}

void Point::SetX(int a)
{
    x = a;
}

void Point::SetY(int a)
{
    y = a;
}

int Point::GetX() const
{
	return x;
}

int Point::GetY() const
{
	return y;
}

Point Point::operator+(Point& obj2)
{
    Point rez(this->x + obj2.x, this->y + obj2.y);
    return rez;
}

Point Point::operator+(int a)
{
    Point s(x + a, y + a);
    //s.x = x + a;
    //s.y = y + a;
    return s;
}

Point Point::operator++(int)
{
    Point temp = *this;
    x += 10;
    y += 10;
    return temp;
}

Point& Point::operator++()
{
    x += 10;
    y += 10;
    return *this;
}

Point Point::operator--(int)
{
    Point temp = *this;
    x -= 10;
    y -= 10;
    return temp;
}

Point& Point::operator--()
{
    x -= 10;
    y -= 10;
    return *this;
}

bool Point::operator>(Point& rhs) const
{
    if (x > rhs.x && y > rhs.y) return true;
    return false;
}

bool Point::operator<(Point& rhs) const
{
    if (x < rhs.x && y < rhs.y) return true;
    return false;
}

bool Point::operator>=(Point& rhs) const
{
    if (x >= rhs.x && y >= rhs.y) return true;
    return false;
}

bool Point::operator<=(Point& rhs) const
{
    if (x <= rhs.x && y <= rhs.y) return true;
    return false;
}

bool Point::operator==(Point& rhs) const
{
    if (x == rhs.x && y == rhs.y) return true;
    return false;
}

bool Point::operator!=(Point& rhs) const
{
    if (x != rhs.x && y != rhs.y) return true;
    return false;
}

Point& Point::operator+=(int a)
{
    x += a;
    y += a;
    return *this;
}

Point& Point::operator-=(int a)
{
    x -= a;
    y -= a;
    return *this;
}

Point& Point::operator*=(int a)
{
    x *= a;
    y *= a;
    return *this;
}

Point& Point::operator/=(int a)
{
    x /= a;
    y /= a;
    return *this;
}
