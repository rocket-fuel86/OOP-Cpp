#pragma once

#include<iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point()
    {
        cout << "Construct\n";
        x = y = 0;
    }
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void Output()
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }
    void SetX(int a) { x = a; }
    void SetY(int a) { y = a; }
    int GetX() { return x; }
    int GetY() { return y; }

    //Point operator + (Point& obj2) // obj+obj1
    //{
    //    Point rez(this->x + obj2.x, this->y + obj2.y);
    //    return rez;
    //}
    //Point operator +(int a) // obj+int
    //{
    //    Point s(x + a, y + a);
    //    //s.x = x + a;
    //    //s.y = y + a;
    //    return s;
    //}
};



