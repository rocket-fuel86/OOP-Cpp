#pragma once

#include "Vehicle.h"

class Scooter : public Vehicle
{
	double engineVolume;
	bool hasTrunkBox;
public:
	Scooter();
	Scooter(string model, string color, int year, double price,
		double speed, int wheels, double engineVolume, bool hasTrunkBox);
	void toggleTrunkBox();
	void startPedaling() const;
	void init(string model, string color, int year, double price, 
		double speed, int wheels, double engineVolume, bool hasTrunkBox);
	void print() const;
	virtual void showMaxSpeed() const;
	virtual void countFuelConsumption() const;
	virtual void showWheelsCount() const;
	virtual void showPassengersCount() const;
};

