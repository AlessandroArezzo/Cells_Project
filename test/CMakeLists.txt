cmake_minimum_required(VERSION 3.3)

add_subdirectory(./lib/googletest)

set(gtest_SOURCE_DIR, ./lib/googletest/)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set (CMAKE_PREFIX_PATH "/Users/alessandroarezzo/Qt5.8.0/5.8/clang_64/lib/cmake")

#find_package( Qt5Core REQUIRED )
#find_package( Qt5Widgets REQUIRED )
#find_package( Qt5Gui REQUIRED )
find_package( Qt5Test REQUIRED)

set(TEST_SOURCE_FILES runAllTests.cpp FormulaMaxTests.h)

add_executable(runAllTests ${TEST_SOURCE_FILES})

target_link_libraries(runAllTests gtest gtest_main core ${Qt5Test_LIBRARIES})
