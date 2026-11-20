#include "Mouse.h"
#include <iostream>

using namespace std;

Mouse::Mouse(string b, bool w) : brand(b), isWireless(w) {}

void Mouse::Print() const 
{
    cout << "Mouse: " << brand << (isWireless ? " (Wireless)" : " (Wired)") << endl;
}