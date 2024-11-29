cmake_minimum_required(VERSION 3.10)
project(lldb-crash-repro VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native")

add_executable(lldb-crash-repro lldb-crash-repro.cpp)
