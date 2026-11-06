#pragma once

#include "Vehicle.h"

class Jeep : public Vehicle
{
	bool allWheelDrive;
	double groundClearance;
	bool hasWinch;
public:
	Jeep();
	Jeep(string model, string color, int year, double price, 
		double speed, int wheels, bool allWheelDrive, double groundClearance, bool hasWinch);
	void toggle4x4();
	void useWinch();
	void init(string model, string color, int year, double price,
		double speed, int wheels, bool allWheelDrive, double groundClearance, bool hasWinch);
	void print() const;
};

