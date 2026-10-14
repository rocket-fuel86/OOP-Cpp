#include "Point.h"
#include "Student.h"

static Student operator++(Student& obj, int) // obj++
{
    Student temp = obj;
    obj.setYear(obj.getYear() + 1);
    return temp;
}
static Student& operator--(Student& obj) // --obj
{
    obj.setYear(obj.getYear() - 1);
    return obj;
}
static Student& operator+=(Student& obj, short a) // obj += a
{
    obj.setAge(obj.getAge() + a);
    return obj;
}
static Student& operator-=(Student& obj, short a) // obj -= a
{
    obj.setAge(obj.getAge() - a);
    return obj;
}


static Point operator+(int a, Point& b) // 10 + obj
{
    Point s(b.GetX() + a, b.GetY() + a);
    return s;
}
static Point operator*(int a, Point& b) // 10 * obj
{
    Point s(b.GetX() * a, b.GetY() * a);
    return s;
}
static Point operator+(Point& b, int a) // obj + 10
{
    Point s(b.GetX() + a, b.GetY() + a);
    return s;
}
static int operator+(Point& a, Point& b) // obj1 + obj2
{
    return a.GetX() + a.GetY() + b.GetX() + b.GetY();
}
static int operator/(int a, Point& b) // 10 / obj1
{
    return a / b.GetX() / b.GetY();
}
static Point& operator++(Point&obj) // ++obj
{
    obj.SetX(obj.GetX() + 10);
    obj.SetY(obj.GetY() + 10);
    return obj;
}
static Point operator++(Point& obj, int) // obj++
{
    Point temp = obj;
    obj.SetX(obj.GetX() + 10);
    obj.SetY(obj.GetY() + 10);
    return temp;
}

int main()
{
    Student obj1;

    obj1.input();

    cout << "\nOriginal student:\n";
    obj1.print();

    obj1++;
    cout << "\nAfter obj1++:\n";
    obj1.print();

    --obj1;
    cout << "\nAfter --obj1:\n";
    obj1.print();

    obj1 += 2;
    cout << "\nAfter obj1 += 2:\n";
    obj1.print();

    obj1 -= 2;
    cout << "\nAfter obj1 -= 2:\n";
    obj1.print();


    //Point obj1(10, 20);
    //Point obj2(1, 2);

    //Point sum;
    ////sum = obj1 + 5; // метод, функция
    ////sum.Output();
    ////sum = 5 + obj1;
    ////sum.Output();
    ////sum = ++obj1;
    ////sum.Output();
    ////sum = obj1++;
    ////sum.Output();

    //Point min = 2 * obj1;
    //int s = obj1 + obj2;
    //int d = 10 / obj1;
}