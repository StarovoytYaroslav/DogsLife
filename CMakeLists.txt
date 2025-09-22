cmake_minimum_required(VERSION 4.0)
project(DogsLife)

set(CMAKE_CXX_STANDARD 20)

add_executable(DogsLife main.cpp
        Dog.cpp
        Dog.h
        Cat.cpp
        Cat.h
        squirel.cpp
        squirel.h
        Human.cpp
        Human.h
        Interactions.cpp
        Interactions.h)
