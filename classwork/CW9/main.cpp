#include "Point.h"
#include "Date.h"

int main()
{
    Date d1(2026, 5, 15);
    Date d2(2026, 5, 20);

    cout << d1.getYear() << "." << d1.getMonth()
        << "." << d1.getDay() << endl;

    (d1 + 20).print();
    (d2 - 10).print();

    cout << "d2 - d1 = " << d2 - d1 << " days" << endl;

    d1 += 20;
    d1.print();

    d1 -= 10;
    d1.print();

    Date d3(2026, 12, 30);

    (++d3).print();
    (d3++).print();
    (--d3).print();
    (d3--).print();

    cout << "d1 > d2: " << (d1 > d2) << endl;
    cout << "d1 < d2: " << (d1 < d2) << endl;
    cout << "d1 == d2: " << (d1 == d2) << endl;
    cout << "d1 != d2: " << (d1 != d2) << endl;
    cout << "d1 >= d2: " << (d1 >= d2) << endl;
    cout << "d1 <= d2: " << (d1 <= d2) << endl;

    d2.setYear(2025);
    d2.setMonth(1);
    d2.setDay(10);
    d2.print();
    d2.shortPrint();


    //Point obj1(10, 20);
    //Point obj2(1, 2);

    ////Point sum = obj1 + obj2;
    ////// sum = obj1.operator+(obj2);

    ////sum = obj1 + 5;

    //Point res = obj1++;
    ////obj1--;

    //obj1.Output();
    //res.Output();

    //cout << (obj1 > obj2) << endl;
    //cout << (obj1 < obj2) << endl;
    //cout << (obj1 >= obj2) << endl;
    //cout << (obj1 <= obj2) << endl;
    //cout << (obj1 == obj2) << endl;
    //cout << (obj1 != obj2) << endl;

    //(obj1 += 10).Output();
    //(obj1 -= 10).Output();
    //(obj1 *= 10).Output();
    //(obj1 /= 10).Output();
}