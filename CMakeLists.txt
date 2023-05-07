cmake_minimum_required(VERSION 3.24)
project(Sem5)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "*.c" "*.h")

add_executable(Sem5 main.c calc.h)
