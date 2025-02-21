cmake_minimum_required(VERSION 3.5)

project(SimpleGUI)

set(CMAKE_CXX_STANDARD 11)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(SimpleGUI main.cpp)

target_link_libraries(SimpleGUI Qt5::Widgets)

