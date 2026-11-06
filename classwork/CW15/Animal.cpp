#include "Animal.h"

Animal::Animal(string sp, double wg, string col, string fd)
{
    species = sp;
    weight = wg;
    color = col;
    food = fd;
}

void Animal::Print() const
{
    cout << "Species: " << species << endl;
    cout << "Weight: " << weight << endl;
    cout << "Color: " << color << endl;
    cout << "Food: " << food << endl;
}

void Animal::Init()
{
    species = "";
    weight = 0;
    color = "";
    food = "";
}
