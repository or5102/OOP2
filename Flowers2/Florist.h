//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_FLORIST_H
#define FLOWERS2_FLORIST_H


#include <iostream>
#include <vector>
#include "Person.h"

class Florist : public Person
{
private:

public:
    Florist(std::string);
    void acceptOrder(Person*, std::vector<std::string>);
    std::string getName();
};
#endif //FLOWERS2_FLORIST_H
