cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(projecteuler LANGUAGES CXX)

add_compile_options(-std=c++20)

add_executable(problem1 problem1.cpp)
add_executable(problem2 problem2.cpp)
add_executable(problem3 problem3.cpp)