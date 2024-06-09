cmake_minimum_required(VERSION 3.16)

set(SOURCES main.cpp window.h window.cpp)

project(hackhour-qt VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

qt_add_executable(hackhour-qt ${SOURCES})

target_link_libraries(hackhour-qt PRIVATE Qt6::Widgets)

set_target_properties(hackhour-qt PROPERTIES
    WIN32_EXECUTABLE ON
)