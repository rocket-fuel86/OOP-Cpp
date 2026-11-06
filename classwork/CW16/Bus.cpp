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
}

void Bus::announceStation(string stationName) const
{
}

void Bus::boardPassengers(int count)
{
}

void Bus::init(string model, string color, int year, double price, double speed, int wheels, int passengerCapacity, int currentPassengersCount, bool isRouteActive)
{
}

void Bus::print() const
{
	Vehicle::print();
}
