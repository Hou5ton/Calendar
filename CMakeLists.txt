cmake_minimum_required (VERSION 3.17.0)

set(PROJECT_NAME Calendar)
project(${PROJECT_NAME})

# Global settings. Should probably be moved to a separate file later.
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Core)
add_subdirectory(Editor)
add_subdirectory(External)
