project(cmake_test_project)
cmake_minimum_required(VERSION 3.0)

message(STATUS "!!!!!!!!!!! ${PROJECT_SOURCE_DIR}")

include_directories(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/tests)

enable_testing() #must be defined in top CMakeLists