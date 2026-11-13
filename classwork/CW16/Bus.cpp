#include "Bus.h"

Bus::Bus() : Vehicle()
{
	passengerCapacity = 0;
	currentPassengersCount = 0;
	isRouteActive = false;
	doorsState = false;
}

Bus::Bus(string model, string color, int year, double price, 
	double speed, int wheels, int passengerCapacity, int currentPassengersCount, bool isRouteActive, bool doorsState)
	: Vehicle(model, color, year, price, speed, wheels)
{
	this->passengerCapacity = passengerCapacity;
	this->currentPassengersCount = currentPassengersCount;
	this->isRouteActive = isRouteActive;
	this->doorsState = doorsState;
}

void Bus::toggleDoors()
{
	doorsState = !doorsState;
	if (doorsState) cout << "Bus " << model << " has opened its doors" << endl;
	else cout << "Bus " << model << " has closed its doors" << endl;
}

void Bus::announceStation(string stationName) const
{
	cout << "Bus " << model << " has announced " << stationName << " station" << endl;
}

void Bus::boardPassengers(int count)
{
	if (count <= 0) return;

	if (currentPassengersCount + count <= passengerCapacity)
	{
		currentPassengersCount += count;
		cout << "Bus " << model << " has boarded " << count << " passengers. Total passengers: " << currentPassengersCount << " / " << passengerCapacity << endl;
	}
	else
	{
		cout << "Bus " << model << " cannot board " << count << " passengers (exceeds capacity of " << passengerCapacity << ")" << endl;
	}
}

void Bus::init(string model, string color, int year, double price, double speed, int wheels, int passengerCapacity, int currentPassengersCount, bool isRouteActive, bool doorsState)
{
	this->model = model;
	this->color = color;
	this->year = year;
	this->price = price;
	this->speed = speed;
	this->wheels = wheels;
	this->passengerCapacity = passengerCapacity;
	this->currentPassengersCount = currentPassengersCount;
	this->isRouteActive = isRouteActive;
	this->doorsState = doorsState;
}

void Bus::print() const
{
	Vehicle::print();
	cout << "Passenger capacity: " << passengerCapacity << endl
		<< "Current passengers count: " << currentPassengersCount << endl
		<< "Is route active: " << isRouteActive << endl
		<< "Doors state: " << doorsState << endl;
}

void Bus::showMaxSpeed() const
{
	cout << "Bus max speed is 125 km/h" << endl;
}

void Bus::countFuelConsumption() const
{
	cout << "Bus fuel consumption: " << (8 * speed) / 100 << " l" << endl;
}

void Bus::showWheelsCount() const
{
	cout << "Buses have only 4 wheels" << endl;
}

void Bus::showPassengersCount() const
{
	cout << "Bus " << model << " current passengers: " << currentPassengersCount << endl;
}