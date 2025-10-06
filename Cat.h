//
// Created by staro on 9/22/2025.
//

#ifndef DOGSLIFE_CAT_H
#define DOGSLIFE_CAT_H

#include <iostream>
#include <ostream>
#include <string>
#include "Animal.h"

class Canine : public Animal {
    public:
    ~Canine() {
        std::cout << "Canine::~Canine()" << std::endl;
    }
};

class Cat : public Canine{
public:
    ~Cat();
    void setCatsAge(int age) {
        setAge(age);
    }

};
class Sphinx: public Cat {
public:
    ~Sphinx() {
        std::cout << "Sphinx::~Sphinx()" << std::endl;
    }
};

#endif //DOGSLIFE_CAT_H