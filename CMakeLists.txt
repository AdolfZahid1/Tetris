cmake_minimum_required(VERSION 3.3)
project(Tetris)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES AllegroBase.cpp AllegroBase.hpp main.cpp Constants.hpp AllegroApp.cpp AllegroApp.hpp Figure.cpp Figure.hpp ScreenSaver.cpp ScreenSaver.hpp Mainborder.cpp Mainborder.hpp player.cpp player.hpp Gameobject.cpp Gameobject.hpp figures/Kvadrat.hpp figures/Lebedjlevo.cpp figures/Lebedjpravo.hpp figures/Lebedjpravo.cpp figures/Kvadrat.cpp figures/Gelevo.hpp figures/Gelevo.cpp figures/ge.hpp figures/ge.cpp figures/row.cpp figures/threedownoneup.cpp)

add_executable(Tetris ${SOURCE_FILES})
find_library(allegro allegro_primitives)
target_link_libraries (Tetris allegro allegro_primitives )