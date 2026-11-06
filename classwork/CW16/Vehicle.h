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
	virtual ~Vehicle() = default;
	void start() const;
	void stop();
	void accelerate(double speed);
	void slowDown(double speed);
	void turn(string side) const;
	void init(string model = "", string color = "", int year = 0, double price = 0.0, double speed = 0.0, int wheels = 0);
	virtual void print() const;
};
