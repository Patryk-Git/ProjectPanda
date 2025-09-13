cmake_minimum_required(VERSION 3.10)
project(opengl VERSION 1.0)
cmake_policy(SET CMP0074 NEW)

find_package(OpenGL REQUIRED)

add_executable(opengl src/main.cpp src/glad.c src/glad.h)

target_link_libraries(opengl glfw OpenGL::GL)