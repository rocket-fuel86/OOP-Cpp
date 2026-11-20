#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

class Student
{
	char * name;
	int age;
	friend class Test;

	class Vuz
	{
		string Name;
	public:
		Vuz()
		{
			Name = "Politex";
	    }
		Vuz(const char* N)
		{
			Name = N;
		}
		void Show()
		{
			cout << Name << endl;
		}
	};
	Vuz vloj;
public:
	          ////  prototype 
	Student();     
	Student(const char *, int,char * vuz); // construct by 2 param
	~Student();

};
Student::Student()
{
	name = nullptr;
	age = 0;
}
Student::Student(const char * Name, int Age,char * vuz):vloj(vuz)
{
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
	age = Age;

}
Student::~Student()
{
	if (name != nullptr)
	{
		delete[] name;
	}
	cout << "Destruct\n";

}

class Test
{
public:
	void Output_student(Student & obj)
	{
		cout << "Name: " << obj.name << endl;
			cout<< "Age: " << obj.age << endl;
			cout << "Vuz: ";
			obj.vloj.Show();
	}
};
int main()
{
	Student obj1("Oleg", 21,"ITstep");

	Test obj;
	obj.Output_student(obj1);



	system("pause");
}