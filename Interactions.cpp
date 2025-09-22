//
// Created by staro on 9/22/2025.
//

#include "Interactions.h"

void Interactions::interact(Dog& d1, Dog& d2) {
        d1.setMood("happy");
        d2.setMood("happy");
}

void Interactions::interact(Human& h1, Human& h2) {
        h1.setMood("happy");
        h2.setMood("happy");
}
void Interactions::interact(Squirel& s1, Squirel& s2) {
        s1.setMood("playful");
        s2.setMood("playful");
}
void Interactions::interact(Cat& c1, Cat& c2) {
        c1.setMood("cautious");
        c2.setMood("cautious");
}

void Interactions::interact(Dog& d, Cat& c) {
        d.setMood("angry");
        c.setMood("afraid");
}

void Interactions::interact(Dog& d, Human& h) {
        if (h.getOccupation() == "Postman") {
                d.setMood("playful");
                h.setMood("afraid");
                return;
        }
        d.setMood("happy");
        h.setMood("cautious");
}

void Interactions::interact(Dog& d, Squirel& s) {
        d.setMood("playful");
        s.setMood("afraid");
}
void Interactions::interact(Human& h, Dog& d) {
        interact(d, h);
}
void Interactions::interact(Human& h, Cat& c) {
        h.setMood("cheerfull");
        c.setMood("cautious");
}
void Interactions::interact(Human& h, Squirel& s) {
        h.setMood("cheerfull");
        s.setMood("cautious");
}
void Interactions::interact(Squirel& s, Dog& d) {
        interact(d, s);
}
void Interactions::interact(Squirel& s, Human& h) {
        interact(h, s);
}
void Interactions::interact(Squirel& s, Cat& c) {
        s.setMood("cautious");
        c.setMood("cautious");
}
void Interactions::interact(Cat& c, Dog& d) {
        interact(d, c);
}
void Interactions::interact(Cat& c, Human& h) {
        interact(h, c);
}
void Interactions::interact(Cat& c, Squirel& s) {

}