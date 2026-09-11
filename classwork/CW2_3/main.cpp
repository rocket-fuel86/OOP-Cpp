#include <iostream>
#include "Bankomat.h"

using namespace std;

int main()
{
    Bankomat atm(1234, 5000, 100, 1000);

    cout << "ID: " << atm.GetId() << endl;
    cout << "Money: " << atm.GetSum() << endl;

    atm.Deposit(2000);

    cout << "After deposit: "
        << atm.GetSum() << endl;

    atm.Withdraw(500);

    cout << "After withdraw: "
        << atm.GetSum() << endl;

    atm.Withdraw(10000); // не сработает

    cout << "After invalid withdraw: "
        << atm.GetSum() << endl;

    return 0;
}