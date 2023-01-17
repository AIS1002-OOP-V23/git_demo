cmake_minimum_required(VERSION 3.23)
project(git_demo)

set(CMAKE_CXX_STANDARD 17)

link_directories()

add_subdirectory(src)

add_executable(git_demo main.cpp)
target_link_libraries(git_demo PUBLIC personlib)

