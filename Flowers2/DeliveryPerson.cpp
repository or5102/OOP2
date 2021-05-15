//
// Created by or510 on 5/11/2021.
//

#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name) : Person(name) {}

void DeliveryPerson::deliver(Person* person, FlowersBouquet* bouquet) {
    std::cout<<this->getName()<<" delivers flowers "<<person->getName()<<"."<<std::endl;
    person->acceptFlowers(bouquet);
}

std::string DeliveryPerson::getName() {
    return "Delivery Person "+Person::getName();
}