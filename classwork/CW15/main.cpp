#include "Parrot.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
    Parrot parrot("birds", 200, "yellow", "nuts", "Kesha", true, 20);
    Dog dog("dogs", 15, "brown", "meat", "Rex", true);
    Cat cat("cats", 5, "white", "fish", "Murka", true);

    parrot.Print();
    dog.Print();
    cat.Print();
}