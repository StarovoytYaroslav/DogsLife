//
// Created by staro on 10/6/2025.
//

#include "City.h"

#include "Knight.h"
#include "Lecturer.h"

City::City() {
    community = new Human*[10];
    community[0] = new Knight;
    community[1] = new Lecturer;
    humanPopulation = 10;
    animals = new Animal*[10];
    animalPopulation = 10;

}

City::~City() {
    for (int i = 0; i < humanPopulation; i++) {
        delete community[i];
    }
    delete [] community;
}

