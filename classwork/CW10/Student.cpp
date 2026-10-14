#include "Student.h"

Student::Student()
{
	name = "";
	age = 0;
	year = 0;
}

Student::Student(string name, short age, short year)
{
	this->name = name;
	this->age = age;
	this->year = year;
}

string Student::getName() const
{
	return name;
}

short Student::getAge() const
{
	return age;
}

short Student::getYear() const
{
	return year;
}

void Student::setName(string name)
{
	this->name = name;
}

void Student::setAge(short age)
{
	this->age = age;
}

void Student::setYear(short year)
{
	this->year = year;
}

void Student::input()
{
	cout << "Enter name: ";
	getline(cin >> ws, name);

	cout << "Enter age: ";
	cin >> age;

	cout << "Enter year: ";
	cin >> year;
}

void Student::print() const
{
	cout << "Name: " << name << endl
		<< "Age: " << age << endl
		<< "Year: " << year << endl;
}