#pragma once

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
