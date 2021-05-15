#include <iostream>
#include "Person.h"
#include "Florist.h"
int main()
{
    Gardener* Garett=new Gardener("Garett");
    Grower* Gray=new Grower("Gray",Garett);
    Wholesaler* Watson=new Wholesaler("Watson", Gray);
    DeliveryPerson* Dylan=new DeliveryPerson("Dylan");
    FlowerArranger* Flora=new FlowerArranger("Flora");
    Florist* fred = new Florist("Fred",Dylan,Flora,Watson);
    Person* chris = new Person("Chris");
    Person* robin = new Person("Robin");
    std::vector<std::string> order = { "Roses", "Violets", "Gladiolus" };

    chris->orderFlowers(fred, robin, order);
    order.clear();
    delete fred;
    delete chris;
    delete robin;
    delete Garett;
    delete Gray;
    delete Watson;
    delete Flora;
    delete Dylan;
}
