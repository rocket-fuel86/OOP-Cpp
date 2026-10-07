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

int Date::operator-(const Date& rhs) const
{
    int days1 = year * 365 + month * 30 + day;
    int days2 = rhs.year * 365 + rhs.month * 30 + rhs.day;

    return days1 - days2;
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

void Date::print() const
{
    std::cout << "Year: " << year << std::endl
        << "Month: " << month << std::endl
        << "Day: " << day << std::endl;
}
