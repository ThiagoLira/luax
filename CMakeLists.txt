cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

project(luax)

file(GLOB SRC_FILES src/*.cpp src/*.h)

# add the executable
add_executable(${PROJECT_NAME} main.cpp ${SRC_FILES})
