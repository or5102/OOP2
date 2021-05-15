//
// Created by or510 on 5/11/2021.
//

#include "Grower.h"
Grower::Grower(std::string name, Gardener * gardener) : Person(name) {
    this->gardener=gardener;
}
FlowersBouquet* Grower::prepareOrder(std::vector<std::string> bouquet) {
    std::cout<<this->getName()<<" forwards the request to "<<this->gardener->getName()<<"."<<std::endl;
    FlowersBouquet* flowersBouquet = this->gardener->prepareBouquet(bouquet);
    std::cout<<this->gardener->getName()<<" returns flowers to "<<this->getName()<<"."<<std::endl;
    return flowersBouquet;
}
std::string Grower:: getName() {
    return "Grower "+Person::getName();
}