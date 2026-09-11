#include "Country.h"

#include <iostream>
using namespace std;

Country::Country()
{
	name = "";
	capital = "";
	population = 0;
}

Country::Country(string n, string c, int p)
{
	name = n;
	capital = c;
	population = p;
}

void Country::Init(string n, string c, int p)
{
	name = n;
	capital = c;
	population = p;
}

void Country::Print()
{
	cout << "Name: " << name << endl
		<< "Capital: " << capital << endl
		<< "Population: " << population << endl;
}

void Country::SetName(string n)
{
	if (!n.empty())
	{
		name = n;
	}
}

void Country::SetCapital(string c)
{
	if (!c.empty())
	{
		capital = c;
	}
}

void Country::SetPopulation(int p)
{
	if (!(p == 0))
	{
		population = p;
	}
}

string Country::GetName()
{
	return name;
}

string Country::GetCapital()
{
	return capital;
}

int Country::GetPopulation()
{
	return population;
}
