cmake_minimum_required(VERSION 3.6)
project(Algorithms)

set(CMAKE_CXX_STANDARD 11)

#Bring the headers into the project
include_directories(sorting/src)

# manually identify source files
set(SOURCES main.cpp sorting/src/insertion.cpp)

# add the executable
add_executable(main ${SOURCES})

