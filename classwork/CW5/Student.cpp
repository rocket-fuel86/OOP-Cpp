#include "Student.h"

string Student::groupName = "CSC-21";
int Student::counter = 0;

Student::Student()
{
	counter++;
}

Student::Student(string n, int a)
{
	counter++;
	name = n;
	age = a;
}

void Student::Print()
{
	cout << "Name: " << name << endl
		<< "Age: " << age << endl;
}

void Student::PrintGroup()
{
	cout << "Group: " << groupName << endl;
}
