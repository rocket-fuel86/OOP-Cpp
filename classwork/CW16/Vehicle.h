#pragma once

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
	string model;
	string color;
	int year;
	double price;
	double speed;
	int wheels;
public:
	Vehicle();
	Vehicle(string model, string color, int year, double price, double speed, int wheels);
	void start() const;
	void stop();
	void accelerate(double speed);
	void slowDown(double speed);
	void turn(string side) const;
	void init(string model, string color, int year, double price, double speed, int wheels);
	virtual void print() const;
	virtual void showMaxSpeed() const = 0;
	virtual void countFuelConsumption() const = 0;
	virtual void showWheelsCount() const = 0;
	virtual void showPassengersCount() const = 0;
};
