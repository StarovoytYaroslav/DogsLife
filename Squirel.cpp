//
// Created by staro on 9/22/2025.
//

#include "Squirel.h"

void Squirel::setColor(const std::string& c) {
    color = c;
}
std::string& Squirel::getColor() {
    return color;
}

std::string& Squirel::getMood() {
    return mood;
}

void Squirel::setMood(const std::string& m) {
    mood = m;
}