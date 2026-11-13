#include "Bicycle.h"

Bicycle::Bicycle() : Vehicle()
{
	bikeType = "";
	gearCount = 0;
	hasSuspension = false;
}

Bicycle::Bicycle(string model, string color, int year, double price, double speed, int wheels, string bikeType, int gearCount, bool hasSuspension)
	: Vehicle(model, color, year, price, speed, wheels)
{
	this->bikeType = bikeType;
	this->gearCount = gearCount;
	this->hasSuspension = hasSuspension;
}

void Bicycle::shiftGear(int gear)
{
	if (gear <= gearCount && gear >= 0)
	{
		cout << "Bicycle " << model << " has shifted its gear to " << gear << endl;
	}
	else
	{
		cout << "Bicycle " << model << " cannot shift to gear " << gear << " (valid range: 0 - " << gearCount << ")" << endl;
	}
}

void Bicycle::ringBell() const
{
	cout << "Ring!" << endl;
}

void Bicycle::init(string model, string color, int year, double price, double speed, int wheels, string bikeType, int gearCount, bool hasSuspension)
{
	this->model = model;
	this->color = color;
	this->year = year;
	this->price = price;
	this->speed = speed;
	this->wheels = wheels;
	this->bikeType = bikeType;
	this->gearCount = gearCount;
	this->hasSuspension = hasSuspension;
}

void Bicycle::print() const
{
	Vehicle::print();
	cout << "Bike type: " << bikeType << endl
		<< "Gear count: " << gearCount << endl
		<< "Has suspension: " << hasSuspension << endl;
}

void Bicycle::showMaxSpeed() const
{
	cout << "Bicycle max speed is 82 km/h" << endl;
}

void Bicycle::countFuelConsumption() const
{
	cout << "Bicycles don`t consume fuel" << endl;
}

void Bicycle::showWheelsCount() const
{
	cout << "Bicycles have only 2 wheels" << endl;
}

void Bicycle::showPassengersCount() const
{
	cout << "Bicycles can have up to 2 passengers" << endl;
}
