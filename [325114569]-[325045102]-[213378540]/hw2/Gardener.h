//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_GARDENER_H
#define FLOWERS2_GARDENER_H


#include "FlowersBouquet.h"
#include "Person.h"

class Gardener : public Person {

public:
    Gardener(std::string);

    FlowersBouquet* prepareBouquet(std::vector<std::string>);
};


#endif //FLOWERS2_GARDENER_H
