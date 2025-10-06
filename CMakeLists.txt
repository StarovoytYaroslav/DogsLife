cmake_minimum_required(VERSION 4.0)
project(DogsLife)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

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
        Interactions.h
        Test.cpp
        Test.h
        Knight.cpp
        Knight.h
        sort.cpp
        sort.h
        Animal.cpp
        Animal.h
        Lecturer.cpp
        Lecturer.h
        City.cpp
        City.h
        Building.cpp
        Building.h
        House.cpp
        House.h
        Kastle.cpp
        Kastle.h
        Store.cpp
        Store.h
        Street.cpp
        Street.h)
