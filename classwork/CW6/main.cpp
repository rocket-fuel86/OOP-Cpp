#include "Point.h"
#include "CityUA.h"

int main()
{
    //Point p1(10, 20);
    //cout << p1.GetX() << endl;

    //const Point p2(15, -20);
    //p2.Print();
    //cout << p2.GetX() << endl;


    CityUA city("Odesa", 1000000);

    cout << "Name: " << city.getName() << endl;
    cout << "Population: " << city.getCityPopulation() << endl;

    city.setName("Kyiv");
    city.setCityPopulation(3000000);

    cout << "\nAfter set:" << endl;
    city.Print();

    const CityUA constCity("Lviv", 700000);

    cout << "\nConst object:" << endl;
    cout << constCity.getName() << endl;
    cout << constCity.getCityPopulation() << endl;
    constCity.Print();

    cout << "\nStatic data:" << endl;
    CityUA::PrintData();
}