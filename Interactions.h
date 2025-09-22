//
// Created by staro on 9/22/2025.
//

#ifndef DOGSLIFE_INTERACTIONS_H
#define DOGSLIFE_INTERACTIONS_H

#include "Cat.h"
#include "Human.h"
#include "Dog.h"
#include "Squirel.h"

class Interactions {
public:
    void interact(Dog&, Dog&);
    void interact(Human&, Human&);
    void interact(Squirel&, Squirel&);
    void interact(Cat&, Cat&);
    void interact(Dog&, Cat&);
    void interact(Dog&, Human&);
    void interact(Dog&, Squirel&);
    void interact(Human&, Dog&);
    void interact(Human&, Cat&);
    void interact(Human&, Squirel&);
    void interact(Squirel&, Dog&);
    void interact(Squirel&, Human&);
    void interact(Squirel&, Cat&);
    void interact(Cat&, Dog&);
    void interact(Cat&, Human&);
    void interact(Cat&, Squirel&);
};


#endif //DOGSLIFE_INTERACTIONS_H