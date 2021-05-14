//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_FLOWERSBOUQUET_H
#define FLOWERS2_FLOWERSBOUQUET_H

#include <iostream>
#include <vector>

class FlowersBouquet {
private:
    std::vector<std::string> bouquet;
    bool isArranged;

public:
    FlowersBouquet(std::vector<std::string> bouquet);

    bool FlowersBouquet::getIsArranged();

    void FlowersBouquet::arrange();

    std::string FlowersBouquet::toString();


};


#endif //FLOWERS2_FLOWERSBOUQUET_H
