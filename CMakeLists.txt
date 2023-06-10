#cmake_minimum_required(VERSION 3.24)
#project(OberverPattern)
#
#set(CMAKE_CXX_STANDARD 17)
#
#add_executable(OberverPattern main.cpp ChatSession.cpp ChatSession.h Subject.cpp Subject.h Observer.cpp Observer.h chatwindow.cpp chatwindow.h chatwindow.ui)


cmake_minimum_required(VERSION 3.24)
project(OberverPattern)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/Users/razvanuzum/Qt/6.5.0/macos/lib/cmake")

find_package(Qt6Core REQUIRED)
find_package(Qt6Widgets REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra")

add_executable(OberverPattern main.cpp ChatSession.cpp ChatSession.h Subject.cpp Subject.h Observer.cpp Observer.h chatwindow.cpp chatwindow.h chatwindow.ui)

target_link_libraries(OberverPattern Qt6::Core)
target_link_libraries(OberverPattern Qt6::Widgets)