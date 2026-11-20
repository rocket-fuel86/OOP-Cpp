#include "SSD.h"
#include <iostream>

using namespace std;

SSD::SSD(string b, int c) : brand(b), capacity(c) {}

void SSD::Print() const 
{
    cout << "SSD: " << brand << " (" << capacity << " GB)" << endl;
}