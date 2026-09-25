#pragma once

#include <iostream>
#include <string>
using namespace std;

class GPU
{
	string brand;
	string model;
	int vram;
	double price;
public:
	GPU();
	GPU(string brand, string model, int vram, double price);
	void setBrand(string brand);
	void setModel(string model);
	void setVram(int vram);
	void setPrice(double price);

	string getBrand();
	string getModel();
	int getVram();
	double getPrice();

	void PrintInfo();
};

