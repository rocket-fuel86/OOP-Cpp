#include "Car.h"

Car::Car() : Vehicle()
{
	bodyType = "";
	doorCount = 0;
	isElectric = false;
	trunkState = false;
	acState = false;
}

Car::Car(string model, string color, int year, double price, double speed, int wheels, string bodyType, int doorCount, bool isElectric, bool trunkState, bool acState)
	: Vehicle(model, color, year, price, speed, wheels)
{
	this->bodyType = bodyType;
	this->doorCount = doorCount;
	this->isElectric = isElectric;
	this->trunkState = trunkState;
	this->acState = acState;
}

void Car::toggleTrunk()
{
	trunkState = !trunkState;
	if (trunkState) cout << "Car " << model << " has opened its trunk" << endl;
	else cout << "Car " << model << " has closed its trunk" << endl;
}

void Car::toggleAirConditioner()
{
	acState = !acState;
	if (acState) cout << "Car " << model << " has turned its AC on" << endl;
	else cout << "Car " << model << " has turned its AC off" << endl;
}

void Car::init(string model, string color, int year, double price, 
	double speed, int wheels, string bodyType, int doorCount, bool isElectric, bool trunkState, bool acState)
{
	this->model = model;
	this->color = color;
	this->year = year;
	this->price = price;
	this->speed = speed;
	this->wheels = wheels;
	this->bodyType = bodyType;
	this->doorCount = doorCount;
	this->isElectric = isElectric;
	this->trunkState = trunkState;
	this->acState = acState;
}

void Car::print() const
{
	Vehicle::print();
	cout << "Body type: " << bodyType << endl
		<< "Door count: " << doorCount << endl
		<< "Is electric: " << isElectric << endl
		<< "Trunk state: " << trunkState << endl
		<< "AC state: " << acState << endl;
}

void Car::showMaxSpeed() const
{
	cout << "Car max speed is 240 km/h" << endl;
}

void Car::countFuelConsumption() const
{
	cout << "Car fuel consumption: " << (6 * speed) / 100 << " l" << endl;
}

void Car::showWheelsCount() const
{
	cout << "Cars have only 4 wheels" << endl;
}

void Car::showPassengersCount() const
{
	cout << "Cars can have up to 4 passengers" << endl;
}