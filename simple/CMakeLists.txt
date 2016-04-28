cmake_minimum_required(VERSION 2.8)

project(simple_lib)
set(CMAKE_BUILD_TYPE Release)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(simple_lib SHARED src/test.cpp)

install(TARGETS simple_lib DESTINATION lib)
install(FILES include/test.h DESTINATION include)
