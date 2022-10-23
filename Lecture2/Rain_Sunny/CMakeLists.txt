project(first_project) #mandatory
cmake_minimum_required(VERSION 3.1) #mandatory
set (CMAKE_CXX_STANDARD 11) #use c++11

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall")

#tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
#tell cmake to look for headers here:
# include_directories(include)
#create library "libtools"
add_library(tools src/tools.cpp)
#add executable "main"
add_executable(main src/tools_main.cpp)
#tell the linker to bin these objects togther
target_link_libraries(main tools)