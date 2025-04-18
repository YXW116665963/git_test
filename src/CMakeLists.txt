message(STATUS "main:PROCESS_DIR: ${PROCESS_DIR}")
message(STATUS "main:PNCMAP_DIR: ${PNCMAP_DIR}")

project(planning_main)

add_subdirectory(pnc_map)
add_subdirectory(process)


add_executable(${PROJECT_NAME} planning_main.cpp)
target_include_directories(${PROJECT_NAME}
PUBLIC
${PROCESS_DIR})

target_link_libraries(${PROJECT_NAME}
PUBLIC
myprocess)