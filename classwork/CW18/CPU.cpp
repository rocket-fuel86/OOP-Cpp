#include "CPU.h"
#include <iostream>

using namespace std;

CPU::CPU(string m, double f) : model(m), frequency(f) {}

void CPU::Print() const 
{
    cout << "CPU: " << model << " (" << frequency << " GHz)" << endl;
}