#pragma once

#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

    //friend Point operator+(int a, Point& b);
    friend ostream& operator<<(ostream& out, Point& obj);
    friend istream& operator>>(istream& out, Point& obj);
public:
    Point();
    Point(int x, int y);

    void Output() const;

    void SetX(int a);
    void SetY(int a);
    int GetX() const;
    int GetY() const;

    //Point operator+(Point& obj2);
    //Point operator+(int a);
};