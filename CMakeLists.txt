cmake_minimum_required(VERSION 3.3)
project(Cells_Project)

add_subdirectory(test)

set (CMAKE_PREFIX_PATH "/Users/alessandroarezzo/Qt5.8.0/5.8/clang_64/lib/cmake")

find_package( Qt5Core REQUIRED )
find_package( Qt5Widgets REQUIRED )
find_package( Qt5Gui REQUIRED )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    build-Cells_Project-Desktop_Qt_5_7_0_MinGW_32bit-Debug/debug/moc_mainwindow.cpp
        ui_mainwindow.h
    Cells_Project.pro
    Cells_Project.pro.user
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui Cell.cpp Cell.h Subject.h Observer.h Table.cpp Table.h Formula.h Formula.cpp FormulaMax.cpp FormulaMax.h FormulaMin.cpp FormulaMin.h FormulaSum.cpp FormulaSum.h FormulaMean.cpp FormulaMean.h)

add_executable(Cells_Project ${SOURCE_FILES} Formula.cpp)

include_directories(${Qt5Widgets_INCLUDE_DIRS})
include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${Qt5Gui_INCLUDE_DIRS})

add_library(core ${SOURCE_FILES} )

target_link_libraries(Cells_Project core ${Qt5Widgets_LIBRARIES} ${Qt5Core_LIBRARIES} ${Qt5Gui_LIBRARIES} )
