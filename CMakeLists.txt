cmake_minimum_required(VERSION 3.5)

project(DLinkedList LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DLinkedList main.cpp dlinkedlist.h dlinkedlist.cpp)
