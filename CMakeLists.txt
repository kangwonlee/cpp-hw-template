# begin CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(MyProject C)

# Add /utf-8 compiler option for MSVC (Visual Studio)
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")

# Build the main program
add_executable(my_exec src/main.c)
# end CMakeLists.txt
