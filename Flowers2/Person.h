//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_PERSON_H
#define FLOWERS2_PERSON_H
#include <vector>
#include "Florist.h"

class Person {
protected:
    std::string name;
public:
    Person(std::string);
    virtual std::string getName();
    void orderFlowers(Florist*,Person*,std::vector<std::string>);
};


#endif //FLOWERS2_PERSON_H
