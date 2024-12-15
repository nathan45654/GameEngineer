# CMakeList.txt : CMake project for sdl_test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project (GameEngineer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)






