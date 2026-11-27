#include "animal_world.hpp"

int main()
{
	Africa africa;
	AnimalWorld africanWorld(africa);
	africanWorld.printState();
	africanWorld.mealsHerbivores();
	africanWorld.nutritionCarnivores();
	africanWorld.printState();

	NorthAmerica northAmerica;
	AnimalWorld americanWorld(northAmerica);
	americanWorld.printState();
	americanWorld.mealsHerbivores();
	americanWorld.nutritionCarnivores();
	americanWorld.printState();

	return 0;
}