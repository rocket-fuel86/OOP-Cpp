#include "Jeep.h"

Jeep::Jeep() : Vehicle()
{
	allWheelDrive = false;
	groundClearance = 0.0;
	hasWinch = false;
}

Jeep::Jeep(string model, string color, int year, double price, double speed, int wheels, bool allWheelDrive, double groundClearance, bool hasWinch)
	: Vehicle(model, color, year, price, speed, wheels)
{
	this->allWheelDrive = allWheelDrive;
	this->groundClearance = groundClearance;
	this->hasWinch = hasWinch;
}

void Jeep::toggle4x4()
{
	allWheelDrive = !allWheelDrive;

	if (allWheelDrive) cout << "Jeep " << model << " has turned 4x4 mode on" << endl;
	else cout << "Jeep " << model << " has turned 4x4 mode off" << endl;
}

void Jeep::useWinch()
{
	if (hasWinch) cout << "Jeep " << model << " has used its winch" << endl;
	else cout << "Jeep " << model << " doesn't have a winch" << endl;
}

void Jeep::init(string model, string color, int year, double price, double speed, int wheels, bool allWheelDrive, double groundClearance, bool hasWinch)
{
	this->model = model;
	this->color = color;
	this->year = year;
	this->price = price;
	this->speed = speed;
	this->wheels = wheels;
	this->allWheelDrive = allWheelDrive;
	this->groundClearance = groundClearance;
	this->hasWinch = hasWinch;
}

void Jeep::print() const
{
	Vehicle::print();
	cout << "All wheel drive: " << allWheelDrive << endl;
	cout << "Ground clearance: " << groundClearance << endl;
	cout << "Has winch: " << hasWinch << endl;
}

void Jeep::showMaxSpeed() const
{
	cout << "Jeep max speed is 200 km/h" << endl;
}

void Jeep::countFuelConsumption() const
{
	cout << "Jeep fuel consumption: " << (7 * speed) / 100 << " l" << endl;
}

void Jeep::showWheelsCount() const
{
	cout << "Jeeps have only 4 wheels" << endl;
}

void Jeep::showPassengersCount() const
{
	cout << "Jeeps can have up to 6 passengers" << endl;
}