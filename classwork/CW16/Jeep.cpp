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

	if (allWheelDrive) cout << "Jeep " << model << "has turned 4x4 mode off";
	else cout << "Jeep " << model << "has turned 4x4 mode on";
}

void Jeep::useWinch()
{
	if (hasWinch) cout << "Jeep " << model << " has used its winch" << endl;
	else cout << "Jeep " << model << " doesn`t have winch" << endl;
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
