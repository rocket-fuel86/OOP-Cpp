#include <iostream>
#include "Book.h"

using namespace std;

int main()
{
    // ==============================
    // 1. Проверка конструктора по умолчанию
    // ==============================
    cout << "===== Default constructor =====" << endl;

    Book book1;
    book1.Print();

    cout << endl;


    // ==============================
    // 2. Проверка конструктора с параметрами
    // ==============================
    cout << "===== Parameterized constructor =====" << endl;

    Book book2(
        "The Witcher",
        "Andrzej Sapkowski",
        "Fantasy",
        true,
        "12345",
        "John"
    );

    book2.Print();

    cout << endl;


    // ==============================
    // 3. Проверка Init()
    // ==============================
    cout << "===== Init() =====" << endl;

    book1.Init(
        "Metro 2033",
        "Dmitry Glukhovsky",
        "Post-apocalypse",
        true,
        "54321",
        "Alex"
    );

    book1.Print();

    cout << endl;


    // ==============================
    // 4. Проверка геттеров
    // ==============================
    cout << "===== Getters =====" << endl;

    cout << "Name: " << book1.getName() << endl;
    cout << "Author: " << book1.getAuthor() << endl;
    cout << "Genre: " << book1.getGenre() << endl;
    cout << "On hands: " << book1.getOnHands() << endl;
    cout << "Owner ID: " << book1.getOwnerId() << endl;
    cout << "Owner name: " << book1.getOwnerName() << endl;

    cout << endl;


    // ==============================
    // 5. Проверка сеттеров
    // ==============================
    cout << "===== Setters =====" << endl;

    book1.setName("Metro 2035");
    book1.setAuthor("Dmitry Glukhovsky");
    book1.setGenre("Science Fiction");
    book1.setOwnerId("99999");
    book1.setOwnerName("Bob");

    book1.Print();

    cout << endl;


    // ==============================
    // 6. Проверка setOnHands(false)
    // ==============================
    cout << "===== setOnHands(false) =====" << endl;

    book1.setOnHands(false);

    book1.Print();

    cout << endl;


    // ==============================
    // 7. Проверка setOwnerId/setOwnerName
    //    когда книга НЕ на руках
    // ==============================
    cout << "===== Owner setters when book is NOT on hands =====" << endl;

    book1.setOwnerId("11111");
    book1.setOwnerName("Someone");

    book1.Print();

    cout << endl;


    // ==============================
    // 8. Проверка setOnHands(true)
    // ==============================
    cout << "===== setOnHands(true) =====" << endl;

    book1.setOnHands(true);

    book1.setOwnerId("77777");
    book1.setOwnerName("Mike");

    book1.Print();

    cout << endl;


    // ==============================
    // 9. Проверка Input()
    // ==============================
    cout << "===== Input() =====" << endl;

    Book book3;
    book3.Input();

    cout << endl;

    cout << "===== Result =====" << endl;
    book3.Print();

    return 0;
}