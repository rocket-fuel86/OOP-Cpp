#include <iostream>
using namespace std;

class Car 
{
private:
    string model;
    string engine;
    double price = 0;
    int speed = 0;
public:
    void Move()
    {
        std::cout << "Card is driving at speed: " << speed << "km/h" << std::endl;
    }
    void Start() 
    {
        std::cout << "Start..." << std::endl;
    }
    void Stop() 
    {
        std::cout << "Stop..." << std::endl;
    }
    void SpeedAdd(int a) 
    {
        speed += a;
    }
    void SpeedMin(int a) 
    {
        speed -= a;
    }

    Car() // конструктор по умолчанию
    {
        cout << "Constructor by default" << endl;
        speed = 0;
        engine = " ";
    }
    Car(string mod, string eng, double pr, int spd)
    {
        cout << "Constructor with params" << endl;
        model = mod;
        engine = eng;
        price = pr;
        speed = spd;
    }
    void Init(string mod, string eng, double pr, int spd)
    {
        model = mod;
        engine = eng;
        price = pr;
        speed = spd;
    }
    void Print()
    {
        cout << "Model: " << model << endl
            << "Engine: " << engine << endl
            << "Price: " << price << endl;
    }
    string GetModel()
    {
        return model;
    }
    void SetModel(string mod)
    {
        if (model != "" || model != " ")
        {
            model = mod;
        }
    }
    string GetEngine()
    {
        return engine;
    }
    void SetEngine(string mod)
    {
        if (mod != "" || mod != " ")
        {
            model = mod;
        }
    }
    double GetPrice()
    {
        return price;
    }
    void SetPrice(double pr)
    {
        if (pr > 0)
        {
            price = pr;
        }
    }
    int GetSpeed()
    {
        return speed;
    }
    void SetSpeed(int spd)
    {
        speed = spd;
    }
};

int main() {
    Car obj1("Audi A5", "Engine 1", 25000, 0);
    obj1.Print();
}
