//
// Created by or510 on 5/11/2021.
//
#include "FlowersBouquet.h"
#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name) : Person(name) {}

std::string FlowerArranger::getName() {
    return "Flower Arranger " + Person::getName();
}

void FlowerArranger::arrangeFlowers(FlowersBouquet *bouquet) {
    bouquet->arrange();
}

void FlowerArranger::acceptFlowers(FlowersBouquet *bouquet) {
    std::cout << this->getName() << "arranged flowers." << std::endl;

}






//Flower Arranger Flora returns arranged flowers to Florist Fred.