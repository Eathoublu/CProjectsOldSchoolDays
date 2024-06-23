cmake_minimum_required(VERSION 3.10)
project(python_test C)

set(CMAKE_C_STANDARD 11)

link_libraries(python2.7)

add_executable(python_test main.c)