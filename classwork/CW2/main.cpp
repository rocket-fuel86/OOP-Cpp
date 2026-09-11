#include <iostream>
#include <string>
using namespace std;

class Country
{
	string name;
	string capital;
	int population = 0;
public:
	Country();
	Country(string n, string c, int p);
	void Init(string n, string c, int p);
	void Print();

	void SetName(string n);
	void SetCapital(string c);
	void SetPopulation(int p);

	string GetName();
	string GetCapital();
	int GetPopulation();
};

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
