# output
message(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message(STATUS "git_test:CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

# sys set
cmake_minimum_required(VERSION 3.20.0)
set(CMAKE_CXX_STANDARD 17)
# pro set
project(planning)

# my var
## 必须在add_subdirectory之前设置，否则不生效！！！
set(PROCESS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/process)
set(PNCMAP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/pnc_map)

# 设置动态库和exe输出路径，会传递到子cmake
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin)
set(LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin)
add_subdirectory(src)

#win


#linux






