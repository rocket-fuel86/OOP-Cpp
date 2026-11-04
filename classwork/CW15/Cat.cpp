#include "Cat.h"

Cat::Cat(string sp, double wg, string col, string fd, string nm, bool in) 
    : Animal(sp, wg, col, fd)
{
    name = nm;
    indoor = in;
}

void Cat::Print() const
{
    Animal::Print();
    cout << "Name: " << name << endl;
    cout << "Indoor: " << indoor << endl << endl;
}