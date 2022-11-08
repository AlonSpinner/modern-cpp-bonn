add_subdirectory(igg_image)

#executable
add_definitions(-DDATA_PATH="${PROJECT_SOURCE_DIR}/data")
add_executable(main main.cpp)
target_link_libraries(main image)
