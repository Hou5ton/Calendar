project(Editor LANGUAGES CXX)

set(CALENDAR_PROJECT_NAME Core)

set(CALENDAR_PUBLIC_INCLUDES 
	includes/Application.hpp 
	includes/Date.hpp
	includes/Frame.hpp
	includes/Notice.hpp
	includes/Rendering.hpp
	)

set(CALENDAR_PRIVATE_SOURCES 
	src/Application.cpp
	src/Date.cpp
	src/Frame.cpp
	src/Notice.cpp
	src/Rendering.cpp)

add_library(${CALENDAR_PROJECT_NAME} STATIC
	${CALENDAR_PUBLIC_INCLUDES}
	${CALENDAR_PRIVATE_SOURCES})

target_include_directories(${CALENDAR_PROJECT_NAME} PUBLIC includes)
target_include_directories(${CALENDAR_PROJECT_NAME} PRIVATE src)
