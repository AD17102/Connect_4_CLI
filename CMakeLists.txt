cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(connect_4_CLI)

target_include_directories(connect_4 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(connect_4 ${SRC_FILES} )
target_compile_options(${target} PRIVATE -Wall -Wextra -pedantic -std=c++20)
