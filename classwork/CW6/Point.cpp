#include "Point.h"

Point::Point(int a, int b) : x(a), y(b) {}

void Point::SetX(int a)
{
    x = a;
}

int Point::GetX() const
{
    return x;
}

void Point::Print() const
{
    cout << "Const print" << endl;
    cout << x << "\t" << y << endl;
}

void Point::Print()
{
    cout << "X: " << x << "\t" << "Y: " << y << endl;
}
