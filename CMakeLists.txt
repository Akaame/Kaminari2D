cmake_minimum_required(VERSION 3.5)

project(Kaminari2D)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

set(Kaminari2D_HEADER_DIR Headers)
set(Kaminari2D_SRCDIR Source)
file(GLOB Kaminari2D_HEADERS ${Kaminari2D_HEADER_DIR}/*.h)
file(GLOB Kaminari2D_SRCS ${Kaminari2D_SRCDIR}/*.cpp)

add_compile_options("-std=gnu++11")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${SDL2_IMAGE_INCLUDE_DIRS})
link_libraries(${SDL2_LIBRARIES})
link_libraries(${SDL2_IMAGE_LIBRARIES})
add_executable(Main main.cpp ${Kaminari2D_SRCS})
