//
// Created by staro on 9/29/2025.
//

#ifndef DOGSLIFE_KNIGHT_H
#define DOGSLIFE_KNIGHT_H
#include <string>
#include <iostream>
#include "Animal.h"
#include "Human.h"

class Gear {
private:
    std::string material;
public:
    virtual ~Gear() {
        std::cout << "Gear::~Gear()" << std::endl;
    }
};

class Shield :public Gear {
public:
    ~Shield() {
        std::cout << "Shield::~Shield()" << std::endl;
    }
};

class Sword :public Gear {
public:
    ~Sword() {
        std::cout << "Sword::~Sword()" << std::endl;
    }
};

class Helmet:public Gear{
public:
    ~Helmet() {
        std::cout << "Helmet::~Helmet()" << std::endl;
    }
};

class Gloves: public Gear{
public:
    ~Gloves() {
        std::cout << "Gloves::~Gloves()" << std::endl;
    }

};

class Horse : public Animal{
private:
    Gear* shield;
public:
    ~Horse() {
        std::cout << "Horse::~Horse()" << std::endl;
    }
};

class Knight : public Human{
    Gear* gear[10];
    Horse* horse;
public:
    Knight() {
        gear[0] = new Sword;
        gear[1] = new Helmet;
        gear[2] = new Gloves;
    }
    ~Knight() {
        for (int i = 0; i < 10; ++i) {
            delete gear[i];
        }
    }
};


#endif //DOGSLIFE_KNIGHT_H