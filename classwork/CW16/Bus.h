#pragma once

#include "Vehicle.h"

class Bus : public Vehicle
{
	int passengerCapacity;
	int currentPassengersCount;
	bool isRouteActive;

	bool doorsState;
public:
	Bus();
	Bus(string model, string color, int year, double price, 
		double speed, int wheels, int passengerCapacity, int currentPassengersCount, bool isRouteActive, bool doorsState);
	void toggleDoors();
	void announceStation(string stationName) const;
	void boardPassengers(int count);
	void init(string model, string color, int year, double price,
		double speed, int wheels, int passengerCapacity, int currentPassengersCount, bool isRouteActive, bool doorsState);
	void print() const;
};
