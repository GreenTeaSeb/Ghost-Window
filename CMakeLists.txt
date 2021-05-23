cmake_minimum_required(VERSION 3.5)

project(ghost_window LANGUAGES C)

find_package(X11 REQUIRED)
link_libraries(${X11_LIBRARIES})
include_directories(${X11_INCLUDE_DIR})
add_executable(ghost_window main.c)
