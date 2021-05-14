//
// Created by or510 on 5/11/2021.
//

#ifndef FLOWERS2_FLOWERSBOUQUET_H
#define FLOWERS2_FLOWERSBOUQUET_H

#include <iostream>
#include <vector>
#include <xstring>
#include <string>

class FlowersBouquet {
private:
    std::vector<std::string> bouquet;
    bool isArranged;

public:
    FlowersBouquet(std::vector<std::string> bouquet) {
        this->isArranged = false;
        this->bouquet = bouquet;
    }

    bool FlowersBouquet::getIsArranged() {
        return this->isArranged;
    }

    void FlowersBouquet::arrange() {
        this->isArranged = true;
    }

    std::string FlowersBouquet::toString() {
        std::string str = "";
        for (std::string flower: this->bouquet) {
            str = str + std::string(flower) + " ";
        }
        return str;

    }
};


#endif //FLOWERS2_FLOWERSBOUQUET_H