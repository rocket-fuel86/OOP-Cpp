#pragma once

#include "Vehicle.h"

class Car : public Vehicle
{
	string bodyType;
	int doorCount;
	bool isElectric;

	bool trunkState;
	bool acState;
public:
	Car();
	Car(string model, string color, int year, double price,
		double speed, int wheels, string bodyType, int doorCount, bool isElectric, bool trunkState, bool acState);
	void toggleTrunk();
	void toggleAirConditioner();
	void init(string model, string color, int year, double price, 
		double speed, int wheels, string bodyType, int doorCount, bool isElectric, bool trunkState, bool acState);
	void print() const;
	virtual void showMaxSpeed() const;
	virtual void countFuelConsumption() const;
	virtual void showWheelsCount() const;
	virtual void showPassengersCount() const;
};

