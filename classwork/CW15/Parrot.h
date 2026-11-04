#pragma once

#include "Animal.h"

class Parrot : public Animal // Parrot - наследник, производный класс, дочерний класс,класс-потомок
{
    string name;
    bool talking; // True- yes, False- NO
    double wingspan;
public:
    Parrot(string sp, double wg, string col, string fd, string nm, bool talk, double wing);
    void Print() const; // переопределение метода Print.
};