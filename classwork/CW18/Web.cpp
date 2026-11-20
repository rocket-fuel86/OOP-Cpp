#include "Web.h"
#include <iostream>

using namespace std;

Web::Web(string res) : resolution(res) {}

void Web::Print() const 
{
    cout << "Web-camera: " << resolution << endl;
}