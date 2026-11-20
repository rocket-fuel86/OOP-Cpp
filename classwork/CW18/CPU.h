#pragma once

#include <string>

class CPU 
{
    std::string model;
    double frequency;
public:
    CPU(std::string m = "Unknown", double f = 0.0);
    void Print() const;
};