# CMakeList.txt EXAMPLE

cmake_minimum_required(VERSION 2.8)
project(first_project)

# CMake will search here for Find<pkg>. cmake files
SET(CMAKE_MODULE_PATH
    ${PROJECT_SOURCE_DIR}/cmake_modules)

#search for findsome_pkg.cmake file and load it\
find_package(some_pkg)

#add the include folders from some_pkg
include_directories((${some_pkg_INCLUDE_DIRS}))

#add the exectuble "main"
add_executable(main small_main.cpp)

#tell the linker to bind these binary objects
target_link_libraries(main ${some_pkg_LIBRARIES})