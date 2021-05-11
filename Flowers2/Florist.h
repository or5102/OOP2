//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_FLORIST_H
#define FLOWERS2_FLORIST_H


#include <xstring>
#include "Person.h"

class Florist {

public:
    void acceptOrder(Person *pPerson, std::vector<std::string> vector);

    const std::basic_string<_Elem, _Traits, _Alloc> &getName();
};


#endif //FLOWERS2_FLORIST_H
