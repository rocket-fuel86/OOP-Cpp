#include "Date.h"

Date::Date()
{
    year = 1;
    month = 1;
    day = 1;
}

Date::Date(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}

int Date::toDays() const
{
    return year * 365 + month * 30 + day;
}

int Date::getYear() const
{
    return year;
}

int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}

void Date::setYear(int year)
{
    this->year = year;
}

void Date::setMonth(int month)
{
    this->month = month;
}

void Date::setDay(int day)
{
    this->day = day;
}

int Date::operator-(const Date& rhs) const
{
    return (*this).toDays() - rhs.toDays();
}

Date Date::operator+(const int days) const
{
    Date result = *this;

    result.day += days;

    while (result.day > 30)
    {
        result.day -= 30;
        result.month++;

        if (result.month > 12)
        {
            result.month = 1;
            result.year++;
        }
    }

    return result;
}

Date Date::operator-(const int days) const
{
    Date result = *this;

    result.day -= days;

    while (result.day < 1)
    {
        result.day += 30;
        result.month--;

        if (result.month < 1)
        {
            result.month = 12;
            result.year--;
        }
    }

    return result;
}

Date& Date::operator+=(const int days)
{
    this->day += days;

    while (this->day > 30)
    {
        this->day -= 30;
        this->month++;

        if (this->month > 12)
        {
            this->month = 1;
            this->year++;
        }
    }

    return *this;
}

Date& Date::operator-=(const int days)
{
    this->day -= days;

    while (this->day < 1)
    {
        this->day += 30;
        this->month--;

        if (this->month < 1)
        {
            this->month = 12;
            this->year--;
        }
    }

    return *this;
}

Date& Date::operator++()
{
    this->day += 1;

    while (this->day > 30)
    {
        this->day -= 30;
        this->month++;

        if (this->month > 12)
        {
            this->month = 1;
            this->year++;
        }
    }

    return *this;
}

Date Date::operator++(int)
{
    Date result = *this;

    this->day += 1;

    while (this->day > 30)
    {
        this->day -= 30;
        this->month++;

        if (this->month > 12)
        {
            this->month = 1;
            this->year++;
        }
    }

    return result;
}

Date& Date::operator--()
{
    this->day -= 1;

    while (this->day < 1)
    {
        this->day += 30;
        this->month--;

        if (this->month < 1)
        {
            this->month = 12;
            this->year--;
        }
    }

    return *this;
}

Date Date::operator--(int)
{
    Date result = *this;

    this->day -= 1;

    while (this->day < 1)
    {
        this->day += 30;
        this->month--;

        if (this->month < 1)
        {
            this->month = 12;
            this->year--;
        }
    }

    return result;
}

void Date::print() const
{
    std::cout << "Year: " << year << std::endl
        << "Month: " << month << std::endl
        << "Day: " << day << std::endl;
}

void Date::shortPrint() const
{
    std::cout << year << "." << month << "." << day << std::endl;
}

bool Date::operator>(const Date& rhs) const
{
    return (*this).toDays() > rhs.toDays();
}

bool Date::operator<(const Date& rhs) const
{
    return (*this).toDays() < rhs.toDays();
}

bool Date::operator>=(const Date& rhs) const
{
    return (*this).toDays() >= rhs.toDays();
}

bool Date::operator<=(const Date& rhs) const
{
    return (*this).toDays() <= rhs.toDays();
}

bool Date::operator==(const Date& rhs) const
{
    return (*this).toDays() == rhs.toDays();
}

bool Date::operator!=(const Date& rhs) const
{
    return (*this).toDays() != rhs.toDays();
}