//
// Created by staro on 10/6/2025.
//

#ifndef DOGSLIFE_STREET_H
#define DOGSLIFE_STREET_H
#include "Building.h"


class Street {
private:
    Building** buildings;
    int addresses;
public:
    ~Street() = default;
};


#endif //DOGSLIFE_STREET_H