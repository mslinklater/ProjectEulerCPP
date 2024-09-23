cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(projecteuler LANGUAGES CXX)

add_compile_options(-std=c++20)

add_executable(projecteuler main.cpp 
                            problem1.cpp
                            problem2.cpp
                            problem3.cpp
                            problem4.cpp
                            problem5.cpp
                            problem6.cpp
                            problem7.cpp)
