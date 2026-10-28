#include "Car.h"
#include "Student.h"

int main()
{
	//Car obj1("BMW", 55000);
	////obj1.WriteFile("Cars.txt");
	//
	//Car::ReadFile("Cars.txt");

	Student s1;
	s1.Init();
	Student s2("Jane", "Doe", "MIT", 20);
	Student s3("Joe", "Smith", "Oxford", 19);
	Student s4("Alice", "Smith", "Harvard", 18);
	Student s5("David", "Johnson", "Caltech", 21);

	s1.WriteFile("Students.txt");
	s2.WriteFile("Students.txt");
	s3.WriteFile("Students.txt");
	s4.WriteFile("Students.txt");
	s5.WriteFile("Students.txt");
	
	Student::ReadFile("Students.txt");
}