
cmake_minimum_required (VERSION 3.10)
set(name "homework")
project ( ${name} )

# cmake module
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR})#.cmake 位置

# c++ version
set (CMAKE_CXX_STANDARD 11)

set(MY_HEADER_FILES
   # KinectSimple.h #.h文件改
)

set(MY_SOURCE_FILES 
   main.cpp#.cpp文件改
)
include_directories(
	${PROJECT_SOURCE_DIR}	
)

add_executable(${name}
	${MY_HEADER_FILES}
	${MY_SOURCE_FILES}
	)

