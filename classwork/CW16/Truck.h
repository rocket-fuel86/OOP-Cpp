#pragma once

#include "Vehicle.h"

class Truck : public Vehicle
{
	double maxLoadCapacity;
	double currentCargoWeight;
	bool hasTrailer;
public:
	Truck();
	Truck(string model, string color, int year, double price,
		double speed, int wheels, double maxLoadCapacity, double currentCargoWeight, bool hasTrailer);
	void loadCargo(double weight);
	void unloadCargo(double weight);
	void toggleTrailer();
	void init(string model, string color, int year, double price,
		double speed, int wheels, double maxLoadCapacity, double currentCargoWeight, bool hasTrailer);
	void print() const;
	virtual void showMaxSpeed() const;
	virtual void countFuelConsumption() const;
	virtual void showWheelsCount() const;
	virtual void showPassengersCount() const;
};
