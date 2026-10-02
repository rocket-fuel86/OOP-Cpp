#include "Fraction.h"

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

int Fraction::getNumerator() const
{
	return numerator;
}

int Fraction::getDenominator() const
{
	return denominator;
}

void Fraction::setNumerator(int numerator)
{
	this->numerator = numerator;
}

void Fraction::setDenominator(int denominator)
{
	this->denominator = denominator;
}

void Fraction::print() const
{
	cout << "Numerator: " << numerator << endl
		<< "Denominator: " << denominator << endl;
}

Fraction Fraction::operator+(const Fraction& fraction) const {
    int num = (numerator * fraction.denominator) + (fraction.numerator * denominator);
    int den = denominator * fraction.denominator;
    return Fraction(num, den);
}

Fraction Fraction::operator-(const Fraction& fraction) const {
    int num = (numerator * fraction.denominator) - (fraction.numerator * denominator);
    int den = denominator * fraction.denominator;
    return Fraction(num, den);
}

Fraction Fraction::operator*(const Fraction& fraction) const {
    int num = numerator * fraction.numerator;
    int den = denominator * fraction.denominator;
    return Fraction(num, den);
}

Fraction Fraction::operator/(const Fraction& fraction) const {
    int num = numerator * fraction.denominator;
    int den = denominator * fraction.numerator;
    return Fraction(num, den);
}
