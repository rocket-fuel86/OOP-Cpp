#pragma once

#include "Animal.h"

class Cat : public Animal
{
    string name;
    bool indoor;
public:
    Cat(string sp, double wg, string col, string fd, string nm, bool in);

    void Print() const;
};
