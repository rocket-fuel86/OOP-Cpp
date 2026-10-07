#include "Date.h"

int main()
{
	Date date1(2026, 10, 7);
	Date date2(2026, 10, 1);

	int days = date1 - date2;
	Date date3 = date1 + 30;

	std::cout << days << std::endl;
	date3.print();
}