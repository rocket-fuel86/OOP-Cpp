#include <iostream>
using namespace std;

class Student
{
private:
	string fullName;
	string date;
	string phone;
	string city;
	string country;
	string institutionFullAddress;
	string institutionName;
	int groupNumber;
public:
	void Init(string fn, string da, string ph, string ci, string coun, string ifa, string in, int gn)
	{
		fullName = fn;
		date = da;
		phone = ph;
		city = ci;
		country = coun;
		institutionFullAddress = ifa;
		institutionName = in;
		groupNumber = gn;
	}
	void Print()
	{
		cout << "Fullname: " << fullName << endl
			<< "Date: " << date << endl
			<< "Phone: " << phone << endl
			<< "City: " << city << endl
			<< "Country: " << country << endl
			<< "IFA: " << institutionFullAddress << endl
			<< "IN: " << institutionName << endl
			<< "Group number: " << groupNumber << endl;
	}
	void SetFullName(string fn)
	{
		if (fn != "")
		{
			fullName = fn;
		}
	}
	void SetDate(string da)
	{
		date = da;
	}
	void SetPhone(string ph)
	{
		phone = ph;
	}
	void SetCity(string ci)
	{
		city = ci;
	}
	void SetCountry(string coun)
	{
		country = country;
	}
	void SetInstitutionFullAddress(string ifa)
	{
		institutionFullAddress = ifa;
	}
	void SetInstitutionName(string in)
	{
		institutionName = in;
	}
	void SetGroupNumber(int gn)
	{
		groupNumber = gn;
	}

	string GetFullName()
	{
		return fullName;
	}
	string GetDate()
	{
		return date;
	}
	string GetPhone()
	{
		return phone;
	}
	string GetCity()
	{
		return city;
	}
	string GetCountry()
	{
		return country;
	}
	string GetInstitutionFullAddress()
	{
		return institutionFullAddress;
	}
	string GetInstitutionName()
	{
		return institutionName;
	}
	int GetGroupNumber()
	{
		return groupNumber;
	}
};

int main()
{
	Student student;

	student.SetFullName("John Smith");
	student.SetDate("01.01.2005");
	student.SetPhone("+380 60000000");
	student.SetCity("Berlin");
	student.SetCountry("Germany");
	student.SetInstitutionFullAddress("str. Achtung, 3");
	student.SetInstitutionName("College");
	student.SetGroupNumber(201);

	cout << "Fullname: " << student.GetFullName() << endl;
	cout << "Date: " << student.GetDate() << endl;
	cout << "Phone: " << student.GetPhone() << endl;
	cout << "City: " << student.GetCity() << endl;
	cout << "Country: " << student.GetCountry() << endl;
	cout << "IFA: " << student.GetInstitutionFullAddress() << endl;
	cout << "IN: " << student.GetInstitutionName() << endl;
	cout << "Group number: " << student.GetGroupNumber() << endl;

	return 0;
}