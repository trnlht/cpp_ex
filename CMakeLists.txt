cmake_minimum_required(VERSION 3.10)

project(cpp_ex)

add_subdirectory(strings)

add_executable(cpp_ex main.cpp)

target_link_libraries(cpp_ex PUBLIC strings)

target_include_directories(cpp_ex PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/strings"
                          )



