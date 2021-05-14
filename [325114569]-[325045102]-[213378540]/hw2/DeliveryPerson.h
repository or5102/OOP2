//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_DELIVERYPERSON_H
#define FLOWERS2_DELIVERYPERSON_H


#include "Person.h"
#include "iostream"

class DeliveryPerson : public Person {

public:

    DeliveryPerson(std::string);
    void deliver(Person *, FlowersBouquet*);

};


#endif //FLOWERS2_DELIVERYPERSON_H
