#pragma once

#include <string>
using namespace std;

class Book
{
	const string id;
	string title;
	const string author;
	const int pages;
	const int year;
	double price;
public:
	Book() : id(""), title(""), author(""), pages(0), year(0), price(0.0) {};
	Book(string id, string title, string author, int pages, int year, double price);
	void showInfo();
	void changePrice(double newPrice);
	bool isModernBook();
	void discount(double percent);
	string getId();
	string getTitle();
	string getAuthor();
	int getPages();
	int getYear();
	double getPrice();
	void setTitle(string newTitle);
};

