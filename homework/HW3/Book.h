#pragma once

#include <string>
using namespace std;

class Book
{
	string name;
	string author;
	string genre;
	bool onHands;
	string ownerId;
	string ownerName;
public:
	Book();
	Book(string n, string a, string g, bool oH, string oI, string oN);
	
	void Init(string n, string a, string g, bool oH, string oI, string oN);
	void Print();
	void Input();
	
	string getName();
	string getAuthor();
	string getGenre();
	bool getOnHands();
	string getOwnerId();
	string getOwnerName();

	void setName(string n);
	void setAuthor(string a);
	void setGenre(string g);
	void setOnHands(bool oH);
	void setOwnerId(string oI);
	void setOwnerName(string oN);
};

