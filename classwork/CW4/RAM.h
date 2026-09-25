#pragma once

#include <iostream>
#include <string>
using namespace std;

class RAM
{
	string brand;
	int ddr;
	int speed;
	int capacity;
public:
	RAM();
	RAM(string brand, int ddr, int speed, int capacity);
	void setBrand(string brand);
	void setDdr(int ddr);
	void setSpeed(int speed);
	void setCapacity(int capacity);

	string getBrand();
	int getDdr();
	int getSpeed();
	int getCapacity();

	void PrintInfo();
};

