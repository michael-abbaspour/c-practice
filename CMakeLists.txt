cmake_minimum_required(VERSION 3.27)
project(c_practice C)

set(CMAKE_C_STANDARD 11)

# Libraries
add_subdirectory(src/data_structures)
add_subdirectory(src/pointers)
add_subdirectory(src/searching)

# Executables
add_subdirectory(executables/data_structures)
add_subdirectory(executables/pointers)
add_subdirectory(executables/searching)