//
// Created by staro on 9/22/2025.
//

#include "Human.h"

void Human::setOccupation(const std::string& o) {
    occupation = o;
}
std::string& Human::getOccupation() {
    return occupation;
}
void Human::setName(const std::string& n) {
    name = n;
}

std::string& Human::getName() {
    return name;
}

std::string& Human::getMood() {
    return mood;
}

void Human::setMood(const std::string& m) {
    mood = m;
}