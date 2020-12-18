cmake_minimum_required(VERSION 3.1.0)
project(Foo VERSION 0.1.0)

#Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True) 

#Add unit tests to library
add_subdirectory(${PROJECT_SOURCE_DIR}/tests)

#Set path to source files
set(CORE_SOURCE_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/Foo
)

#Add include paths
#include_directories()

#Build executable
add_executable(${PROJECT_NAME} 
    ${CORE_SOURCE_PATH}/Main.cpp)

#Link libraries
target_link_libraries(${PROJECT_NAME} PUBLIC
    Foo-Application
    Foo-Core)