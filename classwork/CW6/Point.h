#pragma once

#include <iostream>;
using namespace std;

class Point
{
    int x, y;
public:
    Point(int a, int b);
    void SetX(int a);
    int GetX() const;
    void Print() const; // const Point* const this
    void Print(); // const Point* this
};

