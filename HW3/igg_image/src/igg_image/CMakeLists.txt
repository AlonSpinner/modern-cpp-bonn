add_subdirectory(io_strategies)

add_library(image STATIC image.cpp)
target_link_libraries(image strategies)
# TODO: create image library from image.cpp.
# TODO: link image library to any other libraries if needed.
