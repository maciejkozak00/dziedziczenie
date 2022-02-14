cmake_minimum_required(VERSION 3.16)
project(dziedziczenie)

set(CMAKE_CXX_STANDARD 14)

add_executable(dziedziczenie main.cpp Unit.cpp Ogre.cpp tests.cpp Berserker.cpp Berserker.h ArenaManager.cpp ArenaManager.h)