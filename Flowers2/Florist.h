//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_FLORIST_H
#define FLOWERS2_FLORIST_H


#include <iostream>
#include <vector>
#include "Person.h"
#include "DeliveryPerson.h"
#include "FlowerArranger.h"

class Florist : public Person {

protected:
    DeliveryPerson deliveryPerson;
    FlowerArranger flowerArranger;
public:
    Florist(std::string,DeliveryPerson*,FlowerArranger*);

    void acceptOrder(Person *, std::vector<std::string>);

    void deliver(Person*,FlowersBouquet*);

    std::string getName();

};

#endif //FLOWERS2_FLORIST_H
