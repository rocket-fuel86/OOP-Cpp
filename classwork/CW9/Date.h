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

	int toDays() const;

	int getYear() const;
	int getMonth() const;
	int getDay() const;

	void setYear(int year);
	void setMonth(int month);
	void setDay(int day);

	void print() const;
	void shortPrint() const;

	int operator-(const Date& rhs) const;

	Date operator+(const int days) const;
	Date operator-(const int days) const;

	Date& operator+=(const int days);
	Date& operator-=(const int days);

	Date& operator++();
	Date operator++(int);

	Date& operator--();
	Date operator--(int);

	bool operator>(const Date& rhs) const;
	bool operator<(const Date& rhs) const;
	bool operator>=(const Date& rhs) const;
	bool operator<=(const Date& rhs) const;
	bool operator==(const Date& rhs) const;
	bool operator!=(const Date& rhs) const;
};
