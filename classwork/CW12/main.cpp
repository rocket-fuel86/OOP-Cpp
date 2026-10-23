#include "MyArr.h"
#include "Pair.h"

int main()
{
	MyArray<int> obj1(5);
	MyArray<char> obj2(10);
	MyArray<double> obj3(4);

	Pair<string,int> p1("Test", 17);
	Pair<string,int> p1_test("Test", 20);
	Pair<string,double> p2("Test", 3.99);
	Pair<int,double> p3(1, 10.12);

	p1.show();
	p2.show();
	p3.show();

	p1.copyFrom(p1_test);

	p1.show();

	p3.clear();

	obj1.Init();
	obj1.Print();

	obj2.Init();
	obj2.Print();

	obj3.Init();
	obj3.Print();
}