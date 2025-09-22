//
// Created by staro on 9/22/2025.
//

#include "Cat.h"

void Cat::setColor(const std::string& c) {
    color = c;
}
std::string& Cat::getColor() {
    return color;
}
void Cat::setName(const std::string& n) {
    name = n;
}

std::string& Cat::getName() {
    return name;
}

std::string& Cat::getMood() {
    return mood;
}

void Cat::setMood(const std::string& m) {
    mood = m;
}