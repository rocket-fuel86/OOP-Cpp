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
	cout << "Vehicle " << model << " has started at speed " << speed << endl;
}

void Vehicle::stop()
{
	this->speed = 0.0;
	cout << "Vehicle " << model << " has stopped" << endl;
}

void Vehicle::accelerate(double speed)
{
	this->speed += speed;
	cout << "Vehicle " << model << " has accelerated to " << this->speed << endl;
}

void Vehicle::slowDown(double speed)
{
	if (speed >= this->speed)
	{
		this->speed = 0.0;
	}
	else
	{
		this->speed -= speed;
	}
	cout << "Vehicle " << model << " has slowed down to " << this->speed << endl;
}

void Vehicle::turn(string side) const
{
	if (side == "left" || side == "right")
	{
		cout << "Vehicle " << model << " has turned " << side << " side" << endl;
	}
	else
	{
		cout << "Vehicle " << model << " cannot turn " << side << " (only 'left' or 'right')" << endl;
	}
}

void Vehicle::init(string model, string color, int year, double price, double speed, int wheels)
{
	this->model = model;
	this->color = color;
	this->year = year;
	this->price = price;
	this->speed = speed;
	this->wheels = wheels;
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
