//
// Created by staro on 9/22/2025.
//

#include "Dog.h"

void Dog::setColor(const std::string& s) {
    color = s;
}
std::string& Dog::getColor() {
    return color;
}
void Dog::setName(const std::string& n) {
    name = n;
}

std::string& Dog::getName() {
    return name;
}

std::string& Dog::getMood() {
    return mood;
}

void Dog::setMood(const std::string& m) {
    mood = m;
}