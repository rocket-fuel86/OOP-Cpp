#include "RAM.h"

RAM::RAM()
{
	brand = "";
	ddr = 0;
	speed = 0;
	capacity = 0;
}

RAM::RAM(string brand, int ddr, int speed, int capacity)
{
	this->brand = brand;
	this->ddr = ddr;
	this->speed = speed;
	this->capacity = 0;
}

void RAM::setBrand(string brand)
{
	this->brand = brand;
}

void RAM::setDdr(int ddr)
{
	this->ddr = ddr;
}

void RAM::setSpeed(int speed)
{
	this->speed = speed;
}

void RAM::setCapacity(int capacity)
{
	this->capacity = capacity;
}

string RAM::getBrand()
{
	return brand;
}

int RAM::getDdr()
{
	return ddr;
}

int RAM::getSpeed()
{
	return speed;
}

int RAM::getCapacity()
{
	return capacity;
}

void RAM::PrintInfo()
{
	cout << "Brand: " << brand << endl
		<< "DDR: " << ddr << endl
		<< "Speed: " << speed << endl
		<< "Capacity: " << capacity << endl;
}