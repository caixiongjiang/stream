cmake_minimum_required(VERSION 3.10)
project(stream)

# 架构
if (NOT DEFINED TARGET_ARCH)
    set(TARGET_ARCH pcie)
endif()

# 设置编译动态库的输出位置
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)

# Enable testing functionalities in CMake
enable_testing()

# Add Google Test as a subdirectory so CMake will build it
add_subdirectory(3rdparty/gtest)
# Include Google Test in our project
include_directories(3rdparty/gtest/include)

# cmake会编译test/demo_test目录下的CMakeLists.txt
add_subdirectory(test/demo_test)