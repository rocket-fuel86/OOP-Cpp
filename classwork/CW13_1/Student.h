#pragma once 

#include <iostream> 
#include <string> 
#include <fstream>

using namespace std;

class Student
{
	string name;
	string surname; 
	string university;
	int age;
public:
	Student();
	Student(string name, string surname, string university, int age);
	void Init(); // вводим с клавиатуры
	void print() const;// вывод на консоль
	void WriteFile(string filename) const; //зaпись, ios: app 
	static void ReadFile(string filename); // чтение
};