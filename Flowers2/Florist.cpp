//
// Created by or510 on 5/11/2021.
//
#include "FlowersBouquet.h"
#include "Florist.h"
#include "DeliveryPerson.h"
#include "FlowerArranger.h"
Florist::Florist(std::string name, DeliveryPerson* deliveryPerson, FlowerArranger* flowerArranger) : Person(name)
{
    this->deliveryPerson=deliveryPerson;
    this->flowerArranger=flowerArranger;
    this->name=name;
}


void Florist::acceptOrder(Person* person, std::vector<std::string> order)
{

    acceptOrder(person,order);
    std::cout<<person->getName()<<"returns arranged flowers to"<<this->getName()<<std::endl;

}
void Florist::deliver(Person *, FlowersBouquet *) {

}


std::string Florist::getName() {
    return "Florist " + Person::getName();
}