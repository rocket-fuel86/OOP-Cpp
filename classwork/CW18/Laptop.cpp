#include "Laptop.h"
#include <iostream>

using namespace std;

Laptop::Laptop(string model, double price,
    string cpuModel, double cpuFreq,
    string ssdBrand, int ssdCap,
    string ramType, int ramSize,
    Mouse* m, Web* w)
    : model(model), price(price),
    cpu(cpuModel, cpuFreq),
    ssd(ssdBrand, ssdCap),
    ram(ramType, ramSize),
    mouse(m), web(w) {
}

void Laptop::SetMouse(Mouse* m) 
{
    mouse = m;
}

void Laptop::SetWeb(Web* w) 
{
    web = w;
}

void Laptop::Print() const 
{
    cout << "=== Laptop: " << model << " | Price: $" << price << " ===" << endl;
    cpu.Print();
    ssd.Print();
    ram.Print();

    if (mouse != nullptr) 
    {
        mouse->Print();
    }
    else 
    {
        cout << "Mouse: Not connected" << endl;
    }

    if (web != nullptr) 
    {
        web->Print();
    }
    else 
    {
        cout << "Web-camera: Not connected" << endl;
    }
    cout << "==========================================" << endl;
}