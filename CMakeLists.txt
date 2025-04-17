
# output
message(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")

# sys set
cmake_minimum_required(VERSION 3.20.0)
set(CMAKE_CXX_STANDARD 17)
# pro set
project(planning)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 
include_directories(${PROJECT_SOURCE_DIR}/include)
aux_source_directory(./ SRC_LIST)
add_executable(planning_app ${SRC_LIST})


