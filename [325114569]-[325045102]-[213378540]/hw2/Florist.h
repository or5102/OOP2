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
#include "Wholesaler.h"
class DeliveryPerson;
class Florist : public Person {

protected:
    Wholesaler* wholesaler;
    DeliveryPerson* deliveryPerson;
    FlowerArranger* flowerArranger;
public:
    Florist(std::string, DeliveryPerson*, FlowerArranger*, Wholesaler*);

    void acceptOrder(Person *, std::vector<std::string>);

};

#endif //FLOWERS2_FLORIST_H
