#include "SSD.h"

SSD::SSD()
{
	brand = "";
	capacityGb = 0;
	formFactor = "";
	readSpeedGb = 0;
	writeSpeedGb = 0;
}

SSD::SSD(string brand, int capacityGb, string formFactor, int readSpeedGb, int writeSpeedGb)
{
	this->brand = brand;
	this->capacityGb = capacityGb;
	this->formFactor = formFactor;
	this->readSpeedGb = readSpeedGb;
	this->writeSpeedGb = writeSpeedGb;
}

void SSD::setBrand(string brand)
{
	this->brand = brand;
}

void SSD::setCapacityGb(int capacityGb)
{
	this->capacityGb = capacityGb;
}

void SSD::setFormFactor(string formFactor)
{
	this->formFactor = formFactor;
}

void SSD::setReadSpeedGb(int readSpeedGb)
{
	this->readSpeedGb = readSpeedGb;
}

void SSD::setWriteSpeedGb(int writeSpeedGb)
{
	this->writeSpeedGb = writeSpeedGb;
}

string SSD::getBrand()
{
	return brand;
}

int SSD::getCapacityGb()
{
	return capacityGb;
}

string SSD::getFormFactor()
{
	return formFactor;
}

int SSD::getReadSpeedGb()
{
	return readSpeedGb;
}

int SSD::getWriteSpeedGb()
{
	return writeSpeedGb;
}

void SSD::PrintInfo()
{
	cout << "Brand: " << brand << endl
		<< "Capacity in GB: " << capacityGb << endl
		<< "Form factor: " << formFactor << endl
		<< "Read speed in GB: " << readSpeedGb << endl
		<< "Write speed in GB: " << writeSpeedGb << endl;
}
