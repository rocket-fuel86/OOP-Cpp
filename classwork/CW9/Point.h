#include<iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point();
    Point(int x1, int y1);
    void Output() const;
    void SetX(int a);
    void SetY(int a);
    int GetX() const;
    int GetY() const;

    Point operator+(Point& obj2); // obj+obj1
    Point operator+(int a); // obj+int

    Point operator++(int); // a++
    Point& operator++(); // ++a

    Point operator--(int); // a--
    Point& operator--(); // --a

    bool operator>(Point& rhs) const;
    bool operator<(Point& rhs) const;

    bool operator>=(Point& rhs) const;
    bool operator<=(Point& rhs) const;

    bool operator==(Point& rhs) const;
    bool operator!=(Point& rhs) const;

    Point& operator+=(int a);
    Point& operator-=(int a);
    Point& operator*=(int a);
    Point& operator/=(int a);
};