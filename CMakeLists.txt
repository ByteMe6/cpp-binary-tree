cmake_minimum_required(VERSION 4.3)
project(binaryTree)

set(CMAKE_CXX_STANDARD 26)

add_executable(binaryTree main.cpp
        treeStruct.h
        addNewNode.cpp
        print_tree2.cpp
        print_tree.cpp
        tree_search.cpp)