#pragma once

#include <iostream>
#include <string>
using namespace std;

class Student
{
	string name;
	int age;
public:
	static string groupName;
	static int counter;

	Student();
	Student(string n, int a);
	
	void Print();
	static void PrintGroup();
};

