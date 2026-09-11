#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	string group;
	string speciality;
public:
	// конструктор по умолчанию
	Student()
	{
		name = "";
		group = "";
		speciality = "";
	}
	// конструктор с параметрами
	Student(string n, string gr, string spec)
	{
		name = n;
		group = gr;
		speciality = spec;
	}
	void printStudent()
	{
		cout << "Name: " << name << endl
			<< "Group: " << group << endl
			<< "Speciality: " << speciality << endl;
	}
	void changeGroup(string newGroup)
	{
		if (!newGroup.empty())
		{
			group = newGroup;
		}
	}
	string getName()
	{
		return name;
	}
	string getGroup()
	{
		return group;
	}
	string getSpeciality()
	{
		return speciality;
	}
	void setName(string n)
	{
		if (!n.empty())
		{
			name = n;
		}
	}
	void setGroup(string gr)
	{
		if (!gr.empty())
		{
			group = gr;
		}
	}
	void setSpeciality(string spec)
	{
		if (!spec.empty())
		{
			speciality = spec;
		}
	}
};

class User
{
private:
	string login;
	string email;
	string password;
public:
	User()
	{
		login = "";
		email = "";
		password = "";
	}
	User(string log, string ema, string passw)
	{
		login = log;
		email = ema;
		password = passw;
	}
	void showProfile()
	{
		cout << "Login: " << login << endl
			<< "Email: " << email << endl;
	}
	void changePassword(string oldPass, string newPass)
	{
		if (oldPass == password)
		{
			password = newPass;
		}
		else
		{
			cout << "Error: Old password doesn`t match" << endl;
		}
	}
	string getLogin()
	{
		return login;
	}
	string getEmail()
	{
		return email;
	}
	void setLogin(string log)
	{
		if (!log.empty())
		{
			login = log;
		}
	}
	void setEmail(string ema)
	{
		if (!ema.empty())
		{
			email = ema;
		}
	}
	void setPassword(string passw)
	{
		if (!passw.empty())
		{
			password = passw;
		}
	}
};

int main()
{
	// создаём студента через конструктор с параметрами
	Student student1("Alex", "IT-21", "Programming");

	student1.printStudent();

	cout << endl;

	// меняем группу
	student1.changeGroup("IT-22");

	cout << "After changing group:" << endl;
	student1.printStudent();

	cout << endl;

	// создаём студента через конструктор по умолчанию
	Student student2;

	student2.setName("John");
	student2.setGroup("IT-23");
	student2.setSpeciality("Game Development");

	cout << "Second student:" << endl;
	student2.printStudent();

	cout << endl;

	// используем геттеры
	cout << "Student name: " << student2.getName() << endl;
	cout << "Student group: " << student2.getGroup() << endl;
	cout << "Student speciality: " << student2.getSpeciality() << endl;

	cout << endl;

	
	// создаём пользователя через конструктор с параметрами
	User user1("Alex123", "alex@gmail.com", "12345");

	user1.showProfile();

	cout << endl;

	// получаем login и email через геттеры
	cout << "Login: " << user1.getLogin() << endl;
	cout << "Email: " << user1.getEmail() << endl;

	cout << endl;

	// пытаемся изменить пароль с неправильным старым паролем
	user1.changePassword("wrongPassword", "newPassword");

	cout << endl;

	// меняем пароль с правильным старым паролем
	user1.changePassword("12345", "newPassword");

	cout << "Password changed successfully!" << endl;

	cout << endl;

	// создаём второго пользователя через конструктор по умолчанию
	User user2;

	user2.setLogin("John123");
	user2.setEmail("john@gmail.com");
	user2.setPassword("qwerty");

	user2.showProfile();

	return 0;
}