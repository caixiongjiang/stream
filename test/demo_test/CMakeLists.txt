cmake_minimum_required(VERSION 3.10)
project(demoTest)

set(SOURCE_FILES test.cpp math.cpp)
add_executable(demo_test ${SOURCE_FILES})
target_link_libraries(demo_test gtest gtest_main)