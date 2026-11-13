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

void Scooter::showMaxSpeed() const
{
	cout << "Scooter max speed is 55 km/h" << endl;
}

void Scooter::countFuelConsumption() const
{
	cout << "Scooter fuel consumption: " << (3 * speed) / 100 << " l" << endl;
}

void Scooter::showWheelsCount() const
{
	cout << "Scooter " << model << " wheels count " << wheels << endl;
}

void Scooter::showPassengersCount() const
{
	cout << "Scooters can have up to 2 passengers" << endl;
}