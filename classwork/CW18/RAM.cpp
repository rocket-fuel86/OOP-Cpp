#include "RAM.h"
#include <iostream>

using namespace std;

RAM::RAM(string t, int s) : type(t), size(s) {}

void RAM::Print() const 
{
    cout << "RAM: " << size << " GB (" << type << ")" << endl;
}