#-------------------------------------------------
#
# Project created by QtCreator 2016-08-31T18:55:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cells_Project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Calculator.cpp \
    Cell.cpp \
    Table.cpp

HEADERS  += mainwindow.h \
    Calculator.h \
    Cell.h \
    Observer.h \
    Subject.h \
    Table.h

FORMS    += mainwindow.ui
