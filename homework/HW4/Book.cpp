#include "Book.h"
#include "iostream"
using namespace std;

Book::Book(string id, string title, string author, int pages, int year, double price) :
	id(id), title(title), author(author), pages(pages), year(year), price(price) {
};

void Book::showInfo()
{
	cout << "Id: " << id << endl
		<< "Title: " << title << endl
		<< "Author: " << author << endl
		<< "Pages: " << pages << endl
		<< "Year: " << year << endl
		<< "Price: " << price << endl;
}

void Book::changePrice(double newPrice)
{
	if (price != 0.0) 
	{
		price = newPrice;
	}
}

bool Book::isModernBook()
{
	if (year > 2015)
	{
		return true;
	}
	return false;
}

void Book::discount(double percent)
{
	if (percent > 0.0 && percent <= 0.99)
	{
		price = price * percent;
	}
}

string Book::getId()
{
	return id;
}

string Book::getTitle()
{
	return title;
}

string Book::getAuthor()
{
	return author;
}

int Book::getPages()
{
	return pages;
}

int Book::getYear()
{
	return year;
}

double Book::getPrice()
{
	return price;
}

void Book::setTitle(string newTitle)
{
	if (!title.empty())
	{
		title = newTitle;
	}
}
