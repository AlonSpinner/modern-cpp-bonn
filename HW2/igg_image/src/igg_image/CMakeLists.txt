#################### Import the 'io_tools' library here ########################
   
#################### Create a library 'image' below this line ##################
add_library(image STATIC image.cpp)
target_include_directories(image PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# message(STATUS "!!!!!!!!!!!!!!!!!!!!!!!!")
# message(STATUS ${CMAKE_CURRENT_SOURCE_DIR})
# message(STATUS "!!!!!!!!!!!!!!!!!!!!!!!!")