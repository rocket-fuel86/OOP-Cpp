#pragma once

#include "Animal.h"

class Dog : public Animal
{
    string name;
    bool trained;
public:
    Dog(string sp, double wg, string col, string fd, string nm, bool tr);

    void Print() const;
};
