//
// Created by or510 on 5/11/2021.
//

#include "Gardener.h"
Gardener::Gardener(std::string name) :Person(name) {}
FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> bouquet) {
    std::cout<<"Gardener "<<this->getName()<<" prepares flowers."<<std::endl;
    return new FlowersBouquet(bouquet);
}