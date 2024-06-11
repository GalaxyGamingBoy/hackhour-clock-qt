cmake_minimum_required(VERSION 3.16)

set(SOURCES main.cpp src/window.h src/window.cpp src/icons.h src/config/config.h src/config/config.cpp)

project(hackhour-qt VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt6 REQUIRED COMPONENTS Core Widgets GUi)
qt_standard_project_setup()
qt_add_executable(hackhour-qt ${SOURCES})

add_library(QFontIcon lib/qfonticon.cpp)
target_link_libraries(QFontIcon PRIVATE Qt6::Core Qt6::Widgets Qt6::Gui)

target_link_libraries(hackhour-qt PRIVATE Qt6::Core Qt6::Widgets)
target_link_libraries(hackhour-qt PRIVATE QFontIcon)

set_target_properties(hackhour-qt PROPERTIES
    WIN32_EXECUTABLE ON
)