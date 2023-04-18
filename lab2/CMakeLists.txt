cmake_minimum_required(VERSION 3.23)
project(lab2)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab2 main.cpp src/App.cpp src/App.h src/Service/Console.cpp src/Service/Console.h src/Service/WorkWithFiles.cpp src/Service/WorkWithFiles.h)
