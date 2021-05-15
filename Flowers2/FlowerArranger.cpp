//
// Created by or510 on 5/11/2021.
//
#include "FlowersBouquet.h"
#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name) : Person(name) {}

void FlowerArranger::arrangeFlowers(FlowersBouquet *bouquet) {
    std::cout<<this->getName()<<" arranges flowers."<<std::endl;
    bouquet->arrange();
}

std::string FlowerArranger::getName() {
    return "Flower Arranger "+Person::getName();
}





//Flower Arranger Flora returns arranged flowers to Florist Fred.