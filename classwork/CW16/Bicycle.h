#pragma once

#include "Vehicle.h"

class Bicycle : public Vehicle
{
	string bikeType;
	int gearCount;
	bool hasSuspension;
public:
	Bicycle();
	Bicycle(string model, string color, int year, double price, 
		double speed, int wheels, string bikeType, int gearCount, bool hasSuspension);
	void shiftGear(int gear);
	void ringBell() const;
	void init(string model, string color, int year, double price,
		double speed, int wheels, string bikeType, int gearCount, bool hasSuspension);
	void print() const;
};

