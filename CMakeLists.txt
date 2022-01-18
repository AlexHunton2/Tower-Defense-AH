cmake_minimum_required(VERSION 3.21)
project(Tower-Defense-AH)
add_subdirectory("external/SFML-2.5.1")
set(SOURCE
src/Structure/Level.cpp
src/Structure/Cell.cpp
)
add_executable(Tower-Defense-AH ${SOURCE} "src/main.cpp")
target_include_directories(Tower-Defense-AH PUBLIC "external/SFML-2.5.1/include")
target_include_directories(Tower-Defense-AH PUBLIC "include")
target_link_libraries(Tower-Defense-AH sfml-graphics)
target_link_libraries(Tower-Defense-AH sfml-window)
target_link_libraries(Tower-Defense-AH sfml-system)