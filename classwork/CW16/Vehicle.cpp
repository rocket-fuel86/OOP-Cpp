#include "Vehicle.h"

Vehicle::Vehicle()
{
	model = "";
	color = "";
	year = 0;
	price = 0.0;
	speed = 0.0;
	wheels = 0;
}

Vehicle::Vehicle(string model, string color, int year, double price, double speed, int wheels)
{
	this->model = model;
	this->color = color;
	this->year = year;
	this->price = price;
	this->speed = speed;
	this->wheels = wheels;
}

void Vehicle::start() const
{
	cout << "Vehicle " << model << "has started at speed " << speed << endl;
}

void Vehicle::stop() const
{
	cout << "Vehicle " << model << "has stopped" << endl;
}

void Vehicle::accelerate(double speed)
{
	this->speed += speed;
	cout << "Vehicle " << model << "has accelerated to " << this->speed << endl;
}

void Vehicle::slowDown(double speed)
{
	if (speed > this->speed) return;
	this->speed -= speed;
}

void Vehicle::turn(string side) const
{
	if (side == "left" || side == "right")
	{
		cout << "Vehicle " << model << "has turned " << side << " side" << endl;
	}
}

void Vehicle::init()
{
	model = "";
	color = "";
	year = 0;
	price = 0.0;
	speed = 0.0;
	wheels = 0;
}

void Vehicle::print() const
{
	cout << "Model: " << model << endl
		<< "Color: " << color << endl
		<< "Year: " << year << endl
		<< "Price: " << price << endl
		<< "Speed: " << speed << endl
		<< "Wheels: " << wheels << endl;
}
