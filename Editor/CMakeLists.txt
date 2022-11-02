project(Editor LANGUAGES CXX)

set(EDITOR_PROJECT_NAME Editor)

add_executable(${EDITOR_PROJECT_NAME} 
	src/main.cpp)

target_link_libraries(${EDITOR_PROJECT_NAME} Core)
