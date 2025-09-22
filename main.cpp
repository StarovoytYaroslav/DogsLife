#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Human.h"
#include "Interactions.h"

int main() {

    Interactions inter;

    Dog brovko;
    brovko.setColor("brown");
    brovko.setName("Brovko");

    Dog petro;
    petro.setColor("black");
    petro.setName("Petro");
    inter.interact(petro, brovko);
    std::cout << brovko.getMood() << std::endl;
    std::cout << petro.getMood() << std::endl;

    Cat vasil;
    vasil.setColor("black");
    vasil.setName("Vasil");

    inter.interact(vasil, brovko);
    std::cout << brovko.getMood() << std::endl;
    std::cout << vasil.getMood() << std::endl;

    Squirel s1;
    s1.setColor("ginger");
    inter.interact(s1, brovko);

    std::cout << brovko.getMood() << std::endl;
    std::cout<< s1.getMood() << std::endl;

    Human ivan;
    ivan.setName("Ivan");
    ivan.setOccupation("Postman");

    inter.interact(ivan, brovko);
    std::cout << brovko.getMood() << std::endl;
    std::cout << ivan.getMood() << std::endl;

    return 0;
}
