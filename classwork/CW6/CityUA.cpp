#include "CityUA.h"

string CityUA::language = "Ukrainian";
string CityUA::capital = "Kyiv";
string CityUA::president = "Volodymir Zelenski";
int CityUA::population_country = 45000000;
int CityUA::Count = 0;

CityUA::CityUA()
{
    Count++;
    name = "";
    population_city = 0;
}

CityUA::CityUA(string n, int pop)
{
    Count++;
    name = n;
    population_city = pop;
}

void CityUA::Init(string n, int pop)
{
    name = n;
    population_city = pop;
}

void CityUA::Print() const
{
    cout << "Name: " << name << endl
        << "City population: " << population_city << endl;
}

// GET
string CityUA::getName() const
{
    return name;
}

int CityUA::getCityPopulation() const
{
    return population_city;
}

// SET
void CityUA::setName(string name)
{
    this->name = name;
}

void CityUA::setCityPopulation(int population)
{
    population_city = population;
}

void CityUA::PrintData()
{
    cout << "Language: " << language << endl
        << "Capital: " << capital << endl
        << "President: " << president << endl
        << "Country population: " << population_country << endl
        << "Count: " << Count << endl;
}