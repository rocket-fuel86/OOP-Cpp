#include "Laptop.h"

int main()
{
    CPU cpu1("Intel Core i7", 8, 25000.0);
    GPU gpu1("NVIDIA", "RTX 4060", 8, 45000.0);
    SSD ssd1("Samsung", 512, "M.2", 3500, 3000);
    RAM ram1("Kingston", 5, 4800, 16000);

    Laptop laptop1(cpu1, gpu1, ssd1, ram1, "ASUS", 90000.0);
    laptop1.PrintInfo();

    cout << "--------------------------------" << endl;

    CPU cpu2("AMD Ryzen 5", 6, 14000.0);
    GPU gpu2("AMD", "RX 6600", 8, 25000.0);
    SSD ssd2("Kingston", 1024, "M.2", 3000, 2500);
    RAM ram2("Kingston", 4, 3200, 16000);

    Laptop laptop2(cpu2, gpu2, ssd2, ram2, "HP", 60000.0);
    laptop2.PrintInfo();

    return 0;
}