cmake_minimum_required(VERSION 3.5)

project(FirstGame)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

set(FirstGame_HEADER_DIR Headers)
set(FirstGame_SRCDIR Source)
file(GLOB FirstGame_HEADERS ${FirstGame_HEADER_DIR}/*.h)
file(GLOB FirstGame_SRCS ${FirstGame_SRCDIR}/*.cpp)

add_compile_options("-std=gnu++11")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${SDL2_IMAGE_INCLUDE_DIRS})
link_libraries(${SDL2_LIBRARIES})
link_libraries(${SDL2_IMAGE_LIBRARIES})
add_executable(Main main.cpp ${FirstGame_SRCS})
