#include "Reservoir.h"

int Reservoir::count = 0;

Reservoir::Reservoir()
{
	count++;
	_name = "";
	_width = 0.0;
	_length = 0.0;
	_maxDepth = 0.0;
}

Reservoir::Reservoir(string name, double width, double length, double maxDepth)
{
	count++;
	_name = name;
	_width = width;
	_length = length;
	_maxDepth = maxDepth;
}

double Reservoir::volumeOfWater()
{
	return _width * _length * _maxDepth;
}

void Reservoir::setName(string name)
{
	_name = name;
}

void Reservoir::setWidth(double width)
{
	_width = width;
}

void Reservoir::setLength(double length)
{
	_length = length;
}

void Reservoir::setMaxDepth(double maxDepth)
{
	_maxDepth = maxDepth;
}

string Reservoir::getName()
{
	return _name;
}

double Reservoir::getWidth()
{
	return _width;
}

double Reservoir::getLength()
{
	return _length;
}

double Reservoir::getMaxDepth()
{
	return _maxDepth;
}

void Reservoir::Print()
{
	cout << "Name: " << _name << endl
		<< "Width: " << _width << endl
		<< "Length: " << _length << endl
		<< "Max depth: " << _maxDepth << endl;
}
