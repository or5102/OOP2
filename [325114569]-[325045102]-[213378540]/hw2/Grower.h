//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_GROWER_H
#define FLOWERS2_GROWER_H


#include "FlowersBouquet.h"
#include "Gardener.h"
#include "Person.h"

class Grower:public Person {
private:
    Gardener* gardener;
public:
    Grower(std::string , Gardener*);
    FlowersBouquet* prepareOrder(std::vector<std::string> vector);
};


#endif //FLOWERS2_GROWER_H
