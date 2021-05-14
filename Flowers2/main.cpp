#include <iostream>
#include "Person.h"
#include "Florist.h"

int main()
{
    Florist* fred = new Florist("Fred");
    Person* chris = new Person("Chris");
    Person* robin = new Person("Robin");
    std::vector<std::string> order = { "Roses", "Violets", "Gladiolus" };

    chris->orderFlowers(fred, robin, order);

    delete fred;
    delete chris;
    delete robin;
}
