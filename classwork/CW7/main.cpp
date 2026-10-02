#include "Point.h"
#include "Fraction.h"

int main()
{
    Point p1(10, 20, 30);
    Point p2(2, 5, 3);
    Point zeroPoint(0, 5, 5);

    Point pAdd = p1 + p2;
    cout << "Add: " << endl;
    pAdd.print();

    Point pSub = p1 - p2;
    cout << "Substract: " << endl;
    pSub.print();

    Point pMul = p1 * p2;
    cout << "Multiply:  " << endl;
    pMul.print();

    Point pDiv = p1 / p2;
    cout << "Divide: " << endl;
    pDiv.print();

    Point pBadDiv = p1 / zeroPoint;

    cout << endl << "//////////////////////////////////////////" << endl << endl;

    Fraction f1(1, 3);
    Fraction f2(4, 7);

    Fraction fAdd = f1 + f2;
    cout << "Add: " << endl;
    fAdd.print();

    Fraction fSub = f1 - f2;
    cout << "Substract: " << endl;
    fSub.print();

    Fraction fMul = f1 * f2;
    cout << "Multiply:  " << endl;
    fMul.print();

    Fraction fDiv = f1 / f2;
    cout << "Divide: " << endl;
    fDiv.print();
}