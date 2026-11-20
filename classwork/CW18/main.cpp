#include "Laptop.h"
#include "Mouse.h"
#include "Web.h"

int main() 
{
    Mouse logitech("Logitech MX Master 3", true);
    Web c920("1080p FullHD");

    Laptop myLaptop("ASUS ROG", 1500.0, "Intel Core i7", 3.8, "Samsung", 1024, "DDR5", 16);

    myLaptop.Print();

    myLaptop.SetMouse(&logitech);
    myLaptop.SetWeb(&c920);

    myLaptop.Print();

    return 0;
}