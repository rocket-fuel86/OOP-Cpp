#pragma once

#include <iostream>

class Date
{
	int year;
	int month;
	int day;
public:
	Date();
	Date(int year, int month, int day);

	int operator-(const Date& rhs) const;
	Date operator+(const int days) const;

	void print() const;
};

