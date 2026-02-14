cmake_minimum_required(VERSION 4.1)
project(oleg_pe4eneg_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(oleg_pe4eneg_2 main.cpp
        hello.c
        named_hello.c
        arithmetic_test.c
        who_is_max.c)
