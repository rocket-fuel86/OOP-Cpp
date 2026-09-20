#include "Book.h"
#include <iostream>

using namespace std;

int main()
{
    Book book1(
        "001",
        "The Hobbit",
        "J.R.R. Tolkien",
        310,
        1937,
        500
    );

    Book book2(
        "002",
        "1984",
        "George Orwell",
        328,
        1949,
        450
    );

    Book book3(
        "003",
        "Dune",
        "Frank Herbert",
        688,
        1965,
        600
    );

    cout << "=== ALL BOOKS ===" << endl;

    book1.showInfo();
    cout << endl;

    book2.showInfo();
    cout << endl;

    book3.showInfo();
    cout << endl;


    cout << "=== CHANGE PRICE ===" << endl;

    book1.changePrice(550);
    book1.showInfo();

    cout << endl;


    cout << "=== DISCOUNT ===" << endl;

    book2.discount(20);
    book2.showInfo();

    cout << endl;


    cout << "=== MODERN BOOKS ===" << endl;

    cout << "Book 1: "
        << (book1.isModernBook() ? "Modern" : "Not modern")
        << endl;

    cout << "Book 2: "
        << (book2.isModernBook() ? "Modern" : "Not modern")
        << endl;

    cout << "Book 3: "
        << (book3.isModernBook() ? "Modern" : "Not modern")
        << endl;

    cout << endl;

    return 0;
}