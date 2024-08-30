cmake_minimum_required(VERSION 3.2)
project(groundToAir)

# Specify the directory where the dependencies is located
set(DEPENDENCIES_DIR "${CMAKE_SOURCE_DIR}/dependencies")
# Specify the directory where the dis7 is located
set(DIS7_DIR "${DEPENDENCIES_DIR}/dis7")

# Specify the path to the shared library
include_directories(${DEPENDENCIES_DIR})

# set cmake module path
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/dependencies/cmake")

# SDL2 is required to build the examples
find_package(SDL2 REQUIRED)
find_package(SDL2_net REQUIRED)

#message(STATUS "CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(sender src/sender.cpp)
target_link_libraries(sender PRIVATE ${DIS7_DIR}/libOpenDIS7.so SDL2::Main SDL2::Net)