#pragma once

#include <iostream>
#include <string>
using namespace std;

class CPU
{
	string model;
	int cores;
	double price;
public:
	CPU();
	CPU(string model, int cores, double price);
	void setModel(string model);
	void setCores(int cores);
	void setPrice(double price);

	string getModel();
	int getCores();
	double getPrice();

	void PrintInfo();
};

