#pragma once
#include <string>

class SSD 
{
    std::string brand;
    int capacity;
public:
    SSD(std::string b = "Unknown", int c = 0);
    void Print() const;
};