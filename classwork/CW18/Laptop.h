#pragma once
#include <string>
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Mouse.h"
#include "Web.h"

class Laptop 
{
    std::string model;
    double price;
    CPU cpu;
    SSD ssd;
    RAM ram;
    Mouse* mouse;
    Web* web;
public:
    Laptop(std::string model, double price,
        std::string cpuModel, double cpuFreq,
        std::string ssdBrand, int ssdCap,
        std::string ramType, int ramSize,
        Mouse* m = nullptr, Web* w = nullptr);

    void SetMouse(Mouse* m);
    void SetWeb(Web* w);
    void Print() const;
};