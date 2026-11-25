#include "library.h"

int main()
{
	Transport t1("Audi A5", new ElectricEngine(), new Robot());
	t1.print();

	t1.setEngine(new CombutionEngine());
	t1.setDriver(new Robot());

	t1.print();

	t1.setEngine(new DieselEngine());
	t1.setDriver(new Human());

	t1.print();
}