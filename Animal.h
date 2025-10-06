//
// Created by staro on 10/6/2025.
//

#ifndef DOGSLIFE_ANIMAL_H
#define DOGSLIFE_ANIMAL_H

#include <string>

class Animal {
private:
    std::string name;
    std::string color;
    std::string mood;
    int age;
public:
    virtual ~Animal();
    void setColor(const std::string&);
    std::string& getColor();
    void setName(const std::string&);
    std::string& getName();
    void setMood(const std::string&);
    std::string& getMood();

protected:
    void setAge(int a);
    int getAge();

};


#endif //DOGSLIFE_ANIMAL_H