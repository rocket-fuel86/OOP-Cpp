#pragma once
#include <string>

class RAM 
{
    std::string type;
    int size;
public:
    RAM(std::string t = "DDR4", int s = 0);
    void Print() const;
};