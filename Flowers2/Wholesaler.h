//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_WHOLESALER_H
#define FLOWERS2_WHOLESALER_H
#include "Person.h"
#include "Grower.h"
class Wholesaler: public Person {
protected:
    Grower* grower;
public:
    Wholesaler(std::string, Grower*);
    FlowersBouquet* acceptOrder(std::vector<std::string>);
};


#endif //FLOWERS2_WHOLESALER_H
