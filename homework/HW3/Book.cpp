#include "Book.h"
#include <iostream>
using namespace std;

Book::Book()
{
	name = "";
	author = "";
	genre = "";
	onHands = false;
	ownerId = "";
	ownerName = "";
}

Book::Book(string n, string a, string g, bool oH, string oI, string oN)
{
	name = n;
	author = a;
	genre = g;
	onHands = oH;
	ownerId = oI;
	ownerName = oN;
}

void Book::Init(string n, string a, string g, bool oH, string oI, string oN)
{
	name = n;
	author = a;
	genre = g;
	onHands = oH;
	ownerId = oI;
	ownerName = oN;
}

void Book::Print()
{
	cout << "Name: " << name << endl
		<< "Author: " << author << endl
		<< "Genre: " << genre << endl
		<< "On hands: " << onHands << endl
		<< "Owner ID: " << ownerId << endl
		<< "Owner name: " << ownerName << endl;
}

void Book::Input()
{
	cout << "Name: ";
	getline(cin, name); // обычный cin читает до первого пробела
	// getline - читает строку полностью

	cout << "Author: ";
	getline(cin, author);

	cout << "Genre: ";
	getline(cin, genre);

	cout << "On hands: ";
	cin >> onHands;

	cout << "Owner ID: ";
	getline(cin, ownerId);

	cout << "Owner name: ";
	getline(cin, ownerName);
}

string Book::getName()
{
	return name;
}

string Book::getAuthor()
{
	return author;
}

string Book::getGenre()
{
	return genre;
}

bool Book::getOnHands()
{
	return onHands;
}

string Book::getOwnerId()
{
	return ownerId;
}

string Book::getOwnerName()
{
	return ownerName;
}

void Book::setName(string n)
{
	if (!n.empty())
	{
		name = n;
	}
}

void Book::setAuthor(string a)
{
	if (!a.empty())
	{
		author = a;
	}
}

void Book::setGenre(string g)
{
	if (!g.empty())
	{
		genre = g;
	}
}

void Book::setOnHands(bool oH)
{
	onHands = oH;
	if (!onHands)
	{
		ownerId = "";
		ownerName = "";
	}
}

void Book::setOwnerId(string oI)
{
	if (onHands)
	{
		ownerId = oI;
	}
}

void Book::setOwnerName(string oN)
{
	if (onHands)
	{
		ownerName = oN;
	}
}
