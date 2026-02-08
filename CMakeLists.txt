# begin CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(MyProject C)

set(PROJECT_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add /utf-8 compiler option for MSVC (Visual Studio)
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")

# Build the shared library
add_library(pointers SHARED src/main.c)
target_include_directories(pointers PUBLIC ${PROJECT_INCLUDE_DIR})

# Build the main program
add_executable(my_program src/main.c src/main.c)
target_link_libraries(my_program m)
target_include_directories(my_program PRIVATE ${PROJECT_INCLUDE_DIR})
# end CMakeLists.txt
