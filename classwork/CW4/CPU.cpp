#include "CPU.h"

CPU::CPU()
{
	model = "";
	cores = 0;
	price = 0.0;
}

CPU::CPU(string model, int cores, double price)
{
	this->model = model;
	this->cores = cores;
	this->price = price;
}

void CPU::setModel(string model)
{
	this->model = model;
}

void CPU::setCores(int cores)
{
	this->cores = cores;
}

void CPU::setPrice(double price)
{
	this->price = price;
}

string CPU::getModel()
{
	return model;
}

int CPU::getCores()
{
	return cores;
}

double CPU::getPrice()
{
	return price;
}

void CPU::PrintInfo()
{
	cout << "Model: " << model << endl
		<< "Cores: " << cores << endl
		<< "Price: " << price << endl;
}
