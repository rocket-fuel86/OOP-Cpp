#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	fstream inout("Text.txt", ios::in | ios::out | ios::app);

	string buff;
	getline(cin, buff);

	inout << buff << endl;

	inout.seekg(0);

	string read;
	while (getline(inout, read))
	{
		cout << read << endl;
	}

	inout.close();
}