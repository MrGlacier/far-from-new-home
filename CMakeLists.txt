## Allgemeine Einstelungen
cmake_minimum_required(VERSION 3.10) # CMake Version Püfung

# Den Projekt Namen setzten
project(TheLongJourney CXX) # Projekt Name setzten

# c++20 Standart setzten
set(CMAKE_CXX_STANDARD 20)

# 'dasmig/name-generator' ext lib
add_library(
	NameGenerator
	src/nameGenerator/namegen.hpp
	src/nameGenerator/namegen.cpp
	)

set_target_properties(NameGenerator PROPERTIES LINKER_LANGUAGE CXX)

## Source Files / etc..
set(SOURCE_FILES src/main.cpp)

add_executable(TheLongJourney ${SOURCE_FILES})

target_link_libraries(TheLongJourney PRIVATE NameGenerator)

