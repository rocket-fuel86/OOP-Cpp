#include <iostream>
using namespace std;

class Phone
{
    string brand;
    string model;
    double price;
    //const int YEAR;
    //const string COLOR;
    //const string COUNTRY;
    //const int RAM;
public:
    Phone()
    {
        brand = " ";
        model = " ";
        price = 0.0;
    }
    Phone(string br, string mod)
    {
        brand = br;
        model = mod;
    }
    Phone(string br, string mod, double pr): Phone(br, mod)
    {
        //brand = br;
        //model = mod;
        price = pr;
    }
    //Phone(): YEAR(2020), COLOR("Black"), COUNTRY("USA"), RAM(8192)
    //{
    //    brand = " ";
    //    model = " ";
    //    price = 0.0;
    //}
    //Phone(string br, string mod, double pr, int year, string color, string country, int ram): 
    //    YEAR(year), 
    //    COLOR(color), 
    //    COUNTRY(country), 
    //    RAM(ram),
    //    price(pr), 
    //    brand(br), 
    //    model(mod) {}
    void PrintInfo()
    {
        cout << "Brand: " << brand << endl
            << "Model: " << model << endl
            << "Price: " << price << endl;
            //<< "Year: " << YEAR << endl;
    }
    void SetBrand(string br)
    {
        brand = br;
    }
    string GetBrand()
    {
        return brand;
    }
};
int main()
{
    //Phone obj1; // конструктор по умолчанию
    //Phone obj2("Samsung", "A5", 25000, 2026, "White", "Korea", 8192);
    //obj2.PrintInfo();
    //Phone obj3("Samsung", "A5", 25000, 2012, "Black", "Korea", 4096);
    //obj3.PrintInfo();
}