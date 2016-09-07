cmake_minimum_required(VERSION 3.3)
project(Cells_Project)


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
    mainwindow.ui Cell.cpp Cell.h Subject.h Observer.h Calculator.cpp Calculator.h Table.cpp Table.h)

add_executable(Cells_Project ${SOURCE_FILES})

qt5_use_modules( Cells_Project Core Widgets Gui )
