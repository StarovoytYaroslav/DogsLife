//
// Created by staro on 9/22/2025.
//

#ifndef DOGSLIFE_DOG_H
#define DOGSLIFE_DOG_H

#include <string>

class Dog {
private:
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


#endif //DOGSLIFE_DOG_H