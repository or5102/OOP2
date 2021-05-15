//
// Created by or510 on 5/11/2021.
//
#include "FlowersBouquet.h"
#include "Florist.h"
#include "DeliveryPerson.h"
#include "FlowerArranger.h"
Florist::Florist(std::string name, DeliveryPerson* deliveryPerson, FlowerArranger* flowerArranger, Wholesaler* wholesaler) : Person(name)
{
    this->deliveryPerson=deliveryPerson;
    this->flowerArranger=flowerArranger;
    this->wholesaler=wholesaler;
}


void Florist::acceptOrder(Person* person, std::vector<std::string> order)
{
    std::cout<<this->getName()<<" forwards request to "<<this->wholesaler->getName()<<"."<<std::endl;
    FlowersBouquet* bouquet=this->wholesaler->acceptOrder(order);
    std::cout<<this->wholesaler->getName()<<" returns flowers to "<<this->getName()<<"."<<std::endl;
    std::cout<<this->getName()<<" request flowers arrangement from "<<this->flowerArranger->getName()<<"."<<std::endl;
    this->flowerArranger->arrangeFlowers(bouquet);
    std::cout<<this->flowerArranger->getName()<<" returns arranged flowers to "<<this->getName()<<"."<<std::endl;
    std::cout<<this->getName()<<" forwards flowers to "<<this->deliveryPerson->getName()<<"."<<std::endl;
    this->deliveryPerson->deliver(person,bouquet);
}

std::string Florist::getName() {
    return "Florist "+Person::getName();
}

