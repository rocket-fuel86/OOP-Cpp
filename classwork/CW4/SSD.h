#pragma once

#include <iostream>
#include <string>
using namespace std;

class SSD
{
	string brand;
	int capacityGb;
	string formFactor;
	int readSpeedGb;
	int writeSpeedGb;
public:
	SSD();
	SSD(string brand, int capacityGb, string formFactor, int readSpeedGb, int writeSpeedGb);
	
	void setBrand(string brand);
	void setCapacityGb(int capacityGb);
	void setFormFactor(string formFactor);
	void setReadSpeedGb(int readSpeedGb);
	void setWriteSpeedGb(int writeSpeedGb);

	string getBrand();
	int getCapacityGb();
	string getFormFactor();
	int getReadSpeedGb();
	int getWriteSpeedGb();
	
	void PrintInfo();
};

