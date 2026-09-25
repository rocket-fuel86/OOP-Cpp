#pragma once

#include "CPU.h"
#include "GPU.h"
#include "SSD.h"
#include "RAM.h"

class Laptop
{
	CPU _cpu;
	GPU _gpu;
	SSD _ssd;
	RAM _ram;
	string _brand;
	double _price;
public:
	Laptop();
	Laptop(CPU cpu, GPU gpu, SSD ssd, RAM ram, string brand, double price);
	void PrintInfo();
};

