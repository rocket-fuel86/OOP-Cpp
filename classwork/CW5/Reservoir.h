#pragma once

#include <iostream>
#include <string>
using namespace std;

class Reservoir
{
	string _name;
	double _width;
	double _length;
	double _maxDepth;
public:
	static int count;

	Reservoir();
	Reservoir(string name, double width, double length, double maxDepth);

	double volumeOfWater();

	void setName(string name);
	void setWidth(double width);
	void setLength(double length);
	void setMaxDepth(double maxDepth);

	string getName();
	double getWidth();
	double getLength();
	double getMaxDepth();

	void Print();
};

