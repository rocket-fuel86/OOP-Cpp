#include "GPU.h"

GPU::GPU() : brand()
{
	brand = "";
	model = "";
	vram = 0;
	price = 0.0;
}

GPU::GPU(string brand, string model, int vram, double price)
{
	this->brand = brand;
	this->model = model;
	this->vram = vram;
	this->price = price;
}

void GPU::setBrand(string brand)
{
	this->brand = brand;
}

void GPU::setModel(string model)
{
	this->model = model;
}

void GPU::setVram(int vram)
{
	this->vram = vram;
}

void GPU::setPrice(double price)
{
	this->price = price;
}

string GPU::getBrand()
{
	return brand;
}

string GPU::getModel()
{
	return model;
}

int GPU::getVram()
{
	return vram;
}

double GPU::getPrice()
{
	return price;
}

void GPU::PrintInfo()
{
	cout << "Brand: " << brand << endl
		<< "Model: " << model << endl
		<< "VRAM: " << vram << endl
		<< "Price: " << price << endl;
}
