//
// Created by staro on 9/22/2025.
//

#ifndef DOGSLIFE_SQUIREL_H
#define DOGSLIFE_SQUIREL_H

#include <string>

class Squirel {
    std::string color;
    std::string mood;
public:
    void setColor(const std::string&);
    std::string& getColor();
    void setMood(const std::string&);
    std::string& getMood();
};


#endif //DOGSLIFE_SQUIREL_H