cmake_minimum_required(VERSION 3.19)
project(Flowers2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Flowers2 main.cpp Person.cpp Person.h Florist.cpp Florist.h Wholesaler.cpp Wholesaler.h Grower.cpp Grower.h Gardener.cpp Gardener.h FlowerArranger.cpp FlowerArranger.h DeliveryPerson.cpp DeliveryPerson.h FlowersBouquet.cpp FlowersBouquet.h)