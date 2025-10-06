//
// Created by staro on 10/6/2025.
//

#include "Animal.h"

#include <iostream>
#include <ostream>

void Animal::setColor(const std::string& c) {
    color = c;
}
std::string& Animal::getColor() {
    return color;
}
void Animal::setName(const std::string& n) {
    name = n;
}

std::string& Animal::getName() {
    return name;
}

std::string& Animal::getMood() {
    return mood;
}

void Animal::setMood(const std::string& m) {
    mood = m;
}

void Animal::setAge(int a) {
    age = a;
}

int Animal::getAge() {
    return age;
}

Animal::~Animal() {
    std::cout << "Animal::~Animal()" << std::endl;
}
