#include <iostream>
#include <string>

class Herbivore
{
protected:
	std::string name;
	int weight;
	bool alive;
public:
	Herbivore(const std::string& name, int weight, bool alive = true)
		: name(name), weight(weight), alive(alive) {
	}

	virtual ~Herbivore() = default;

	virtual void eatGrass() = 0;

	std::string getName() const { return name; }
	int getWeight() const { return weight; }
	bool isAlive() const { return alive; }

	void setWeight(int newWeight) { weight = newWeight; }
	void setAlive(bool isAlive) { alive = isAlive; }

	virtual void printStatus() const {
		std::cout << name << ", weight: " << weight
			<< ", status: " << (alive ? "alive" : "dead") << "\n";
	}
};

class Carnivore
{
protected:
	std::string name;
	int power;
public:
	Carnivore(const std::string& name, int power)
		: name(name), power(power) {
	}

	virtual ~Carnivore() = default;

	virtual void eat(Herbivore* herbivore) = 0;

	std::string getName() const { return name; }
	int getPower() const { return power; }

	void setPower(int newPower) {
		power = (newPower < 0) ? 0 : newPower;
	}

	virtual void printStatus() const {
		std::cout << name << ", power: " << power << "\n";
	}
};

class Wildebeest : public Herbivore
{
public:
	Wildebeest(const std::string& name = "Wildebeest", int weight = 120)
		: Herbivore(name, weight, true) {
	}

	void eatGrass() override {
		if (!alive) {
			std::cout << name << " can`t eat grass when dead.\n";
			return;
		}
		weight += 10;
		std::cout << name << " has eaten grass. New weight: " << weight << "\n";
	}
};

class Bison : public Herbivore
{
public:
	Bison(const std::string& name = "Bison", int weight = 450)
		: Herbivore(name, weight, true) {
	}

	void eatGrass() override {
		if (!alive) {
			std::cout << name << " can`t eat grass when dead.\n";
			return;
		}
		weight += 10;
		std::cout << name << " has eaten grass. New weight: " << weight << "\n";
	}
};

class Lion : public Carnivore
{
public:
	Lion(const std::string& name = "Lion", int power = 150)
		: Carnivore(name, power) {
	}

	void eat(Herbivore* herbivore) override {
		if (!herbivore) return;

		if (!herbivore->isAlive()) {
			std::cout << name << " didn't touch the prey ("
				<< herbivore->getName() << " is already dead).\n";
			return;
		}

		std::cout << name << " (power " << power << ") is hunting for "
			<< herbivore->getName() << " (weight " << herbivore->getWeight() << ")...\n";

		if (power > herbivore->getWeight()) {
			setPower(power + 10);
			herbivore->setAlive(false);
			std::cout << name << " has eaten prey succesfully! New power of the lion: " << power << "\n";
		}
		else {
			setPower(power - 10);
			std::cout << name << " failed to cope with the prey! New power of the lion: " << power << "\n";
		}
	}
};

class Wolf : public Carnivore
{
public:
	Wolf(const std::string& name = "Wolf", int power = 100)
		: Carnivore(name, power) {
	}

	void eat(Herbivore* herbivore) override {
		if (!herbivore) return;

		if (!herbivore->isAlive()) {
			std::cout << name << " didn't touch the prey ("
				<< herbivore->getName() << " is already dead).\n";
			return;
		}

		std::cout << name << " (power " << power << ") is hunting for "
			<< herbivore->getName() << " (weight " << herbivore->getWeight() << ")...\n";

		if (power > herbivore->getWeight()) {
			setPower(power + 10);
			herbivore->setAlive(false);
			std::cout << name << " has eaten prey succesfully! New power: " << power << "\n";
		}
		else {
			setPower(power - 10);
			std::cout << name << " failed to cope with the prey! New power of the wolf: " << power << "\n";
		}
	}
};

class Continent
{
public:
	virtual ~Continent() = default;

	virtual std::string getName() const = 0;
	virtual Herbivore* createHerbivore() const = 0;
	virtual Carnivore* createCarnivore() const = 0;
};

class NorthAmerica : public Continent
{
public:
	virtual std::string getName() const override { return "North America"; };

	Herbivore* createHerbivore() const override
	{
		return new Bison("Bison", 450);
	}
	Carnivore* createCarnivore() const override
	{
		return new Wolf("Wolf", 100);
	}
};

class Africa : public Continent
{
public:
	virtual std::string getName() const override { return "Africa"; };

	Herbivore* createHerbivore() const override
	{
		return new Wildebeest("Wildebeest", 120);
	}
	Carnivore* createCarnivore() const override
	{
		return new Lion("Lion", 150);
	}
};

class AnimalWorld
{
private:
	std::string continentName;
	Herbivore* herbivore;
	Carnivore* carnivore;

public:
	explicit AnimalWorld(const Continent& continent)
		: continentName(continent.getName()),
		herbivore(continent.createHerbivore()),
		carnivore(continent.createCarnivore()) {
	}

	~AnimalWorld() {
		delete herbivore;
		delete carnivore;
	}

	AnimalWorld(const AnimalWorld&) = delete;
	AnimalWorld& operator=(const AnimalWorld&) = delete;

	void mealsHerbivores() {
		std::cout << "\n--- Herbivore nutrition (" << continentName << ") ---\n";
		if (herbivore) {
			herbivore->eatGrass();
		}
	}

	void nutritionCarnivores() {
		std::cout << "\n--- Carnivore nutrition (" << continentName << ") ---\n";
		if (carnivore && herbivore) {
			carnivore->eat(herbivore);
		}
	}

	void printState() const {
		std::cout << "\n[Status: " << continentName << "]\n";
		if (herbivore) herbivore->printStatus();
		if (carnivore) carnivore->printStatus();
	}
};