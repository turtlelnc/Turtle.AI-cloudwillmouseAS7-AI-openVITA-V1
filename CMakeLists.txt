cmake_minimum_required(VERSION 3.10)

project(turtle-openVITA)

set(CMAKE_CXX_STANDARD 11)

add_executable(turtle-openVITA
    src/main.cpp
    src/core/App.cpp
)

include_directories(src)
