message(STATUS "pnc_map:CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")


project(pnc_map)

add_library(${PROJECT_NAME}
SHARED
pnc_map.cpp
)