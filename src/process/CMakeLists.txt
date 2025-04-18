
project(myprocess)

add_library(${PROJECT_NAME} SHARED myprocess.cpp)

target_include_directories(${PROJECT_NAME}
PUBLIC
${PNCMAP_DIR})
# output
message(STATUS "PNCMAP_DIR: ${PNCMAP_DIR}")


target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map)