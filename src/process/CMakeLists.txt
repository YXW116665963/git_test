message(STATUS "process:CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

project(myprocess)

add_library(${PROJECT_NAME} SHARED myprocess.cpp)

target_include_directories(${PROJECT_NAME}
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/../pnc_map)
# output
message(STATUS "PNCMAP_DIR: ${PNCMAP_DIR}")


target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map)