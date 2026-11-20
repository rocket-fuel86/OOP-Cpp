#pragma once
#include <string>

class Mouse 
{
    std::string brand;
    bool isWireless;
public:
    Mouse(std::string b, bool w);
    void Print() const;
};