cmake_minimum_required(VERSION 2.8)

project(simple_lib)
set(CMAKE_BUILD_TYPE Release)

add_executable(useless main.cpp)

target_link_libraries(useless simple_lib)

#install(TARGETS simple_lib DESTINATION lib)
#install(FILES include/test.h DESTINATION include)
