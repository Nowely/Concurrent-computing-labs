cmake_minimum_required(VERSION 3.17)
project(ConcurrentComputingLabs)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenMP REQUIRED)
add_executable(ConcurrentComputingLabs main.cpp lcg_generator.h)
target_link_libraries(ConcurrentComputingLabs PRIVATE OpenMP::OpenMP_CXX)