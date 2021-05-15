//
// Created by or510 on 5/11/2021.
//

#include "Wholesaler.h"
Wholesaler::Wholesaler(std::string name, Grower* grower): Person(name){
    this->grower=grower;
}
FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> bouquet) {
    std::cout<<this->getName()<<" forwards the request to "<<this->grower->getName()<<"."<<std::endl;
    FlowersBouquet* flowersBouquet= this->grower->prepareOrder(bouquet);
    std::cout<<this->grower->getName()<<" returns flowers to "<<this->getName()<<"."<<std::endl;
    return  flowersBouquet;
}

std::string Wholesaler::getName() {
    return "Wholesaler " + Person::getName();
}