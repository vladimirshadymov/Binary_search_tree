cmake_minimum_required(VERSION 3.4)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(SOURCE_LIB bin_search_tree.cpp bin_search_tree.hpp node.cpp node.hpp)


add_library(bin_tree_lib STATIC ${SOURCE_LIB})

add_executable(tree_tests tree_tests.cpp)

target_link_libraries(tree_tests bin_tree_lib ${GTEST_LIBRARIES} pthread)