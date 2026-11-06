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
	void stop() const;
	void accelerate(double speed);
	void slowDown(double speed);
	void turn(string side) const;
	void init();
	void print() const;
};

