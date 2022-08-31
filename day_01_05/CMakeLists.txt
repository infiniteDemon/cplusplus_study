cmake_minimum_required(VERSION 3.23)
project(day_01)

set(CMAKE_CXX_STANDARD 14)

#add_executable(day01_out hello_world.cpp)

# 搜索当前目录下的所有.cpp文件
aux_source_directory(. SRC_LIST)
#add_library(demo ${SRC_LIST})
add_executable(demo ${SRC_LIST})
