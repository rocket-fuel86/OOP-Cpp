#pragma once

#include <iostream>
#include <string>
using namespace std;

class CityUA
{
    string name;
    int population_city;

    static string language;
    static string capital;
    static string president;
    static int population_country;
    static int Count;

public:
    CityUA();
    CityUA(string n, int pop);

    void Init(string n, int pop);
    void Print() const;

    // Аксессоры
    string getName() const;
    int getCityPopulation() const;

    void setName(string name);
    void setCityPopulation(int population);

    static void PrintData();
};