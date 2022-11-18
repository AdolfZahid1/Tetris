cmake_minimum_required(VERSION 3.3)
project(Tetris)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES AllegroBase.cpp AllegroBase.hpp main.cpp Constants.hpp AllegroApp.cpp AllegroApp.hpp Figure.cpp Figure.hpp ScreenSaver.cpp ScreenSaver.hpp square.cpp square.hpp Mainborder.cpp Mainborder.hpp figures/row.cpp figures/row.hpp figures/Kvadrat.cpp figures/Kvadrat.hpp figures/threedownoneup.cpp figures/threedownoneup.hpp figures/Lebedjpravo.cpp figures/Lebedjpravo.hpp figures/Lebedjlevo.cpp figures/Lebedjlevo.hpp figures/ge.cpp figures/ge.hpp figures/Gelevo.cpp figures/Gelevo.hpp player.cpp player.hpp Gameobject.cpp Gameobject.hpp)

add_executable(Tetris ${SOURCE_FILES})
find_library(allegro allegro_primitives)
target_link_libraries (Tetris allegro allegro_primitives )