#include <iostream>
using namespace std;

class Phone
{
private:
	string brand;
	string model;
public:
	Phone()
	{
		brand = "";
		model = "";
	}
	Phone(string br, string mod)
	{
		brand = br;
		model = mod;
	}
	void printInfo()
	{
		cout << "Brand: " << brand << endl
			<< "Model: " << model << endl;
	}
	void setBrand(string br)
	{
		if (!br.empty())
		{
			brand = br;
		}
	}
	void setModel(string mod)
	{
		if (!mod.empty())
		{
			model = mod;
		}
	}
	string getBrand()
	{
		return brand;
	}
	string getModel()
	{
		return model;
	}
};

int main()
{
	Phone phone1;
	phone1.setBrand("Apple");
	phone1.setModel("iPhone 15");

	phone1.printInfo();

	cout << endl;

	Phone phone2("Samsung", "Galaxy S24");
	phone2.printInfo();

	return 0;
}