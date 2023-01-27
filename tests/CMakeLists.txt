find_package(GTest REQUIRED)

add_executable(lib_test lib_test.cpp)

target_link_libraries(lib_test
 PRIVATE
  GTest::GTest
  lib)

add_test(lib_gtests lib_test)
