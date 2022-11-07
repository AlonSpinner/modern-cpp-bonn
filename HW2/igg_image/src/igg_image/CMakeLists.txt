#################### Import the 'io_tools' library here ########################
   
#################### Create a library 'image' below this line ##################
add_library(image STATIC image.cpp)

#executable
add_executable(main main.cpp)
target_link_libraries(main image)