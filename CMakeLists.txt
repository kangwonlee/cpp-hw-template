# begin CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(HelloWorld C)

# Set include directory
set(PROJECT_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Build the main program
add_executable(hello src/main.c)
target_include_directories(hello PRIVATE ${PROJECT_INCLUDE_DIR})
# end CMakeLists.txt
