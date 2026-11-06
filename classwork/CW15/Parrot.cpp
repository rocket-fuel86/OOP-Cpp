#include "Parrot.h"

Parrot::Parrot(string sp, double wg, string col, string fd, string nm, bool talk, double wing)
    : Animal(sp, wg, col, fd)
{
    name = nm;
    talking = talk;
    wingspan = wing;
}

void Parrot::Print() const
{
    Animal::Print();
    cout << "Name: " << name << endl;
    cout << "Talking: " << talking << endl;
    cout << "Wingspan: " << wingspan << "cm" << endl << endl;
}

void Parrot::Init(string sp, double wg, string col, string fd, string nm, bool talk, double wing)
{
    species = sp;
    weight = wg;
    color = col;
    food = fd;
    name = nm;
    talking = talk;
    wingspan = wing;
}
