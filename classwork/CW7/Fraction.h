#pragma once

#include <iostream>
#include <string>
using namespace std;

class Fraction
{
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int numerator, int denominator);

	int getNumerator() const;
	int getDenominator() const;

	void setNumerator(int numerator);
	void setDenominator(int denominator);

	void print() const;

	Fraction operator+(const Fraction& fraction) const;
	Fraction operator-(const Fraction& fraction) const;
	Fraction operator*(const Fraction& fraction) const;
	Fraction operator/(const Fraction& fraction) const;
};
