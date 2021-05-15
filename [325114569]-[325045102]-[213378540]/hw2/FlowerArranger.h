//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_FLOWERARRANGER_H
#define FLOWERS2_FLOWERARRANGER_H
#include <iostream>
#include <vector>
#include "Person.h"

class FlowerArranger : public Person {

public:
    FlowerArranger(std::string);
    void arrangeFlowers(FlowersBouquet*);
    std::string getName() override;
};


#endif //FLOWERS2_FLOWERARRANGER_H
