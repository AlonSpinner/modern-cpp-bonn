#################### Import the 'io_tools' library here ########################
find_library(TOOLS
    NAMES io_tools
    PATHS ${LIBRARY_OUTPUT_PATH}
)
#################### Create a library 'image' below this line ##################
add_library(image STATIC image.cpp)
target_link_libraries(image ${TOOLS})
target_include_directories(image PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# message(STATUS "!!!!!!!!!!!!!!!!!!!!!!!!")
# message(STATUS ${CMAKE_CURRENT_SOURCE_DIR})
# message(STATUS "!!!!!!!!!!!!!!!!!!!!!!!!")