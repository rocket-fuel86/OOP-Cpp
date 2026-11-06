#include "Car.h"

Car::Car() : Vehicle()
{
	doorCount = 0;
	isElectric = false;
	trunkState = false;
	acState = false;
}

Car::Car(string model, string color, int year, double price, double speed, int wheels, string bodyType, int doorCount, bool isElectric, bool trunkState, bool acState)
	: Vehicle(model, color, year, price, speed, wheels)
{
	this->doorCount = doorCount;
	this->isElectric = isElectric;
	this->trunkState = trunkState;
	this->acState = acState;
}

void Car::toggleTrunk()
{
	if (trunkState) cout << "Car " << model << "has closed it`s trunk" << endl;
	else cout << "Car " << model << "has opened it`s trunk" << endl;
}

void Car::toggleAirConditioner()
{
	if (acState) cout << "Car " << model << "has turned it`s AC off" << endl;
	else cout << "Car " << model << "has turned it`s AC on" << endl;
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
	this->doorCount = doorCount;
	this->isElectric = isElectric;
	this->trunkState = trunkState;
	this->acState = acState;
}

void Car::print() const
{
	Vehicle::print();
	cout << "Door count: " << doorCount << endl
		<< "Is electric: " << isElectric << endl
		<< "Trunk state: " << trunkState << endl;
}
