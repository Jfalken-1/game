cmake_minimum_required(VERSION 3.30)
project(Game2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Game2 main.cpp
        Container.cpp
        Container.h
        Player.cpp
        Player.h
        Item.cpp
        Item.h)
