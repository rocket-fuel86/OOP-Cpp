#include "Laptop.h"

Laptop::Laptop()
{
	_cpu = {};
	_gpu = {};
	_ssd = {};
	_ram = {};
	_brand = "";
	_price = 0.0;
}

Laptop::Laptop(CPU cpu, GPU gpu, SSD ssd, RAM ram, string brand, double price)
{
	_cpu = cpu;
	_gpu = gpu;
	_ssd = ssd;
	_ram = ram;
	_brand = brand;
	_price = price;
}

void Laptop::PrintInfo()
{
	_cpu.PrintInfo();
	_gpu.PrintInfo();
	_ssd.PrintInfo();
	_ram.PrintInfo();
	cout << "Brand: " << _brand << endl
		<< "Price: " << _price << endl;
}
