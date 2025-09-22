//
// Created by staro on 9/22/2025.
//

#ifndef DOGSLIFE_HUMAN_H
#define DOGSLIFE_HUMAN_H

#include <string>

class Human {
    std::string name;
    std::string occupation;
    std::string mood;
public:
    void setOccupation(const std::string&);
    std::string& getOccupation();
    void setName(const std::string&);
    std::string& getName();
    void setMood(const std::string&);
    std::string& getMood();
};


#endif //DOGSLIFE_HUMAN_H