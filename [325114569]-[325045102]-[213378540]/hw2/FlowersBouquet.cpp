//
// Created by or510 on 5/11/2021.
//


#include <iostream>
#include <vector>
#include <xstring>
#include <string>
#include "FlowersBouquet.h"


FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet) {
    this->isArranged = false;
    this->bouquet = bouquet;
}

bool FlowersBouquet::getIsArranged() {
    return this->isArranged;
}

void FlowersBouquet::arrange() {
    this->isArranged = true;
}

std::string FlowersBouquet::toString() {
    std::string str = "";
    for (std::string flower: this->bouquet) {
        if(str=="")
            str=flower;
        else
            str = str+", " + flower;
    }
    return str;

}

