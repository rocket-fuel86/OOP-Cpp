#include "Point.h"

Point::Point()
{
    x = y = 0;
}
Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::Output() const
{
    cout << "X: " << x << "\tY: " << y << endl;
}

void Point::SetX(int a) { x = a; }
void Point::SetY(int a) { y = a; }
int Point::GetX() const { return x; }
int Point::GetY() const { return y; }

//Point Point::operator + (Point& obj2) // obj+obj1
//{
//    Point rez(this->x + obj2.x, this->y + obj2.y);
//    return rez;
//}
//Point Point::operator +(int a) // obj+int
//{
//    Point s(x + a, y + a);
//    //s.x = x + a;
//    //s.y = y + a;
//    return s;
//}