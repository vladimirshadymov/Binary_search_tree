cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(tree_tests tree_tests.cpp bin_search_tree.hpp bin_search_tree.cpp node.hpp node.cpp)

target_link_libraries(tree_tests ${GTEST_LIBRARIES} pthread)