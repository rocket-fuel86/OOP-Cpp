#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

static void Show(const Figure& figure)
{
    figure.ShowArea();
}

static void Perimetr(const Figure& figure)
{
    figure.Perimetr();
}

int main()
{
    int choice = 0;

    cout << "1. Square circle" << endl;
    cout << "2. Square rectangle" << endl;
    cout << "3. Square triangle" << endl;
    cout << "Make your choice: ";

    cin >> choice;

    switch (choice)
    {
        case 1: 
            {
                Circle circle;
                circle.SetDimension(10.0);
                Show(circle);
                Perimetr(circle);
            }
            break;
        case 2: 
            {
                Rectangle rectangle;
                rectangle.SetDimension(5.5, 10.0);
                Show(rectangle);
                Perimetr(rectangle);
            }
            break;
        case 3: 
            {
                Triangle triangle;
                triangle.SetDimension(5.5, 10.0);
                Show(triangle);
                Perimetr(triangle);
            }
            break;
    }

    return 0;
}