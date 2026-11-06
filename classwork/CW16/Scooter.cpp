#include "Scooter.h"

Scooter::Scooter() : Vehicle()
{
	engineVolume = 0.0;
	hasTrunkBox = false;
}

Scooter::Scooter(string model, string color, int year, double price, double speed, int wheels, double engineVolume, bool hasTrunkBox)
	: Vehicle(model, color, year, price, speed, wheels)
{
	this->engineVolume = engineVolume;
	this->hasTrunkBox = hasTrunkBox;
}

void Scooter::toggleTrunkBox()
{
	cout << "Scooter " << model << " has toggled trunk box" << endl;
	
	hasTrunkBox = !hasTrunkBox;

	if (hasTrunkBox) cout << "Scooter " << model << " now has trunk box" << endl;
	else cout << "Scooter " << model << " doesn't have trunk box anymore" << endl;
}

void Scooter::startPedaling() const
{
	cout << "Scooter " << model << " has started pedaling" << endl;
}

void Scooter::init(string model, string color, int year, 
	double price, double speed, int wheels, double engineVolume, bool hasTrunkBox)
{
	this->model = model;
	this->color = color;
	this->year = year;
	this->price = price;
	this->speed = speed;
	this->wheels = wheels;
	this->engineVolume = engineVolume;
	this->hasTrunkBox = hasTrunkBox;
}

void Scooter::print() const
{
	Vehicle::print();
	cout << "Engine volume: " << engineVolume << endl
		<< "Has trunk box: " << hasTrunkBox << endl;
}
