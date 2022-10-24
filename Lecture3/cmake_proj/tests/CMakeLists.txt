add_subdirectory(/usr/src/gtest 
                ${PROJECT_BINARY_DIR}/gtest) #add gtest source folder
include(CTest) #include testing cmake package
add_executable(test_blah test_blah.cpp)
target_link_libraries(test_blah 
                      gtest gtest_main                
                      blah) #this is wierd... how can it know?
add_test(NAME test_blah COMMAND test_blah)
