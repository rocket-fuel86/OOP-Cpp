#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Bicycle.h"
#include "Jeep.h"
#include "Scooter.h"
#include "Truck.h"

int main()
{
	Vehicle vehicle("Base Model X", "Silver", 2020, 15000.0, 0.0, 4);
	vehicle.print();
	vehicle.start();
	vehicle.accelerate(50.0);
	vehicle.turn("left");
	vehicle.turn("up");
	vehicle.slowDown(20.0);
	vehicle.slowDown(40.0);
	vehicle.stop();

	// 2. Car
	Car car("Audi A6", "Black", 2022, 55000.0, 0.0, 4, "Sedan", 4, false, false, false);
	car.print();
	car.start();
	car.accelerate(90.0);
	car.toggleAirConditioner();
	car.toggleTrunk();
	car.toggleTrunk();
	car.stop();

	// 3. Bus
	Bus bus("MAN Lion's City", "Yellow", 2021, 220000.0, 0.0, 6, 60, 50, true, false);
	bus.print();
	bus.announceStation("Main Railway Station");
	bus.toggleDoors();
	bus.boardPassengers(8);
	bus.boardPassengers(5);
	bus.toggleDoors();

	// 4. Bicycle
	Bicycle bicycle("Trek Dual Sport", "Orange", 2023, 850.0, 0.0, 2, "Hybrid", 18, true);
	bicycle.print();
	bicycle.ringBell();
	bicycle.shiftGear(7);
	bicycle.shiftGear(25);

	// 5. Jeep
	Jeep jeep("Jeep Wrangler", "Army Green", 2022, 60000.0, 0.0, 4, false, 25.0, true);
	jeep.print();
	jeep.toggle4x4();
	jeep.toggle4x4();
	jeep.useWinch();

	// 6. Scooter
	Scooter scooter("Yamaha NMAX", "Blue", 2022, 3800.0, 0.0, 2, 155.0, false);
	scooter.print();
	scooter.toggleTrunkBox();
	scooter.startPedaling();

	// 7. Truck
	Truck truck("Scania R500", "Red", 2023, 140000.0, 0.0, 6, 20000.0, 0.0, false);
	truck.print();
	truck.start();
	truck.accelerate(70.0);
	truck.loadCargo(12000.0);
	truck.loadCargo(10000.0);
	truck.toggleTrailer(); 
	truck.unloadCargo(4000.0);
	truck.unloadCargo(10000.0);
	truck.slowDown(30.0);
	truck.stop();
	truck.toggleTrailer();

	// 8. Testing default constructor & init()
	Truck defaultTruck;
	defaultTruck.init("Volvo FH", "White", 2024, 150000.0, 0.0, 8, 30000.0, 5000.0, true);
	defaultTruck.print();

	return 0;
}
