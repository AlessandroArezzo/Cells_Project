cmake_minimum_required(VERSION 3.3)


find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(TEST_SOURCE_FILES runAllTests.cpp TestTable.cpp)

add_executable(runAllTests ${TEST_SOURCE_FILES})

target_link_libraries(runAllTests ${GTEST_BOTH_LIBRARIES} )