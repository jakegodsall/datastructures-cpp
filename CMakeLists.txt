cmake_minimum_required(VERSION 3.26.0)

# Set the project name and version
project(DataStructuresApp VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories for the header files
include_directories(${CMAKE_SOURCE_DIR}/singly-linked-list)
include_directories(${CMAKE_SOURCE_DIR}/doubly-linked-list)
include_directories(${CMAKE_SOURCE_DIR}/stack)

# Create an executable
add_executable(DataStructuresApp main.cpp
               ./singly-linked-list/SinglyLinkedList.cpp
               ./singly-linked-list/SingleNode.cpp
               ./doubly-linked-list/DoublyLinkedList.cpp
               ./doubly-linked-list/DoubleNode.cpp
               ./stack/Stack.h)
