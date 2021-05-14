//
// Created by or510 on 5/11/2021.
//

#include <xstring>
#include <iostream>
#include "Person.h"
#include "Florist.h"

Person::Person(std::string name) : name(name){}
std::string Person :: getName(){
    return name;
}
void Person::orderFlowers(Florist* florist, Person* person, std::vector<std::string> order)
{
    std::cout << getName() << " orders flowers to " << person->getName() << " from " << florist->getName() << std::endl;
    florist->acceptOrder(person, order);
}