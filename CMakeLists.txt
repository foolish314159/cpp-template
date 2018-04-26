cmake_minimum_required(VERSION 3.0.0)
project(cpp-template VERSION 0.1.0)

include_directories(include)

set(SOURCES src/main.cpp)

add_executable(cpp-template ${SOURCES})
