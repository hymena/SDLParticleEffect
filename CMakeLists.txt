cmake_minimum_required(VERSION 3.24)
project(sdlSetup)

set(CMAKE_CXX_STANDARD 17)

set(SDL2_INCLUDE_DIR D:/libs/SDL2-2.26.5/include)
set(SDL2_LIB_DIR D:/libs/SDL2-2.26.5/lib/x64)

include_directories(${SDL2_INCLUDE_DIR})
link_directories(${SDL2_LIB_DIR})

add_executable(sdlSetup main.cpp Screen.cpp Screen.h)

target_link_libraries(${PROJECT_NAME} SDL2main SDL2)