#pragma once

#include <iostream>
#include <string>
using namespace std;

class Student
{
	string name;
	short age;
	short year;

	friend ostream& operator<<(ostream& out, Student& obj);
	friend istream& operator>>(istream& in, Student& obj);
public:
	Student();
	Student(string name, short age, short year);

	string getName() const;
	short getAge() const;
	short getYear() const;

	void setName(string name);
	void setAge(short age);
	void setYear(short year);

	//void input();
	//void print() const;
};