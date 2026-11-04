#pragma once

#include <iostream>
#include <string>
using namespace std;

class Animal // родительский класс, базовый класс, класс-заготовка
{
protected:
    string species;// вид
    double weight; // вес
    string color;  // цвет
    string food;   // еда
public:
    Animal(string sp, double wg, string col, string fd);
    void Print() const;
};
