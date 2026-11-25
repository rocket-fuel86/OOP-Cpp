#pragma once

#include <iostream>
#include <string>
using namespace std;

struct IDriver
{
	virtual void Navigate() = 0;
};

class IEngine
{
public:
	virtual void Move() = 0;
};

class CombutionEngine : public IEngine
{
	string model;
public:
	CombutionEngine() {};
	CombutionEngine(string model) : model(model) {};
	virtual void Move()
	{
		cout << model << endl;
	}
};

class ElectricEngine : public IEngine
{
	string model;
public:
	ElectricEngine() {};
	ElectricEngine(string model) : model(model) {};
	virtual void Move()
	{
		cout << model << endl;
	}
};

class DieselEngine : public IEngine
{
	string model;
public:
	DieselEngine() {};
	DieselEngine(string model) : model(model) {};

	virtual void Move()
	{
		cout << "Diesel engine: " << model << endl;
	}
};

class Human : public IDriver
{
	string name;
	int age;
public:
	Human() {};
	Human(string name, int age) : name(name), age(age) {};
	void Navigate()
	{
		cout << "Navigate " << name << ' ' << age << endl;
	}
};

class Robot : public IDriver
{
	int id;
public:
	Robot() {};
	Robot(int id) : id(id) {};
	void Navigate()
	{
		cout << "Navigate " << id << endl;
	}
};

class Transport
{
	string model;
	IEngine* engine;
	IDriver* driver;
public:
	Transport();
	Transport(string model, IEngine* engine, IDriver* driver)
		: model(model), engine(engine), driver(driver) {};
	void setEngine(IEngine* engine) { this->engine = engine; };
	void setDriver(IDriver* driver) { this->driver = driver; };
	void print()
	{
		cout << "Transport: " << model << endl;

		if (engine != nullptr)
			engine->Move();

		if (driver != nullptr)
			driver->Navigate();
	}
};