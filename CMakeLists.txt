cmake_minimum_required(VERSION 3.6)
project(sum)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 ")

set(SOURCES
    sum.cpp
    sum.h
)

set(HEADERS
    sum.h
)

add_executable(sum ${SOURCES} ${HEADERS})

set_target_properties(
    sum PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON            
)

target_link_libraries(sum PRIVATE m)