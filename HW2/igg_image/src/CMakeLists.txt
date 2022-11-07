add_subdirectory(igg_image)

#executable
add_executable(main main.cpp)
target_link_libraries(main image)
