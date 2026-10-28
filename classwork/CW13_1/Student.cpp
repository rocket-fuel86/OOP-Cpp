#include "Student.h"

Student::Student()
{
	name = "";
	surname = "";
	university = "";
	age = 0;
}

Student::Student(string name, string surname, string university, int age)
{
	this->name = name;
	this->surname = surname;
	this->university = university;
	this->age = age;
}

void Student::Init()
{
	cout << "Name: ";
	getline(cin, this->name);

	cout << "Surname: ";
	getline(cin, this->surname);

	cout << "University: ";
	getline(cin, this->university);

	cout << "Age: ";
	cin >> this->age;

	cin.ignore();
}

void Student::print() const
{
	cout << "Name: " << this->name << endl
		<< "Surname: " << this->surname << endl
		<< "University: " << this->university << endl
		<< "Age: " << this->age << endl;
}

void Student::WriteFile(string file) const
{
	ofstream write(file, ios::app);

	if (!write.is_open())
	{
		cout << "Error opening file!" << endl;
		return;
	}

	write << "Name: " << this->name
		<< ", Surname: " << this->surname
		<< ", University: " << this->university
		<< ", Age: " << this->age << endl;
}

void Student::ReadFile(string filename)
{
	ifstream read(filename);

	if (!read.is_open())
	{
		cout << "Error opening file!" << endl;
		return;
	}

	string buffer;

	while (getline(read, buffer))
	{
		cout << buffer << endl;
	}
}