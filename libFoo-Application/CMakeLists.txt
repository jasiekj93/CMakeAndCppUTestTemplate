cmake_minimum_required(VERSION 3.1.0)
project(Foo-Application VERSION 0.1.0)

#Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True) 

#Add unit tests to library
add_subdirectory(${PROJECT_SOURCE_DIR}/tests)

#Set path to source files
set(CORE_SOURCE_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/libFoo/Application
)

#Add include paths
include_directories(../libFoo-Core)

#Build library
add_library(${PROJECT_NAME} 
    ${CORE_SOURCE_PATH}/Application.cpp)

#Export dependencies
target_include_directories(${PROJECT_NAME}
    INTERFACE ${PROJECT_SOURCE_DIR})