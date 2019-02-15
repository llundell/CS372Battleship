cmake_minimum_required(VERSION 3.13)
project(cs372)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cs372
        catch2.hh
        factorial.cpp
        factorial_tests.cpp
        string_calc_tests.cpp
        stringcalc.cpp)
