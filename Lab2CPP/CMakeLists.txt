add_executable(lab2 lab2.cpp)
target_include_directories(lab2 PUBLIC ../LibraryCPP)
target_link_libraries(lab2 LibraryCPP)

add_test(NAME TestLab2_Example COMMAND lab2 ${CMAKE_CURRENT_SOURCE_DIR}/input1.txt)
set_property(TEST TestLab2_Example PROPERTY PASS_REGULAR_EXPRESSION "YES")

add_test(NAME TestLab2_ExampleBad COMMAND lab2 ${CMAKE_CURRENT_SOURCE_DIR}/input2.txt)
set_property(TEST TestLab2_ExampleBad PROPERTY PASS_REGULAR_EXPRESSION "NO")

add_test(NAME TestLab2_Simple COMMAND lab2 ${CMAKE_CURRENT_SOURCE_DIR}/input3.txt)
set_property(TEST TestLab2_Simple PROPERTY PASS_REGULAR_EXPRESSION "YES")

add_test(NAME TestLab2_Nested COMMAND lab2 ${CMAKE_CURRENT_SOURCE_DIR}/input4.txt)
set_property(TEST TestLab2_Nested PROPERTY PASS_REGULAR_EXPRESSION "YES")

add_test(NAME TestLab2_Unclosed COMMAND lab2 ${CMAKE_CURRENT_SOURCE_DIR}/input5.txt)
set_property(TEST TestLab2_Unclosed PROPERTY PASS_REGULAR_EXPRESSION "NO")

add_test(NAME TestLab2_Mismatch COMMAND lab2 ${CMAKE_CURRENT_SOURCE_DIR}/input7.txt)
set_property(TEST TestLab2_Mismatch PROPERTY PASS_REGULAR_EXPRESSION "NO")
