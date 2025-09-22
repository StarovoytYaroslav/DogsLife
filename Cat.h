//
// Created by staro on 9/22/2025.
//

#ifndef DOGSLIFE_CAT_H
#define DOGSLIFE_CAT_H

#include <string>

class Cat {
    std::string name;
    std::string color;
    std::string mood;
public:
    void setColor(const std::string&);
    std::string& getColor();
    void setName(const std::string&);
    std::string& getName();
    void setMood(const std::string&);
    std::string& getMood();
};


#endif //DOGSLIFE_CAT_H