cmake_minimum_required(VERSION 3.30)
project(practic_oop)

set(CMAKE_CXX_STANDARD 20)

add_executable(practic_oop main.cpp
        Model.h
        Repository.h
        Repository.cpp
        Service.h
        Service.cpp
        ui.h
        ui.cpp
)
