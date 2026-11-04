#include "Dog.h"

Dog::Dog(string sp, double wg, string col, string fd, string nm, bool tr)
    : Animal(sp, wg, col, fd)
{
    name = nm;
    trained = tr;
}

void Dog::Print() const
{
    Animal::Print();
    cout << "Name: " << name << endl;
    cout << "Trained: " << trained << endl << endl;
}
