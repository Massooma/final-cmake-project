cmake_minimum_required(VERSION 3.10)

project(MyLib)

add_library(MyLib factorial.cpp fibonacci.cpp palindrome.cpp prime.cpp example_class.cpp)
target_include_directories(MyLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
