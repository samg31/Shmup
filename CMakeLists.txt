CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT(space)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

ADD_EXECUTABLE(space ../src/main.cpp ../src/init_close.cpp
  ../src/globals.cpp ../src/images.cpp ../src/bullet.cpp
  ../src/player.cpp ../src/enemy.cpp ../src/ltimer.cpp
  ../src/game.cpp)

INCLUDE(FindPkgConfig)
PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES(space ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES})
