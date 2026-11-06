#include "Truck.h"

Truck::Truck() : Vehicle()
{
	maxLoadCapacity = 0.0;
	currentCargoWeight = 0.0;
	hasTrailer = false;
}

Truck::Truck(string model, string color, int year, double price,
	double speed, int wheels, double maxLoadCapacity, double currentCargoWeight, bool hasTrailer)
	: Vehicle(model, color, year, price, speed, wheels)
{
	this->maxLoadCapacity = maxLoadCapacity;
	this->currentCargoWeight = currentCargoWeight;
	this->hasTrailer = hasTrailer;
}

void Truck::loadCargo(double weight)
{
	if (weight <= 0)
	{
		cout << "Invalid cargo weight to load." << endl;
		return;
	}

	if (currentCargoWeight + weight <= maxLoadCapacity)
	{
		currentCargoWeight += weight;
		cout << "Truck " << model << " has loaded " << weight << " kg. Current cargo: " << currentCargoWeight << " / " << maxLoadCapacity << " kg." << endl;
	}
	else
	{
		cout << "Truck " << model << " cannot load " << weight << " kg. Exceeds capacity of " << maxLoadCapacity << " kg." << endl;
	}
}

void Truck::unloadCargo(double weight)
{
	if (weight <= 0)
	{
		cout << "Invalid cargo weight to unload." << endl;
		return;
	}

	if (weight <= currentCargoWeight)
	{
		currentCargoWeight -= weight;
		cout << "Truck " << model << " has unloaded " << weight << " kg. Current cargo: " << currentCargoWeight << " kg." << endl;
	}
	else
	{
		cout << "Truck " << model << " cannot unload " << weight << " kg (only " << currentCargoWeight << " kg available)." << endl;
	}
}

void Truck::toggleTrailer()
{
	hasTrailer = !hasTrailer;
	if (hasTrailer)
	{
		cout << "Truck " << model << " has attached a trailer." << endl;
	}
	else
	{
		cout << "Truck " << model << " has detached the trailer." << endl;
	}
}

void Truck::init(string model, string color, int year, double price,
	double speed, int wheels, double maxLoadCapacity, double currentCargoWeight, bool hasTrailer)
{
	this->model = model;
	this->color = color;
	this->year = year;
	this->price = price;
	this->speed = speed;
	this->wheels = wheels;
	this->maxLoadCapacity = maxLoadCapacity;
	this->currentCargoWeight = currentCargoWeight;
	this->hasTrailer = hasTrailer;
}

void Truck::print() const
{
	Vehicle::print();
	cout << "Max load capacity: " << maxLoadCapacity << endl
		<< "Current cargo weight: " << currentCargoWeight << endl
		<< "Has trailer: " << hasTrailer << endl;
}
