cmake_minimum_required(VERSION 3.10)

project(UTILITIES)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0")

add_executable(examples 
	       src/main.cpp
               src/bugs.cpp
               src/memory_leaks.cpp
	      )
message(STATUS "Project successfully configured")