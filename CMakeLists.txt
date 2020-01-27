cmake_minimum_required(VERSION 3.14)
project(cpp_help)

set(CMAKE_CXX_STANDARD 11)

#find_package( Curses REQUIRED )
#include_directories( ${CURSES_INCLUDE_DIRS} )
#target_link_libraries( Project1 ${CURSES_LIBRARIES} )

add_executable(h_string h_string/h_string.cpp)
add_executable(h_datatypes h_datatypes/h_datatypes.cpp)
add_executable(h_colored_console_output h_colored_console_output/main.cpp)
add_executable(h_class h_class/classTestMain.cpp)
add_executable(h_list h_list/listStructMain.cpp)
add_executable(h_calculations h_calculations/calculations.cpp)