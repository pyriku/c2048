cmake_minimum_required(VERSION 2.8)

project(app_project)

add_executable(myapp src/main.cpp src/board.cpp)

install(TARGETS myapp DESTINATION bin)
