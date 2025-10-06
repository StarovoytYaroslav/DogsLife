//
// Created by staro on 10/6/2025.
//

#ifndef DOGSLIFE_CITY_H
#define DOGSLIFE_CITY_H

#include "Animal.h"
#include "Human.h"

class City {
private:
    Human** community;
    Animal** animals;
    int humanPopulation = 0;
    int animalPopulation = 0;
public:
    City();
    ~City();
};


#endif //DOGSLIFE_CITY_H