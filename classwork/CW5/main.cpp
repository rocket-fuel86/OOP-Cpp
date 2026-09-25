#include "Student.h"
#include "Reservoir.h"

int main()
{
	//Student obj1("Max", 17);
	//Student obj2("Maria", 16);
	//obj1.Print();
	//obj2.Print();

    Reservoir lake1("Black Sea", 580000, 1170000, 2212);
    Reservoir lake2("Lake Superior", 257000, 616000, 406);

    cout << "Reservoir 1:" << endl;
    lake1.Print();

    cout << endl;

    cout << "Reservoir 2:" << endl;
    lake2.Print();

    cout << endl;

    cout << "Number of created objects: "
        << Reservoir::count << endl;

    cout << endl;
}