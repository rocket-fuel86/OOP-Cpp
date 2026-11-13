#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Bicycle.h"
#include "Jeep.h"
#include "Scooter.h"
#include "Truck.h"

int main()
{
	Vehicle* vehicle = nullptr;

	int choice = 0;

	cout << "1. Car" << endl;
	cout << "2. Bus" << endl;
	cout << "3. Bicycle" << endl;
	cout << "4. Jeep" << endl;
	cout << "5. Scooter" << endl;
	cout << "6. Truck" << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
		vehicle = new Car();
		break;
	case 2:
		vehicle = new Bus();
		break;
	case 3:
		vehicle = new Bicycle();
		break;
	case 4:
		vehicle = new Jeep();
		break;
	case 5:
		vehicle = new Scooter();
		break;
	case 6:
		vehicle = new Truck();
		break;
	default:
		break;
	}

	if (vehicle != nullptr) 
	{ 
		vehicle->print();
		vehicle->showMaxSpeed();
		vehicle->countFuelConsumption();
		vehicle->showWheelsCount();
		vehicle->showPassengersCount();
	};
}
