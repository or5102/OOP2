//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_PERSON_H
#define FLOWERS2_PERSON_H

#include <vector>

#include <iostream>
#include "FlowersBouquet.h"

class Florist;//forward declaration

class Person {
protected:
    std::string name;
public:
    Person(std::string);

    virtual std::string getName();

    virtual void orderFlowers(Florist *, Person *, std::vector<std::string>);

    virtual void Person::acceptFlowers(FlowersBouquet *bouquet);

};


#endif //FLOWERS2_PERSON_H
