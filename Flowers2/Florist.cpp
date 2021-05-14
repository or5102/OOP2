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
    std::cout<<"Florist "<<this->getName()<<" forwards request to Wholesaler "<<this->wholesaler->getName()<<"."<<std::endl;
    FlowersBouquet* bouquet=this->wholesaler->acceptOrder(order);
    std::cout<<"Wholesaler "<<this->wholesaler->getName()<<" returns flowers to Florist "<<this->getName()<<"."<<std::endl;
    std::cout<<"Florist "<<this->getName()<<" request flowers arrangement from Flower Arranger "<<this->flowerArranger->getName()<<"."<<std::endl;
    this->flowerArranger->arrangeFlowers(bouquet);
    std::cout<<"Flower Arranger "<<this->flowerArranger->getName()<<" returns arranged flowers to Florist "<<this->getName()<<"."<<std::endl;
    std::cout<<"Florist "<<this->getName()<<" forwards flowers to Delivery Person "<<this->deliveryPerson->getName()<<"."<<std::endl;
    this->deliveryPerson->deliver(person,bouquet);
}

